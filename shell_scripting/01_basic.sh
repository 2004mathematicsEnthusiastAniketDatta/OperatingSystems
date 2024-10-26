#!/bin/bash
#shebang: a specific directive for bash interpreter
<<COMMENT
1. #!/bin/bash

This is the shebang line, which tells the system which interpreter to use to run the script. In this case, it's specifying the Bash shell. The # symbol is a comment character in Bash, but the shebang line is an exception - it's treated as a special directive.

When a script starts with a shebang line, the system will look for the specified interpreter (in this case, /bin/bash) and run the script using that interpreter. This line is only needed if you plan to run the script as an executable (i.e., ./script.sh); if you run it using bash script.sh, the shebang line is ignored.
COMMENT

echo "Hello World!" #sending output to terminal

