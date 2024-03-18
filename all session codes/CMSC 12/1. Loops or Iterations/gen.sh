#!/bin/bash

# Iterate through each folder and Python file in the current directory
for entry in *; do
    if [ -d "$entry" ]; then
        # Move into the folder
        cd "$entry" || continue

        # Check for Python files in the folder
        python_files=(*.py)

        # Check if there are Python files
        if [ ${#python_files[@]} -gt 0 ]; then

            # Remove existing run.sh if it exists
            [ -e "run.sh" ] && rm -f "run.sh"

            # Create run.sh with the specified code
            echo "python3 \"${python_files[0]}\"" > run.sh
            chmod +x run.sh  # Make run.sh executable
            echo "Created and made run.sh executable in '$entry'."
        fi

        # Move back to the parent directory
        cd ..
    fi
done
