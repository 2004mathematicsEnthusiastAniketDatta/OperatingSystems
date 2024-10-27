#!/bin/bash
#$Revision:001$
#Sun Oct 27 18:52:15 UTC 2024

#variables
BASE=/workspaces/OperatingSystems/shell_scripting/ARCHIVE_PROJ/files;
DAYS=10;
DEPTH=1;
RUN=0;
# Define the source and destination directories
SOURCE_DIR="/workspaces/OperatingSystems/shell_scripting/ARCHIVE_PROJ/files";
DESTINATION_DIR="/workspaces/OperatingSystems/shell_scripting/ARCHIVE_PROJ/archived_files";

# Check if the source directory exists
if [ ! -d "$SOURCE_DIR" ]; then
    echo "Source directory $SOURCE_DIR does not exist."
    exit 1
fi

# Check if the destination directory exists, create it if not
if [ ! -d "$DESTINATION_DIR" ]; then
    echo "Destination directory $DESTINATION_DIR does not exist, creating it."
    mkdir "$DESTINATION_DIR"
fi

# Archive files from the source directory to the destination directory
for FILE in "$SOURCE_DIR"/*; do
    if [ -f "$FILE" ]; then
        gzip $FILE || exit 1
        # Move (archive) the file, preserving permissions and timestamps
        mv -v $FILE.gz $DESTINATION_DIR
    fi
done

echo "Archiving completed."
