#!/bin/bash


# Define the python command
python_command=""

# Check if python3 is available
if command -v python3 &> /dev/null; then
    python_command="python3"

# Check if python is available
elif command -v python &> /dev/null; then
    python_command="python"

# Check if py is available
elif command -v py &> /dev/null; then
    python_command="py"
fi

#!/bin/bash


# find all python files in directory (iteratively) and create runner file for each
find . -type f -name "*.py" -print0 | while IFS= read -r -d '' py_file; do
    
    # acquire necessary values
    dir=$(dirname "$py_file")
    filename=$(basename "$py_file")

    # Change to the directory
    cd "$dir" || continue

    # Remove existing run.sh if it exists
    [ -e "run.sh" ] && rm -f "run.sh"

    # Generate run.sh using the specified file name
    echo "clear"
    echo ""
    echo "$python_command \"${filename}\"" > run.sh

    # Give run.sh permission to run
    chmod +x run.sh

    # Move back to the parent directory
    cd - >/dev/null
done
