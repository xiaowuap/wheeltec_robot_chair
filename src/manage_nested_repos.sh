#!/bin/bash

# Exit immediately if a command exits with a non-zero status.
set -e

# Check if we're in the root directory of a Git repository.
if [ ! -d .git ]; then
    echo "This script must be run in the root directory of a Git repository."
    exit 1
fi

# Retrieve the list of existing submodule paths.
if [ -f .gitmodules ]; then
    existing_submodules=$(git config --file .gitmodules --get-regexp path | awk '{print $2}')
else
    existing_submodules=""
fi

# Find all subdirectories containing a .git directory, excluding the top-level .git directory.
find . -type d -name .git -not -path './.git' -print0 | while IFS= read -r -d '' gitdir; do
    # Get the parent directory of the .git directory.
    subrepo=$(dirname "$gitdir")
    # Remove the leading './' from the subrepository path.
    subrepo=${subrepo#./}
    # Check if the subrepository is already a submodule.
    if echo "$existing_submodules" | grep -Fxq "$subrepo"; then
        echo "Submodule '$subrepo' already exists. Skipping."
    else
        echo "Adding submodule '$subrepo'..."
        # Navigate to the subrepository directory to retrieve its remote URL.
        (
            cd "$subrepo" || exit
            remote_url=$(git config --get remote.origin.url)
        )
        # If no remote URL is found, skip adding the submodule.
        if [ -z "$remote_url" ]; then
            echo "No remote URL found for '$subrepo'. Skipping."
            continue
        fi
        # Add the submodule to the main repository.
        git submodule add "$remote_url" "$subrepo"
    fi
done

