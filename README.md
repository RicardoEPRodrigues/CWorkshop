# C Workshop

This project as 2 projects, Calculator and Cenix.

Calculator is a simple calculator that was created using C and GCC. It keeps a current value and you are able to do simple math operations.

Cenix is a more complex example using of C and pointers. It's a small example of a fictional Learning System. You can find two main structures, the student and the course.

## Building and Executing

To build and execute the examples, GCC was used with quite simple lines of code.

**Calculator**:

```
gcc calculator.c -o calculator.run

# OR

# with warning flags
gcc -Wall -pedantic -g3 -Og -Wuninitialized calculator.c -o calculator.run

# Run the program
./calculator.run 
```

**Cenix**:

```
gcc cenix.c Student.c Course.c -o cenix.run

# OR

# with warning flags
gcc -Wall -pedantic -g3 -Og -Wuninitialized cenix.c Student.c Course.c -o cenix.run 

# Run the program
./cenix.run
```

## Extra

For those of you that want to see a bit more code, you can find here more goodies.

### Calculator Local vs. Global

There is a different implementation of the calculator using a global variable instead of a local variable.

This implementation is in the file `calculator-global.c`. To compile and run, follow the same steps as the Calculator, but change the file name to the one previously mentioned. *This version also uses input using `char` instead of `int`*.

#### TL;DR

**Local Variable** is defined in a function and passed as a parameter to other functions:

```c
int add (int value, int increment) {
    return value + increment;
}

int main() {
    int counter = 5;

    counter = add(counter, 4);
    // counter now equals 9

    return 0;
}
```

**Global Variable** is defined out of a function and any function can use it:

```c
int counter = 5;

void add(int increment) {
    counter += increment;
}

int main() {
    add(4);
    // counter now equals 9

    return 0;
}
```

> **WARNING** misusing global variables can cause problems. When two functions use the same variable and its value is altered the state can become unpredictable.
