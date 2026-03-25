#include <stdio.h>

/*  in this main function, it takes two arguments.
    the first argument is the amount of arguments that were passed,
    the second is a list of "strings", which are the arguments
    
    they give you an argument count in the function for a reason.
    in python you could use the len function to find the length of an object,
    in c++, calculating lengths can be a lot harder.
    argv is a list of pointers to command line arguments in memory,
    so calculating the size of any argument using sizeof would always return
    8 (bytes) on a 64 bit machine, not the actual length of the string */
int main(int argc, char* argv[]) {
    /*  note: forgot to add this, if statements explained a little more below.
        this checks whether there are no other arguments,
        then prints a message and returns with a failed exit code */
    if(argc == 1) {
        printf("add some command line arguments\n");
        return 1;
    }

    // just printing something before i print the arguments
    printf("here is what you told me:\n");

    /*  in c++, there is no "for x in y" for iterable objects.
        you have to start at an index within the length of the object,
        and go until you've reached the end of the array.
        
        in this instance, we start at i = 0 (start of any array),
        and go until argc, the amount / length of arguments.
        after each iteration, we then increase i by 1, bound
        by the other 2 parts. */
    for(int i = 0; i < argc; i++) {
        /*  WARNING!! this line of code could be skipped by setting i to 1 instead of 0,
            im just including it for demonstration purposes.
            
            here is an if statement, which unlike python, must be encased in parentheses.
            if i is equal to zero, it will finish that iteration and move to the next,
            just like it does in python.

            this is just here so it doesn't print the command that executed the program.
            also, you don't need parentheses if it's just a single line */
        if(i == 0) continue;

        /*  here we define a variable, which is the current argument.
            the * after the variable type char means it's a pointer.
            a pointer is a type of variable that just points to another
            variable's location in memory.
            the value being set is whatever is at index i of the list of arguments */
        char* argument = argv[i];

        /*  formatting in c++ also sucks, in python you had nice fstrings,
            in c++ there's formatting with printf, but you use a %,
            followed by the data type specifier, %d is integer and %s is char*
            all arguments for formatting are passed after the string */
        printf("%d. %s\n", i, argument);
    }
}