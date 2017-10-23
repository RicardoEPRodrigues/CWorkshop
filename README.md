# C Calculator Workshop

23/10/17

In this workshop a simple calculator was created using C and the command line.

In the Cenix folder there is also an example of a more complex use of C and how it can scale.

## Building

To build the examples GCC was used with quite simple lines of code.

Calculator:

```
gcc calculator.c -o Calculator

# with warning flags
gcc -Wall -pedantic -g3 -Og -Wuninitialized calculator.c -o Calculator 
```

Cenix:

```
gcc cenix.c Student.c Course.c -o Cenix

# with warning flags
gcc -Wall -pedantic -g3 -Og -Wuninitialized cenix.c Student.c Course.c -o Cenix 
```


