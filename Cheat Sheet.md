# Materials for the course Introduction to Programming 2019

The course is going through the basics of programming with C++

## Course Scope
* **Operator Precedence** - Operators are listed top to bottom, in descending precedence.

![precedence_operator](https://i.stack.imgur.com/u3q2E.png)

![precedence_operator_scheme](https://media.geeksforgeeks.org/wp-content/uploads/20190708173715/Operator-Precedence-and-Associativity-2.jpg)

* **Literals**

* * *Integer Literals*

* * * An integer literal can be a decimal, octal, or hexadecimal constant. A prefix specifies the base or radix: 0x or 0X for hexadecimal, 0 for octal, and nothing for decimal.

* * * An integer literal can also have a suffix that is a combination of U and L, for unsigned and long, respectively. The suffix can be uppercase or lowercase and can be in any order.

```c++
        212         // Legal
        215u        // Legal
        0xFeeL      // Legal
        078         // Illegal: 8 is not an octal digit
        032UU       // Illegal: cannot repeat a suffix

        // Following are other examples of various types of Integer literals

        85         // decimal
        0213       // octal
        0x4b       // hexadecimal
        30         // int
        30u        // unsigned int
        30l        // long
        30ul       // unsigned long
```

* * *Floating-point Literals*

* * * A floating-point literal has an integer part, a decimal point, a fractional part, and an exponent part. You can represent floating point literals either in decimal form or exponential form.

* * * While representing using decimal form, you must include the decimal point, the exponent, or both and while representing using exponential form, you must include the integer part, the fractional part, or both. The signed exponent is introduced by e or E.

```c++
        3.14159       // Legal
        314159E-5L    // Legal
        510E          // Illegal: incomplete exponent
        210f          // Illegal: no decimal or exponent
        .e55          // Illegal: missing integer or fraction
```

* * *Boolean Literals*

* * * There are two Boolean literals and they are part of standard C++ keywords

* * * * A value of `true` representing true.
* * * * A value of `false` representing false.

```diff
- You should not consider the value of true equal to 1 and value of false equal to 0.
```

* * *Character Literals*

* * * Character literals are enclosed in single quotes. If the literal begins with `L` (uppercase only), it is a wide character literal (e.g., L'x') and should be stored in `wchar_t` type of variable . Otherwise, it is a narrow character literal (e.g., 'x') and can be stored in a simple variable of char type.

* * * A character literal can be a plain character (e.g., 'x'), an escape sequence (e.g., '\t'), or a universal character (e.g., '\u02C0').

* * * There are certain characters in C++ when they are preceded by a backslash they will have special meaning and they are used to represent like newline (\n) or tab (\t). Here, you have a list of some of such escape sequence codes.

    |Escape sequence|Meaning                                     |
    | ------------- |--------------------------------------------|
    | \\            |	\ character                              | 
    | \'            |	' character                              |
    | \"            |	" character                              |
    | \?            |	? character                              |
    | \a            |	Alert or bell                            |
    | \b            |	Backspace                                |
    | \f            |	Form feed                                |
    | \n            |	Newline                                  |
    | \r            |	Carriage return                          |
    | \t            |	Horizontal tab                           |
    | \v            |	Vertical tab                             |
    | \ooo          |	Octal number of one to three digits      |
    | \xhh . . .    |	Hexadecimal number of one or more digits |

```c++
        #include <iostream>
        using namespace std;

        int main() {
           cout << "Hello\tWorld\n\n";
           return 0;
        }
```

* * * When the above code is compiled and executed, it produces the following result.

```
        Hello   World
```

* * *String Literals*

* * * String literals are enclosed in double quotes. A string contains characters that are similar to character literals: plain characters, escape sequences, and universal characters.

* * * You can break a long line into multiple lines using string literals and separate them using whitespaces.

* * * Here are some examples of string literals. All the three forms are identical strings.

```
        "hello, dear"

        "hello, \

        dear"

        "hello, " "d" "ear"
```

* * *Defining Constants*
* * * There are two simple ways in C++ to define constants.

* * * * Using #define preprocessor.
* * * * Using const keyword.

* * * The #define Preprocessor
* * * * Following is the form to use #define preprocessor to define a constant.

```
#define identifier value
```

* * * * Following example explains it in detail.

```c++
        #include <iostream>
        using namespace std;

        #define LENGTH 10   
        #define WIDTH  5
        #define NEWLINE '\n'

        int main() {
           int area;  

           area = LENGTH * WIDTH;
           cout << area;
           cout << NEWLINE;
           return 0;
        }
```

* * * * When the above code is compiled and executed, it produces the following result −

```
        50
```

* * *The const Keyword*

* * * You can use const prefix to declare constants with a specific type as follows.

```c++
        const type variable = value;
```

* * * Following example explains it in detail −

```c++
        #include <iostream>
        using namespace std;

        int main() {
           const int  LENGTH = 10;
           const int  WIDTH  = 5;
           const char NEWLINE = '\n';
           int area;  

           area = LENGTH * WIDTH;
           cout << area;
           cout << NEWLINE;
           return 0;
        }
```

* * * When the above code is compiled and executed, it produces the following result −

```
        50
```

* **Input/ Output** - basic *standard library* tools to control your data flow

```c++
    #include <iostream>
    using namespace std;

    void main()
    {
        int g; // Initialize g
        cin >> g; // Input Value to g 
        cout << "Output is: "<< g; // Output g Value
    }
```

* **Types** - basic *variables* type to handle different data sets

```c++
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
```

* **Arithmetic Operations** - is a mathematical operation that takes two *variables* and performs a calculation on them.

```c++
    int a = 6;
    
    a += 6; // it is the same as a = a + 6; #returns a = 12
    a -= 6; // it is the same as a = a - 6; #returns a = 6
    
    ++a; // it is the same as a = a + 1; #returns a = 7
    --a; // it is the same as a = a - 1; #returns a = 6
    
    a++; // it is the same as return a and then increment a by 1 code: a; a = a + 1; #returns a = 6 and after return a = a + 1;
    a--; // it is the same as return a and then decrement a by 1 code: a; a = a - 1; #returns a = 7 and after return a = a - 1;
```

* **Logical Operations** - is a decision based on multiple conditions. Part of the conditions are logical operators. The logical operators help us to create logical conditions that lead us to some events.

* * *Logical Connections* 
* * * ```&& #returns 'and'```
* * * ```|| #returns 'or'```
* * * ```<var_1> == <var_2>```
* * * * #returns true if var_1 *is equal* to var_2
* * * * #returns false if var_1 *is not equal* to var_2
* * * ```<var_1> != <var_2>```
* * * * #returns true if var_1 *is not equal* to var_2 
* * * * #returns false if var_1 *is equal* to var_2
* * * ```<var_1> <= <var_2>```
* * * * #returns true if var_1 *is smaller or equal* to var_2
* * * * #returns false if var_1 *is bigger* then var_2
* * * ```<var_1> >= <var_2>```
* * * * #returns true if var_1 *is bigger or equal* to var_2
* * * * #returns false if var_1 *is smaller* then var_2
* * * ```<var_1> > <var_2>```
* * * * #returns true if var_1 *bigger* then var_2
* * * * #returns false if var_1 *is smaller or equal* to var_2
* * * ```<var_1> < <var_2>```
* * * * #returns true if var_1 *smaller* then var_2
* * * * #returns false if var_1 *is bigger or equal* to var_2
* * * ```<var_1> <condition> <var_2> ? <value_if_true> : <value_if_false>```

```c++
    if ( (<condition_1> == true) || (<condition_2> != false)) std::cout << "I am in\n";
    if ( (<condition_1> == true) && (<condition_2> == false)) std::cout << "I am in\n";
    if ( (<condition_1> == true) && (<condition_2> == false)) std::cout << "I am in\n";

    int a, b = 6, c = 8;
    a = b > c ? 10 : 15; // a = 15
```

* **Condition Operators** - *if*, *else*, *switch* are reserved words in C++ which help us to create events based on the logical operation

```c++
    // simple if-statement with an else clause
    int i = 2;
    
    if (i > 2) 
    {
        std::cout << i << " is greater than 2\n";
    } 
    else 
    {
        std::cout << i << " is not greater than 2\n";
    }
 
    // nested if-statement
    int j = 1;
    
    if (i > 1)
    {
        if (j > 2)
        {
            std::cout << i << " > 1 and " << j << " > 2\n";
        }
        else // this else is part of if (j > 2), not of if (i > 1)
        {
            std::cout << i << " > 1 and " << j << " <= 2\n";
        }
    }

    int i = 2;
    
    switch (i) {
        case 1: std::cout << "1";
        case 2: std::cout << "2";   //execution starts at this case label
        case 3: std::cout << "3";
        case 4:
        case 5: std::cout << "45";
                break;              //execution of subsequent statements is terminated
        case 6: std::cout << "6";
    }
 
    std::cout << '\n';
 
    switch (i) {
        case 4: std::cout << "a";
        default: std::cout << "d"; //there are no applicable constant_expressions 
                                   //therefore default is executed
    }
 
    std::cout << '\n';
 
    switch (i) {
        case 4: std::cout << "a";  //nothing is executed
    }
 
    // when enumerations are used in a switch statement, many compilers
    // issue warnings if one of the enumerators is not handled
    enum color {RED, GREEN, BLUE};
    switch(RED) {
        case RED:   std::cout << "red\n"; break;
        case GREEN: std::cout << "green\n"; break;
        case BLUE:  std::cout << "blue\n"; break;
    }
 
    // the C++17 init-statement syntax can be helpful when there is
    // no implicit conversion to integral or enumeration type
    switch (Device dev = get_device(); dev.state())
    {
       case SLEEP: /*...*/ break;
       case READY: /*...*/ break;
       case BAD: /*...*/ break;
    }
 
    // pathological examples
 
    // the statement doesn't have to be a compound statement
    switch(0)
        std::cout << "this does nothing\n";
 
    // labels don't require a compound statement either
    switch(int n = 1)
        case 0:
        case 1: std::cout << n << '\n';
```

* **Functions** - are used to perform certain actions, and they are important for *reusing code*: Define the code once, and use it many times.

```c++
    // Function declaration
    void myFunction();

    // The main method
    int main() {
      myFunction();  // call the function
      return 0;
    }

    // Function definition
    void myFunction() {
      cout << "I just got executed!";
    }
```

```c++
    // function name: "isOdd"
    // parameter list has one parameter, with name "n" and type int
    // the return type is bool
    
    bool isOdd(int n)
    {                      // the body of the function begins
        return n % 2;
    }                      // the body of the function ends
    
    // When a function is invoked, e.g. in a function-call expression, the parameters are initialized from the arguments (either provided    at the place of call or defaulted) and the statements in the function body are executed.

    int main()
    {
        for ( int i = 0; i < 10; i++ )
        {
          std::cout << isOdd(i) << ' '; // isOdd called 10 times, each
                                  // time n is copy-initialized from i
        }
        
        return 0;
    }
```

* **Recursion** - the process in which a function calls itself is known as recursion and the corresponding function is called the recursive function. The popular example to understand the recursion is factorial function.

* * **Factorial function** - f(n) = n*f(n-1), base condition: if n<=1 then f(n) = 1. Don’t worry we wil discuss what is base condition and why it is important.

* * In the following diagram. I have shown that how the factorial function is calling itself until the function reaches to the base condition.

![factorial_function_representation](https://beginnersbook.com/wp-content/uploads/2017/08/Recursion_in_Cpp.jpg)

* * Lets solve the problem using C++ program.

* * **C++ recursion example: Factorial**

```c++
        #include <iostream>
        
        using namespace std;
        
        //Factorial function
        
        int f(int n)
        {
           /* This is called the base condition, it is
            * very important to specify the base condition
            * in recursion, otherwise your program will throw
            * stack overflow error.
            */
            
           if (n <= 1)
           {
                return 1;
           }
           else
           {
                return n*f(n-1);
           }
        }
        
        int main()
        {
           int num;
           
           cout << "Enter a number: ";
           cin >> num;
           
           cout << "Factorial of entered number: " << f(num);
           
           return 0;
        }
```
```
        Output:
        Enter a number: 5
        Factorial of entered number: 120
```

* * **Base condition** - In the above program, you can see that I have provided a base condition in the recursive function. The condition is:

```c++
        if (n <= 1)
        {
                return 1;
        }
```

* * The purpose of recursion is to divide the problem into smaller problems till the base condition is reached. For example in the above factorial program I am solving the factorial function f(n) by calling a smaller factorial function f(n-1), this happens repeatedly until the n value reaches base condition(f(1)=1). If you do not define the base condition in the recursive function then you will get stack overflow error.

* * **Direct recursion vs indirect recursion**
* * * **Direct recursion:** When function calls itself, it is called direct recursion, the example we have seen above is a direct recursion example.
* * * **Indirect recursion:** When function calls another function and that function calls the calling function, then this is called indirect recursion. For example: function A calls function B and Function B calls function A.

* * **Indirect Recursion Example in C++**

```c++
        #include <iostream>
        
        using namespace std;
        
        int fa(int);
        int fb(int);
        
        int fa(int n)
        {
                if (n <= 1)
                {
                        return 1;
                }
                else
                {
                        return n*fb(n-1);
                }
        }
        
        int fb (int n)
        {
                if (n <= 1)
                {
                        return 1;
                }
                else
                {
                        return n*fa(n-1);
                }
        }
        
        int main()
        {
           int num=5;
           
           cout << fa(num);
           
           return 0;
        }
```
```
        Output:
        120
```

* **Arrays** - is a *collection of data* that holds fixed number of values *of same type*

```c++
    int mark[5] = {19, 10, 8, 17, 9}
    // change 4th element to 9
    mark[3] = 9;
    // take input from the user and insert in third element
    cin >> mark[2];
    // take input from the user and insert in (i+1)th element
    cin >> mark[i];
    // print first element of the array
    cout << mark[0];
    // print ith element of the array
    cout >> mark[i-1];
```

![basic_array_representation](https://cdn.programiz.com/sites/tutorial2program/files/c-array-initialization.jpg)

```c++
    #include <iostream>
    using namespace std;
    int main() 
    {
        int numbers[5], sum = 0;
        cout << "Enter 5 numbers: ";

        //  Storing 5 number entered by user in an array
        //  Finding the sum of numbers entered
        for (int i = 0; i < 5; ++i) 
        {
            cin >> numbers[i];
            sum += numbers[i];
        }

        cout << "Sum = " << sum << endl;  

        return 0;
    }
    
    // Output
    // Enter 5 numbers: 3
    // 4
    // 5
    // 4
    // 2
    // Sum = 18
```

* **Loop Statement** - allows us to *execute a statement* or group of statements *multiple times*
* * ```for```

![for_flow_diagram](https://www.tutorialspoint.com/cplusplus/images/cpp_for_loop.jpg)

```c++
    #include <iostream>
    using namespace std;

    int main () {
       // for loop execution
       for( int a = 10; a < 20; a = a + 1 ) {
          cout << "value of a: " << a << endl;
       }

       return 0;
    }
```
```
    Output:
    value of a: 10
    value of a: 11
    value of a: 12
    value of a: 13
    value of a: 14
    value of a: 15
    value of a: 16
    value of a: 17
    value of a: 18
    value of a: 19
```

```c++
    #include <iostream>
    #include <vector>

    int main()
    {
        // typical loop with a single statement as the body
        for (int i = 0; i < 10; ++i)
            std::cout << i << ' ';
        std::cout << '\n';

        // init-statement can declare multiple names, as long as they
        // can use the same decl-specifier-seq
        for (int i = 0, *p = &i; i < 9; i += 2) {
            std::cout << i << ':' << *p << ' ';
        }
        std::cout << '\n';

        // condition may be a declaration
        char cstr[] = "Hello";
        for (int n = 0; char c = cstr[n]; ++n)
            std::cout << c;
        std::cout << '\n';

        // init-statement can use the auto type specifier
        std::vector<int> v = {3, 1, 4, 1, 5, 9};
        for (auto iter = v.begin(); iter != v.end(); ++iter) {
            std::cout << *iter << ' ';
        }
        std::cout << '\n';

        // Basic C++ foreach
        for (auto value : v) {
            std::cout << value << ' ';
        }
        std::cout << '\n';

       // init-statement can be an expression
        int n = 0;
        for (std::cout << "Loop start\n";
             std::cout << "Loop test\n";
             std::cout << "Iteration " << ++n << '\n')
            if(n > 1)
                break;
        std::cout << '\n';
    }
```

* * ```while```

![while_flow_diagram](https://www.tutorialspoint.com/cplusplus/images/cpp_while_loop.jpg)

```c++
    #include <iostream>
    using namespace std;

    int main () {
       // Local variable declaration:
       int a = 10;

       // while loop execution
       while( a < 20 ) {
          cout << "value of a: " << a << endl;
          a++;
       }

       return 0;
    }
```
```
    Output:
    value of a: 10
    value of a: 11
    value of a: 12
    value of a: 13
    value of a: 14
    value of a: 15
    value of a: 16
    value of a: 17
    value of a: 18
    value of a: 19
```

```c++
    #include <iostream>

    int main() {
        // while loop with a single statement
        int i = 0;
        while (i < 10)
             i++;
        std::cout << i << '\n';

        // while loop with a compound statement
        int j = 2;
        while (j < 9) {
            std::cout << j << ' ';
            j += 2;
        }
        std::cout << '\n';

       // while loop with a declaration condition
       char cstr[] = "Hello";
       int k = 0;
       while (char c = cstr[k++])
           std::cout << c;
       std::cout << '\n';
    }
```

* * ```do while```

![do_while_flow_diagram](https://www.tutorialspoint.com/cplusplus/images/cpp_do_while_loop.jpg)

```c++
    #include <iostream>
    using namespace std;

    int main () {
       // Local variable declaration:
       int a = 10;

       // do loop execution
       do {
          cout << "value of a: " << a << endl;
          a = a + 1;
       } while( a < 20 );

       return 0;
    }
```
```
    Output:
    value of a: 10
    value of a: 11
    value of a: 12
    value of a: 13
    value of a: 14
    value of a: 15
    value of a: 16
    value of a: 17
    value of a: 18
    value of a: 19
```

* **Reference** - When a *variable* is declared as *reference*, it becomes an *alternative name* for an *existing variable*. A variable can be declared as reference by putting *``&``* in the declaration.```type &var-name = var(same type);```

```c++
    #include<iostream> 
    using namespace std; 

    int main() 
    { 
      int x = 10; 

      // ref is a reference to x. 
      int& ref = x; 

      // Value of x is now changed to 20 
      ref = 20; 
      cout << "x = " << x << endl ; 

      // Value of x is now changed to 30 
      x = 30; 
      cout << "ref = " << ref << endl ; 

      return 0; 
    }
```
```
    Output:
    x = 20
    ref = 30
```

* * Application
* * * **Modify the passed parameters in a function** : If a function receives a reference to a variable, it can modify the value of the    variable. For example, in the following program variables are swapped using references.

```c++
        #include<iostream> 
        using namespace std; 

        void swap (int& first, int& second) 
        { 
            int temp = first; 
            first = second; 
            second = temp; 
        } 

        int main() 
        { 
            int a = 2, b = 3; 
            swap( a, b ); 
            cout << a << " " << b; 
            return 0; 
        }
```
```
        Output:
        3 2 
```

* * * **Avoiding copy of large structures** : Imagine a function that has to receive a large object. If we pass it without reference, a new copy of it is created which causes wastage of CPU time and memory. We can use references to avoid this.

```c++
        struct Student { 
           string name; 
           string address; 
           int rollNo; 
        };

        // If we remove & in below function, a new 
        // copy of the student object is created.  
        // We use const to avoid accidental updates 
        // in the function as the purpose of the function 
        // is to print s only. 
        void print(const Student &s) 
        { 
            cout << s.name << "  " << s.address << "  " << s.rollNo; 
        }
```

* * * **In For Each Loops to modify all objects** : We can use references in for each loops to modify all elements.

```c++
        #include <bits/stdc++.h>  
        using namespace std;  

        int main()  
        {  
            vector<int> vect{ 10, 20, 30, 40 };  

            // We can modify elements if we  
            // use reference 
            for (int &x : vect)  
                x = x + 5; 

            // Printing elements 
            for (int x : vect)  
               cout << x << " ";  

            return 0;  
        }
```

* * * **In For Each Loops to avoid copy of objects** : We can use references in for each loops to avoid copy of individual objects when objects are large.

```c++
        #include <bits/stdc++.h>  
        using namespace std;  

        int main()  
        {  
            vector<string> vect{"geeksforgeeks practice",  
                             "geeksforgeeks write", 
                             "geeksforgeeks ide"};  

            // We avoid copy of the whole string 
            // object by using reference. 
            for (const auto &x : vect)  
               cout << x << endl;  

            return 0;  
        }
```

* **Pointer** - is a variable that stores the *memory address as its value*. The pointer variable points to a data type (like int) of the same type, and is created with the *``*``* operator. The address of the variable you're working with is assigned to the pointer.
```type *var-name;```

* * Here, type is the pointer's base type; it must be a valid C++ type and var-name is the name of the pointer variable. The asterisk you used to declare a pointer is the same asterisk that you use for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer. Following are the valid pointer declaration.

```c++
    int    *ip;    // pointer to an integer
    double *dp;    // pointer to a double
    float  *fp;    // pointer to a float
    char   *ch     // pointer to character
```

* * The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a long hexadecimal number that represents a memory address. The only difference between pointers of different data types is the data type of the variable or constant that the pointer points to.

* * As you know every variable is a memory location and every memory location has its address defined which can be accessed using ampersand (&) operator which denotes an address in memory. Consider the following which will print the address of the variables defined.

```c++
    #include <iostream>

    using namespace std;
    int main () {
       int  var1;
       char var2[10];

       cout << "Address of var1 variable: ";
       cout << &var1 << endl;

       cout << "Address of var2 variable: ";
       cout << &var2 << endl;

       return 0;
    }
```
```
    // The address for the variables will be different
    // every time you execute the code above
    
    Output:
    Address of var1 variable: 0xbfebd5c0
    Address of var2 variable: 0xbfebd5b6 
```

* * There are few important operations, which we will do with the pointers very frequently. 
* * * **(a)** We define a pointer variable. 
* * * **(b)** Assign the address of a variable to a pointer. 
* * * **(c)** Finally access the value at the address available in the pointer variable. This is done by using unary operator * that returns the value of the variable located at the address specified by its operand. Following example makes use of these operations.

```c++
    #include <iostream>

    using namespace std;

    int main () {
       int  var = 20;   // actual variable declaration.
       int  *ip;        // pointer variable 

       ip = &var;       // store address of var in pointer variable

       cout << "Value of var variable: ";
       cout << var << endl;

       // print the address stored in ip pointer variable
       cout << "Address stored in ip variable: ";
       cout << ip << endl;

       // access the value at the address available in pointer
       cout << "Value of *ip variable: ";
       cout << *ip << endl;

       return 0;
    }
```
```
    // The address for the variables will be different
    // every time you execute the code above
    
    Output:
    Value of var variable: 20
    Address stored in ip variable: 0xbfc601ac
    Value of *ip variable: 20
```

* * When you create a new pointer and you won't use it at the moment. It is a good practice to give the pointer default value - **nullptr**

```c++
    #include <iostream>

    using namespace std;

    int main () {
        // Pointer which won't be used now
        int *ptrToInt = nullptr;
        
        int a = 5;
        
        ptrToInt = &a;

        return 0;
    }
```

* * Difference between const int*, const int * const, and int const *

![difference_between_pointers](https://www.geeksforgeeks.org/wp-content/uploads/PointersWithConstants-768x401.png)

* * * **`int const*`**
* * * * *`int const*` is pointer to constant integer*
* * * * This means that the variable being declared is a pointer, pointing to a constant integer. Effectively, this implies that the pointer is pointing to a value that shouldn’t be changed. Const qualifier doesn’t affect the pointer in this scenario so the pointer is allowed to point to some other address.
The first const keyword can go either side of data type, hence int const* is equivalent to const int*.

```c++
        #include <stdio.h> 

        int main(){ 
            const int q = 5; 
            int const* p = &q; 

            //Compilation error 
            *p = 7; 

            const int q2 = 7; 

            //Valid 
            p = &q2;  

            return 0; 
        }
```

* * * **`int *const`**
* * * * *`int *const` is a constant pointer to integer*
* * * * This means that the variable being declared is a constant pointer pointing to an integer. Effectively, this implies that the pointer shouldn’t point to some other address. Const qualifier doesn’t affect the value of integer in this scenario so the value being stored in the address is allowed to change.

```c++
        #include <stdio.h> 

        int main(){ 
            const int q = 5; 
            //Compilation error 
            int *const p = &q; 

            //Valid 
            *p = 7;  

            const int q2 = 7; 

            //Compilation error 
            p = &q2;  

            return 0; 
        }
```

* * * **`const int* const`**
* * * * *`const int* const` is a constant pointer to constant integer*
* * * * This means that the variable being declared is a constant pointer pointing to a constant integer. Effectively, this implies that a constant pointer is pointing to a constant value. Hence, neither the pointer should point to a new address nor the value being pointed to should be changed. The first const keyword can go either side of data type, hence const int* const is equivalent to int const* const.

```c++
        #include <stdio.h> 

        int main(){ 
            const int q = 5; 

            //Compilation error 
            const int* const p = &q; 

            //Compilation error 
            *p = 7; 

            const int q2 = 7; 

            //Compilation error 
            p = &q2; 

            return 0; 
        }
```

* * * **Memory Map**
* * * * One way to remember the syntax (according to Bjarne Stroustrup) is the spiral rule. The rule says, start from the name of the variable and move clockwise to the next pointer or type. Repeat until expression ends.

![spiral_rule_Bjarne_Stroustru](https://media.geeksforgeeks.org/wp-content/uploads/spiral-2.jpg)

* * * **Spiral rule**
* * * * The rule can also be seen as decoding the syntax from right to left.

![apply_spiral_rule_Bjarne_Stroustru](https://media.geeksforgeeks.org/wp-content/uploads/pointer-to-const-int-1.jpg)

* * * Hence,

```
        int const* is pointer to const int
        int *const is const pointer to int
        int const* const is const pointer to const int
        Using this rule, even complex declarations can be decoded like,
```

```
        int ** const is a const pointer to pointer to an int.
        int * const * is a pointer to const pointer to an int.
        int const ** is a pointer to a pointer to a const int.
        int * const * const is a const pointer to a const pointer to an int.
```

* **Struct** - *Structure* is a collection of variables of different data types under a single name. It is similar to a class in that, both holds a collecion of data of different data types.

![struct_example](https://cdn.programiz.com/sites/tutorial2program/files/cpp-structures_0.jpg)

* * **For example**: You want to store some information about a person: his/her name, citizenship number and salary. You can easily create different variables ```name, citNo, salary``` to store these information separately.

* * However, in the future, you would want to store information about multiple persons. Now, you'd need to create different variables for each information per person: ```name1, citNo1, salary1, name2, citNo2, salary2```

* * You can easily visualize how big and messy the code would look. Also, since no relation between the variables (information) would exist, it's going to be a daunting task.

* * A better approach will be to have a collection of all related information under a single name ```Person```, and use it for every person. Now, the code looks much cleaner, readable and efficient as well.

* * This collection of all related information under a single name ```Person``` is a structure.

* * **How to declare a structure in C++ programming?**

* * The ```struct``` keyword defines a structure type followed by an identifier (name of the structure).

* * Then inside the curly braces, you can declare one or more members (declare variables inside curly braces) of that structure. For example:

```c++
        struct Person
        {
            char name[50];
            int age;
            float salary;
        };
```

* * Here a structure ```person``` is defined which has three members: ```name, age``` and ```salary.```

* * When a structure is created, no memory is allocated.

* * The structure definition is only the blueprint for the creating of variables. You can imagine it as a datatype. When you define an integer as below:

```c++
        int foo;
```

* * The ```int``` specifies that, variable ```foo``` can hold integer element only. Similarly, structure definition only specifies that, what property a structure variable holds when it is defined.

* * **Note:** Remember to end the declaration with a semicolon **(;)**

* * **How to define a structure variable?**

* * Once you declare a structure ```person``` as above. You can define a structure variable as:

```c++
        Person bill;
```

* * Here, a structure variable ```bill``` is defined which is of type structure ```Person```.

* * When structure variable is defined, only then the required memory is allocated by the compiler.

* * Considering you have either 32-bit or 64-bit system, the memory of ```float``` is 4 bytes, memory of ```int``` is 4 bytes and memory of ```char``` is 1 byte.

* * Hence, 58 bytes of memory is allocated for structure variable ```bill```.

* * **How to access members of a structure?**

* * The members of structure variable is accessed using a **dot (.)** operator.

* * Suppose, you want to access ```age``` of structure variable ```bill``` and assign it 50 to it. You can perform this task by using following code below:

```c++
        bill.age = 50;
```

* * **Example: C++ Structure**

* * C++ Program to assign data to members of a structure variable and display it.

```c++
        #include <iostream>
        using namespace std;
        struct Person
        {
            char name[50];
            int age;
            float salary;
        };
        int main()
        {
            Person p1;

            cout << "Enter Full name: ";
            cin.get(p1.name, 50);
            cout << "Enter age: ";
            cin >> p1.age;
            cout << "Enter salary: ";
            cin >> p1.salary;
            cout << "\nDisplaying Information." << endl;
            cout << "Name: " << p1.name << endl;
            cout <<"Age: " << p1.age << endl;
            cout << "Salary: " << p1.salary;
            return 0;
        }
```
```
        Output:
        Enter Full name: Magdalena Dankova
        Enter age: 27
        Enter salary: 1024.4

        Displaying Information.
        Name: Magdalena Dankova
        Age: 27
        Salary: 1024.4
```

* * Here a structure ```Person``` is declared which has three members ```name, age``` and ```salary```.

* * Inside ```main()``` function, a structure variable ```p1``` is defined. Then, the user is asked to enter information and data entered by user is displayed.

## Project Structure
    .
    ├── ...
    ├── Tasks                   # Tasks Directory
    │   └── ...                 # etc.
    |
    ├── docs                    # Documentation files (alternatively `doc`)
    │   ├── TOC.md              # Table of contents
    │   ├── faq.md              # Frequently asked questions
    │   ├── misc.md             # Miscellaneous information
    │   ├── usage.md            # Getting started guide
    │   └── ...                 # etc.
    └── ...
    
## License
UNLICENSED
