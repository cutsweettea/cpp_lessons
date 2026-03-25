/*  #include is basically the same as import in python,
    you are taking code from another library for use in your code.
    in this instance, stdio.h includes the printf function. */
#include <stdio.h>

/*  this is the main function, which is known as the "entry point".
    the entry point is the first function that is ran when the program starts.
    unlike python, you don't put code outside functions, classes, etc.
    you also don't use def to define a function, you use the data type
    that will be returned by the function instead.
    
    the return type for the main function is always int.
    the int that's returned is the exit code of the program.
    returning a 0 means the program ran with no fatal errors,
    anything besides 0 means something went wrong.
    
    you also need to use curly braces instead of a colon with indenting.
    the main function can take arguments, more on that in lesson_01*/
int main() {
    /*  printf is the same as print from python, with small differences.
        print in python has an automatically set argument called "end",
        that is always set to newline (\n), which is then appended to the end of the string.
        with printf, we need to add the newline (\n), or it'll look ugly. */
    printf("hello world!\n");
    /*  return works the same as python, it stops executing the function
        and returns the value after the return.
        in this instance, we return zero because everything worked*/
    return 0;
}

/*  to turn this code into an executable, you will use g++
    you can also use make to execute a list of commands,
    which can be found in the Makefile.
    to make any of the targets, you use "make {target name}".
    you can also execute the commands in the target's code,
    and that will do the same thing.
    to compile this, use "make lesson_00", then use "./lesson_00.bin" to run it */