// Preprocessor directives

/* They process source code before the compiler
 * seizes it. Begin with # symbol. 
 * 
 * Example: #include -> it replaces the command 
 * after # with the file it refers to, then 
 * recursively processes the file as well
 * 
 * PS: C++ preprocessors do not understand C++.
 * They only follow preprocessor directives and
 * get source code ready for compiler. */
 
// Schematics of main()
 
/* A programa may have hundreds of files, but
 * one of them needs to have a main function.
 * There are two common designs for main: with
 * and without arguments */

// No argument
// Runs as program.exe
int main() {
    // code
    return 0;
}

// argc as argument count, argv as argument vector
// Runs as program.exe arg1 arg2
int main(int argc, char *argv[]) {
    // code
    return 0;
}