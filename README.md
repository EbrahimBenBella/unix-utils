# Unix Utilities 

## Overview
This project implements basic Unix utilities in C, including:

- **pwd**: Prints the current working directory.
- **echo**: Prints a user input string to stdout.
- **cp**: Copies a file from a given source to a destination.
- **mv**: Moves a file to a specified location.

Each utility is implemented as a separate C program.

## Installation and Compilation

### Prerequisites:
- A Unix-based system (Linux/macOS)
- GCC compiler

### Compilation:
To compile each utility, navigate to the project directory and run the following commands:

```bash
gcc -o pwd pwd.c
gcc -o echo echo.c
gcc -o cp cp.c
gcc -o mv mv.c
```

This will generate executable files for each utility.

## Usage

### `pwd` (Print Working Directory)
To print the current working directory:

```bash
./pwd
```

Example Output:

```
/home/user/project
```

### `echo` (Prints user input)
To print a user-input string:

```bash
./echo "Hello World"
```

Example Output:

```
Hello World
```

### `cp` (Copy Files)
To copy a file from a source to a destination:

```bash
./cp source.txt /tmp/destination.txt
```

This command copies `source.txt` to `/tmp/destination.txt`.

### `mv` (Move/Rename Files)
To move or rename a file:

```bash
./mv old_name.txt new_name.txt
```

This command moves or renames `old_name.txt` to `new_name.txt`.

## Notes:
- Ensure you have the necessary read/write permissions for the files and directories you're working with.
- If a command fails, it will print an appropriate error message.

## Contribution
Feel free to fork this repository, improve the utilities, and submit pull requests!

## License
This project is open-source and available under the MIT License.

