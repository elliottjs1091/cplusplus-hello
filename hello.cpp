/*
In MacOS zsh
1: install homebrew (don't copy $)
    $ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
2: install clang
    $ brew install clang
*/

#include <iostream> 
/* 
Directives (#) are read and interpreted by the preprocessor.
<iostream> includes a section of the standard C++ code known as a header iostream.
This allows the program to perform standard input and output operations.
 */

int main()
{
    std::cout << "Hello,C++\n"; // Hello, C++
    std::cout << "It's nice to meet you~"; // It's nice to meet you~
}

/*
1: compile the cpp file into an executable in a shell with 
    $ clang++ hello.cpp -o <executable-file-name>
2: run the executable
3: good job! you now have your first c++ program on MacOS
*/