Hi there :) Want to learn how to create a dynamic library?

Write the following command:
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so


With the “*.c” — it takes all of the C source files in the current directory and makes a shared library called “liball.so.” The -fPIC flag allows the following code to be referenced at any virtual address at runtime. It stands for Position Independent Code.The library does not hold data at fixed addresses because its location in memory will change between programs. Object files get compiled by using the -shared flag. The compiler will later identify a library by searching for files beginning with “lib” and ending with the naming convention, .so



The program needs the path in order to look for the library files. So, you must type the following command to add that location to the environment variable called LD_LIBRARY_PATH.

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH




When using the dynamic library, type the following command:

gcc -g -wall -o app app.c liball.so