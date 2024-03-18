#!/bin/bash


# find all c files in directory (iteratively) and create runner file for each
find . -type f -name "*.c" -print0 | while IFS= read -r -d '' c_file; do
    
    # acquire necessary values
    dir=$(dirname "$c_file")
    filename=$(basename "$c_file")

    # Change to the directory
    cd "$dir" || continue

    # Remove existing run.sh if it exists
    [ -e "run.sh" ] && rm -f "run.sh"

    # Generate run.sh using the specified file name
    echo "gcc \"${filename}\" -o a.out" > run.sh
    echo "chmod +x a.out" >> run.sh
    echo "clear"
    echo ""
    echo "./a.out" >> run.sh

    # Give run.sh permission to run
    chmod +x run.sh

    # Move back to the parent directory
    cd - >/dev/null
done
