Unix Utilities Project
Overview
This project implements basic Unix utilities in C, including:
• pwd: Prints the current working directory.
• echo: Prints a user input string to stdout.
• cp: Copies a file from a given source to a destination.
• mv: Moves a file to a specified location.
Each utility is implemented as a separate C program.
Installation and Compilation
Prerequisites:
• A Unix-based system (Linux/macOS)
• GCC compiler
Compilation:
To compile each utility, navigate to the project directory and run:
gcc -o pwd pwd.c
gcc -o echo echo.c
gcc -o cp cp.c
gcc -o mv mv.c
This will generate executable files for each utility.
Usage
pwd (Print Working Directory)
./pwd
Example Output:
/home/user/project
echo (Prints user input)
./echo "Hello World"
Example Output:
Hello World

cp (Copy Files)
./cp source.txt /tmp/destination.txt
Copies source.txt to /tmp/destination.txt.
mv (Move/Rename Files)
./mv old_name.txt new_name.txt
Moves or renames old_name.txt to new_name.txt.
Notes:
• Ensure you have read/write permissions for the files and directories you are working with.
• If a command fails, it will print an appropriate error message.
Contribution
Feel free to fork this repository, improve the utilities, and submit pull requests!
License
This project is open-source and available under the MIT License.
