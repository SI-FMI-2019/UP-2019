# Introduction to Programming Notes

## Introduction

What is programming?

What is a program?

What’s the difference between high level and low level languages?

What is a compiler?

## FAQ

I’m completely lost. I don’t even know where to start from.

- https://www.tutorialspoint.com/cplusplus/index.htm is an easy resource to learn from

I need to learn more advanced concepts about C++. Where can I become a wizard?

- Read the documentation https://en.cppreference.com/w/ (honestly don’t do it, get a life)

What IDE to use for writing code?

- Visual Studio Community Edition. If you’re feeling brave anything will do, Notepad?

What do lines starting with `#something` mean in C++?

- Preprocessor directives. Complicated. Google it.

What is this magic `cin >>` and `cout <<`?

- Input/Output streams. You read/write to the console/terminal with them. That’s enough.

How to write a simple Hello World in C++?

```c++
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World";
    return 0;
}
```

Anything else?

- Ask your assistant/lecturer.

## Numeral Systems

1. Binary - `{0, 1}`
2. Decimal - `{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}`
3. Hex - `{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F}`. Usually the number is preceded by `0x`

### Questions

1. Why is converting between binary and hex easy and how to do it? (Elementary)
2. How to convert binary to decimal and vice versa? (Intermediate)
3. How to convert hex to decimal and vice versa? (Intermediate)
4. Are there any other numeral systems? (Advanced)

## Operators

1. Arithmetic `+ - * / %` 
2. Bitwise `^ | & ~ << >>`
3. Relational `== != > < >= <=`
4. Logical `! && ||`
5. Compound assignment `+= -= *= /= %= &= |= ^= <<= >>=`
6. Increment/Decrement `++ --` (Prefix and Postfix)
7. Memory management `new new[] delete delete[]`
8. Streams `<< >>`
9. Other `?: -> :: sizeof .` etc.
10. Even more? http://www.cplusplus.com/doc/tutorial/operators/

### Questions

1. What is the difference between postfix and prefix operators?

## Variables

### Uninitialized variables

Initialized variable: `int a = 5;`

Uninitialized variable: `int a;`

The problem with uninitialized variables is that we do not know what value it may have so it is unsafe to be used before some value is assigned to it.

### Identifiers

Identifiers are user-made names for variables, functions, etc.

Naming rules for identifiers: cannot start with a number or reserved symbols. i.e always start variable names with a letter **myVar** or underscore **_someVar**.

### Primitive (Fundamental) Data Types

1. `int` - Usually 4 bytes, can be 8 on x64 systems. (Whole numbers)
2. `char` - Usually 1 byte. (ASCII characters represented as whole numbers)
3. `bool` - Usually 1 byte. (true or false, aka. 1 or 0)
4. `float` - Usually 4 bytes. (Real numbers with approximate precision)
5. `double` - Usually 8 bytes. (Real numbers with approximate precision)
6. `pointer` - Address to object in memory (4 bytes on x86 and 8 bytes on x64 systems)
7. `reference` - Address to object in memory (constant)
8. `void` - Not an actual type. Mainly used as a placeholder for 'no data'. We can use it to say a function returns no data.We cannot initialize void variables. We can use it as a pointer - a generic pointer without saying what data type it is pointing to.
9. Useful resources:
   1. https://en.cppreference.com/w/cpp/language/types
   2. http://www.cplusplus.com/reference/climits/

### Data Type Modifiers

1. `signed` - Positive and Negative
2. `unsigned` - Only positive
3. `short` - Smaller in size (fewer bytes)
4. `long` - Bigger in size (more bytes)

### Constants

Constants are variables which cannot change their value. They must be given a value when created.

Constants are used for better code readability, macros, hardcoded values, conventions, etc.

### C-like casting with (type)

We can convert between different types of variables with the following syntax `(type we want to cast to) myVariable`.

Example: 

```c++
int a = (int) 'a'; // the variable has the value of the char 'a'
char A = 65.4; // (automatically cast to 65 which is 'A')
cout << (int)'A'; // outputs 65 (the ASCII code of the letter A)
cout << 2 / 4; // outputs 0 because we are doing integer division
cout << 2 / (float) 4; // outputs 0.5 because we are doing float division
```

Silent casting (aka Implicit casting) chains used by the compiler.

bool → char → short → int → long → float → double

unsigned char → unsigned short → unsigned int → unsigned long

### Questions

1. What is the difference between strongly typed and weakly typed languages? (Elementary)
2. What is the variable assignment priority, left to right or right to left? (Elementary)
3. Why does an expression like `!false - (0 || "0") - 'a'` return 1? (Intermediate)
4. What happens if we use an uninitialized variable? (Intermediate)
5. How to compare floats/doubles and why can't we use == most of the time? (Intermediate)
6. Can we swap two variables without using a temporary variable? (Advanced)
7. Why using a temporary variable to swap two variables is usually faster than other methods? (Super Advanced)

## Functions

A function is a block of code, which we have given a name and can reuse by calling that name.

The structure is **return-type** **function-name(parameters...)** **{ body(code); }**

Example:

```c++
int printHello() {
    cout << "Hello, world!";
    return 3;
};
// The return type is int, the function must return an int
// The function name is printHello, we can call that function using that name
// The body is the code between the { and }
```

### Parameters

Parameters are variables we can give to the function to use in its code.

Example:

```c++
int sum(int A, int B) { // A and B are the parameters of this function
	return A + B; // This is the code of the function
}

int main() {
    int P = sum(1, 2); // We are providing parameters A = 1 and B = 2
    // These parameters are substituted in the code of the function
    // return A + B; becomes
    // return 1 + 2;
    int G = sum(P, 10); // We can provide variables as parameters, here A = P = 3, B = 10
}
```

### Default parameters

Default parameters are optional parameters which the caller can leave out and they have a default value specified by the function.

Default parameters always come after all normal parameters.

Example:

```c++
int increment(int A, int step = 1) { // step is an optional/default parameter
    return A + step;
}
int main() {
    int P = increment(2, 10); // P = 12
    int D = increment(P); // Here we omit the step parameter and the default step = 1 is used
    // D = 13
}
```

### Function Overloading

A function with the same name but different parameters is called an overloaded function.

The same function name but with at least one different parameter type or different parameter count is an overload.

Example:

```c++
int sum(int a, int b) {
	return a + b;
}
float sum(float a, float b) {
	return a + b;
}
```

### Passing arguments by copy or by reference

When providing parameters to a function we can give the actual parameters or a copy. 

Example:

```c++
int increment(int A) { // passed by copy
    A++; // This A, is a local copy for the function, the A in main() is different A
	return A;
}
int main() {
    int A = 2;
    int B = increment(A); // B = 3, A = 2 still because when we called increment(A)
    // we made a copy of A and we actually called increment(copy of A)
}
```

Example:

```c++
int increment(int & A) { // passed by copy
	A++; // This A is a refenrece to the original A in main()
    return A;
}
int main() {
    int A = 2;
    int B = increment(A); // B = 3, A = 3 because when we called increment(A)
    // the parameter we passed was a pointer to A
}
```

### Questions

1. What does `inline` do? (Intermediate)
2. What are named parameters and why does C++ not have them? (Intermediate)
3. Can we have a function without a name? (Advanced)
4. Can we have a function with a variable number of arguments? (Super Advanced)

## Arrays

Array is a **collection** of **fixed-size** (cannot be changed after creation) of elements of the **same type**. In other words an array can have only ints or only chars or only strings, but an array cannot have pointers and chars.

Example:

```c++
int arr[5]; // No elements are initialized, they can have random unpredictable values
arr[0] = 42;
int arrAgain[5] = {1, 2, 3}; // initialize only the first 3 elements
```

### String

A string is a special array of chars which ends in a **null** aka **‘\0’** aka **0** as a number and the 0th item in the ASCII table.

```c++
const char * greeting = "Hello"; // This is an array of chars {'H', 'e', 'l', 'l', 'o', '\0'}
```

### Multidimensional array

Example:

```c++
// Static array
char greetings[2][5] = {
        { 'h', 'i', '\0' }, // when initializing char by char we have to manually put a '\0'
        { "hey" } // automatically gets a '\0' appended at the end
    };

// Dynamic array

// Allocate an array of pointers
char ** greetingsAgain = new char*[2];
for (int i = 0; i < 2; i++) {
    // Allocate an array at each pointer
    greetingsAgain[i] = new char[5];
}

strcpy(greetingsAgain[0], "Hey");
strcpy(greetingsAgain[1], "Hi");

// Free the allocated space after we are done using it
for (int i = 0; i < 2; i++) {
    delete[] greetingsAgain[i];
}
delete[] greetingsAgain;
```

### Questions

1. How is new int[10] stored in memory? (Elementary)
2. How is new int*[10] stored in memory? (Intermediate)
3. How are static arrays stored in memory? (Intermediate)
4. Why can’t we have an array of different types of items? (Intermediate)
5. Can we free only a part of a dynamically allocated array? (Advanced)
6. Can we have an array which resizes/shrinks itself when needed to add/remove items? (Advanced)
7. How are 2D static arrays stored in memory and why can't we treat them as double pointer? (Advanced)

## Enums

Custom named integer constants.

Mainly used to improve code readability and quality.

Example:

```c++
enum WeekDay {
    Monday, // = 0
    Tuesday, // = 1
    Wednesday, // = 2
    Thursday = 99, // = 99
    Friday, // = 100
    Saturday, // = 101
    Sunday // = 102
};
```

### Questions

1. Why would we want to use Enums and not just integers? (Intermediate)

## Structs (Classes)

Structs have two functionalities:

1. They can function as custom data types
2. They can have functions (methods)

### Fields

If we need a data type more complex than the primitive int, bool, etc. we have to write our own.

Example:

```c++
struct Point {
    int x;
    int y;
};
int main() {
    Point p {0, 1}; // p holds 2 integers
    cout << "Integer size: " << sizeof(int) << endl; // 4
    cout << "Point size: " << sizeof(Point) << endl; // 8 because it contains 2 ints
}
```

With this we have a data type which represents a point with 2 dimensions.

### Methods

Structs also support methods, which are functions bound to the given struct.

Example:

```c++
#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;

    double distanceTo(Point otherPoint) {
        return sqrt(
            (x + otherPoint.x) * (x + otherPoint.x)
            +
            (y + otherPoint.y) * (y + otherPoint.y)
        );
    }
};

int main() {
    Point A {0, 0};
    Point B;
    B.x = 1;
    B.y = 1;
    cout << A.distanceTo(B); // sqrt(2) = 1.41421
}
```

distanceTo cannot be used as a normal function. It must be used on an object of type Point.

### Questions

1. How to initialize a struct? (Elementary)
2. How to access the fields/methods of a struct? (Elementary)
3. What is the difference between class and struct? (Intermediate)
4. Why do we need both class and struct? (Intermediate)

## If-else (conditional statements)

Conditional statements can change what piece of code the program executes based on a certain condition.

Example:

```c++
if (2 < 1) {
    cout << "Something's wrong\n"; // Does not execute
} else if (2 == 1) {
    cout << "I can feel it, almost there\n"; // Does not execute
} else {
    cout << "2 is indeed bigger than 1\n"; // Executes
}
```

### Questions

1. Can we write shorter if statements?

## Switch

Switch is used when we have many conditions and wish to avoid writing many nested if-else blocks.

Example:

```c++
char c = 'A';
switch(c) {
    case 'A':
        cout << 10;
        break;
    case 'B':
        cout << 11;
        break;
    default:
        cout << "Error, cannot process " << c << "\n";
        break;
}
```

### Questions

1. Should switch be preferred over if? (Elementary)
2. Is there a better way to write a switch with 20 cases? (Advanced)

## For/While loops

Execute a piece of code numerous times until some condition is met.

### For loop example

```c++
for (int i = 0; i < 5; i++) {
	cout << i << ", ";
}
```

### While loop example

```c++
int i = 0;
while (i < 5) {
	cout << i << ", ";
    i++;
}
```

### Break

Forcefully exit a loop.

```c++
int i = 0;
while (true) {
	cout << i << ", ";
    i++;
    if (i == 5) {
        break;
    }
}
```

### Continue

Skip the rest of the loop and go back to the first line.

```c++
int i = 0;
while (i < 5) {
    cout << i;
    i++;
    if (i >= 5) {
        continue;
    }
    cout << ", ";
}
```

### Questions

1. Can we have a for-loop without a body? (Elementary)
2. What is an infinite loop? (Elementary)

## Scope

Scopes are a level of vision of variables and functions.

One can think of a scope as the space between `{ and }`. For example the function body or a loop body or a struct body, etc.

### Global scope

Global scope is the highest level. Everyone can see functions, variables in the global scope.

Example:

```c++
int a = 5;
int main() {
    cout << a; // a from the global scope
}
```

### Local scope

All other scopes apart from the global are smaller subsets of visibility

Example:

```c++
int a = 5; // Global variable (in the global scope), it's not contained in anything
int main() {
    int b = 2; // This variable is in the scope of main(), it is contained in main()
}
```

In any lower scope we can access variables from the upper level scope, but from an upper level we cannot access the lower level. e.g from inside main we can access other global variables/functions, but from the global scope we don’t know what is in main and cannot access/view it.

Example:

```c++
int A = 5;
// Here we have no access to B, it's in the scope of main and from the view of the global scope it's invisible
int main() {
    int B = 2;
    cout << A; // we have access to the upper scope (global) so we can view and modify A
}
```

Example 2:

```c++
int main() {
    int A = 5;
    for (int i = 0; i < A; i++) {
        int B = 2;
        cout << B << A; // we have access to the upper scope variable A and to
        // the variable of this local scope B
    }
    // cout << B; // This would be an error because B is in a lower level scope
    // from the current, we are currently in the scope of main.
}
```

Example 3:

```c++
int A = 0;
// A = 0, B = doesn't exist
int main() {
    // A = 0, B = doesn't exist
    int A = 1;
    // Here A = 1, because the local A hides the global A, from this line downwards
    // we lose access to the global A because we've hidden it behind a local variable
    // A = 1, B = doesn't exist
    {
        // This is an unnamed scope, but it still works
        int B = 2;
        // A = 1, B = 2
    }
    // We have no access to B here
    // A = 1, B = doesn't exist
}
```

### Questions

1. Do we always need `{ and }` to mark a different scope or body of an if-else or for-loop? (Intermediate)
2. Can we call multiple expressions in a while-loop body without parentheses? (Intermediate)
3. Should we use `using namespace std`? (Intermediate)
4. What are namespaces? (Intermediate)

## Memory

The memory is an array of binary digits (bits) split into blocks of 8 (bytes)

8 bits = 1 byte

When we request memory from the OS we get at least one or more bytes. We cannot reserve less than 1 byte

Each memory block has an address by which we reference it

### Questions

1. What’s the difference between 32 and 64 bit computers? (Elementary)
2. Why is a 32 bit computer limited to 4GB RAM? (Elementary)
3. Why do we measure HDD space and RAM in Bytes and Internet speed is measured in Bits? (Intermediate)
4. What’s the difference between the Stack and the Heap? (Advanced)
5. What is little and big endianness? (Super advanced)
6. What memory segments does a program have? (Monster)

## Stack memory

On startup any program allocates some memory to work with called the stack.

The stack is limited and contains all local variables.

These variables are sometimes called statically allocated.

The limit of the stack is usually a few megabytes.

The stack stores a lot of other information about functions being called, the return values, etc. That is why recursion can cause issues when it’s very deep

Example of allocating variables on the stack:

```c++
#include <iostream>
using namespace std;
int main() {
	int a = 1;
    cout << a; // print 1
    int arr[2] = {2, 3}; // static array
    cout << arr[1]; // print 3;
}
```

### Questions

1. What is the typical stack size? (Elementary)
2. Why is recursion dangerous and may lead to stack overflow? (Intermediate)
3. Why is allocating big arrays in the stack a bad idea? (Intermediate)

## Heap memory

This is all the free RAM on your PC.

This memory can be allocated with a call to the operator `new` and it can be freed with a call to the operator `delete`. 

The limit of the heap is your free RAM. Usually gigabytes.

Example of allocating variables on the heap:

```c++
#include <iostream>
using namespace std;
int main() {
    int* a = new int(1);
    cout << *a; // print 1
    int* arr = new int[2]; // dynamic array
    arr[0] = 2;
    arr[1] = 3;
    cout << arr[1]; // print 3
    
    delete a; // free the memory you've allocated
    delete[] arr; // free the array as well
}
```

### Questions

1. What happens if we don’t free the memory we have allocated on the heap with `new`? (Intermediate)
2. Can we allocate an array of 0 elements? (Intermediate)
3. Can a call to `new` fail? (Advanced)

## Pointers

Pointers represent addresses in the memory.

One can view pointers as arrows pointing to where a variable is stored.

Allocating memory on the heap with `new` returns a pointer, it returns the address where our memory is allocated.

Example:

```c++
int main() {
	int A = 1;
    int* pointerToA = &A; // we now have 2 ways to access A, one is through A itself
    // and the second is using the pointer we made and which we hooked to A.
    *pointerToA = 2; // We can use the pointer to change what A contains
    cout << A; // Now A contains 2
}
```

Example 2:

```c++
int main() {
    int* arr = new int[2];
    
    arr[0] = 42; // set the 0th  element to 42
    *(arr + 1) = 12; // set the 1st element to 12
    // Adding 1 to a pointer is like adding sizeof(type of pointer), not strictly 1 byte
    // here adding 1 is like adding 4 because sizeof(int) = 4
    
    cout << *arr << endl; // print the 0th element
    cout << arr[1]; // print the 1st element
    
    delete[] arr; // make sure to free the allocated space on the heap
}
```

### Questions

1. How to access the fields/methods of an object pointed by a pointer? (Elementary)

## Recursion

A recursive function is one that calls itself.

Example:

```c++
int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}
```

### Questions

1. Can any loop be converted to a recursion? (Elementary)
2. What is the base case of a recursion? (Elementary)
3. Can any recursion be converted to a loop? (Intermediate)
4. If we have two functions A and B where A calls B and B calls A, is that recursion? (Intermediate)
5. What is tail-call optimization? (Super Advanced) https://stackoverflow.com/a/9814654

## Function pointers

We can have a pointer to a function just like we have pointers to variables.

Example:

```c++
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int mult(int a, int b) {
    return a * b;
}

int main() {
    int (*foo)(int, int) = add;
    cout << foo(5, 2) << endl; // 7 because we use add()
    foo = &mult;
    cout << (*foo)(5, 2) << endl; // 10 because we use mult()
}
```

## Advanced topics

1. Debugging
2. Header files
3. How does the compiler work?
4. Splitting code in different files
5. NULL and nullptr
6. Preprocessor directives

