# 0x07. C - Even more pointers, arrays and strings

C

-   By: Julien Barbier
-   Weight: 1
-   Project will start Sep 26, 2022 6:00 AM, must end by Sep 27, 2022 6:00 AM
-   was released at Sep 26, 2022 12:00 PM
-   An auto review will be launched at the deadline

### Concepts

_For this project, we expect you to look at this concept:_

-   [Pointers and arrays](https://alx-intranet.hbtn.io/concepts/60)

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/218/58fe6b229144b7fe5ebe88afe9ff5cabe2dd0863e1e79b2d02b4103c30b465dd.jpg)

## Resources

**Read or watch**:

-   [C - Pointer to Pointer](https://alx-intranet.hbtn.io/rltoken/eyikXPg7ZxCAEuWklB6xtQ "C - Pointer to Pointer")
-   [C – Pointer to Pointer with example](https://alx-intranet.hbtn.io/rltoken/ojr7OUUm2I-MULE4lWlrkg "C – Pointer to Pointer with example")
-   [Multi-dimensional Arrays in C](https://alx-intranet.hbtn.io/rltoken/HUZIJ6t55KM7d7FBCwWm8Q "Multi-dimensional Arrays in C")
-   [Two dimensional (2D) arrays in C programming with example](https://alx-intranet.hbtn.io/rltoken/Dx9nIBRj68sRBGe2NRI_aQ "Two dimensional (2D) arrays in C programming with example")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/YpzhlccIJNihbnYgObEStg "explain to anyone"), **without the help of Google**:

### General

-   What are pointers to pointers and how to use them
-   What are multidimensional arrays and how to use them
-   What are the most common C standard library functions to manipulate strings

### Copyright - Plagiarism

-   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
-   You are allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
-   Don’t forget to push your header file

## More Info

You do not need to learn about pointers to functions, arrays of structures, `malloc` and `free` - yet.

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going! (Hide quiz)

#### Question #0

What is the size of `p` in this code?

```
int *p;
```

-   4 bytes
    
-   8 bytes
    
-   16 bytes
    

#### Question #1

What is the size of `p` in this code?

```
int **p;
```

-   4 bytes
    
-   8 bytes
    
-   16 bytes
    

#### Question #2

In this following code, what is the value of `a[0][0]`?

```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

-   1
    
-   2
    
-   3
    
-   4
    

#### Question #3

In this following code, what is the value of `a[3][0]`?

```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

-   7
    
-   8
    
-   {7, 8}
    
-   5
    

#### Question #4

In this following code, what is the value of `a[3][1]`?

```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

-   7
    
-   9
    
-   {7, 8}
    
-   8
    

#### Question #5

In this following code, what is the value of `a[1][1]`?

```
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

-   1
    
-   2
    
-   3
    
-   4
    

#### Question #6

What is the size of `*p` in this code?

```
int **p;
```

-   4 bytes
    
-   8 bytes
    
-   16 bytes
    

#### Question #7

What is the size of `*p` in this code?

```
int *p;
```

-   4 bytes
    
-   8 bytes
    
-   16 bytes
    

#### Question #8

What is stored inside a pointer to a pointer to an int?

-   An address where an int is stored
    
-   An int
    
-   An address where an address is stored
    

## Tasks

### 0\. memset

mandatory

Write a function that fills memory with a constant byte.

-   Prototype: `char *_memset(char *s, char b, unsigned int n);`
-   The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
-   Returns a pointer to the memory area `s`

FYI: The standard library provides a similar function: `memset`. Run `man memset` to learn more.

```
julien@ubuntu:~/0x07$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
julien@ubuntu:~/0x07$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
julien@ubuntu:~/0x07$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `0-memset.c`

Done?! Help

×

#### Students who are done with "0. memset"

Check your code

×

#### Correction of "0. memset"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 1\. memcpy

mandatory

Write a function that copies memory area.

-   Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
-   The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
-   Returns a pointer to `dest`

FYI: The standard library provides a similar function: `memcpy`. Run `man memcpy` to learn more.

```
julien@ubuntu:~/0x07$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
julien@ubuntu:~/0x07$ ./1-memcpy 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05 0x07 0x07 0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
julien@ubuntu:~/0x07$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `1-memcpy.c`

Done?! Help

×

#### Students who are done with "1. memcpy"

Check your code

×

#### Correction of "1. memcpy"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 2\. strchr

mandatory

Write a function that locates a character in a string.

-   Prototype: `char *_strchr(char *s, char c);`
-   Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

FYI: The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.

```
julien@ubuntu:~/0x07$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
julien@ubuntu:~/0x07$ ./2-strchr 
llo
julien@ubuntu:~/0x07$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `2-strchr.c`

Done?! Help

×

#### Students who are done with "2. strchr"

Check your code

×

#### Correction of "2. strchr"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 3\. strspn

mandatory

Write a function that gets the length of a prefix substring.

-   Prototype: `unsigned int _strspn(char *s, char *accept);`
-   Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`

FYI: The standard library provides a similar function: `strspn`. Run `man strspn` to learn more.

```
julien@ubuntu:~/0x07$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
julien@ubuntu:~/0x07$ ./3-strspn 
5
julien@ubuntu:~/0x07$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `3-strspn.c`

Done?! Help

×

#### Students who are done with "3. strspn"

Check your code

×

#### Correction of "3. strspn"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 4\. strpbrk

mandatory

Write a function that searches a string for any of a set of bytes.

-   Prototype: `char *_strpbrk(char *s, char *accept);`
-   The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
-   Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

FYI: The standard library provides a similar function: `strpbrk`. Run `man strpbrk` to learn more.

```
julien@ubuntu:~/0x07$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
julien@ubuntu:~/0x07$ ./4-strpbrk 
llo, world
julien@ubuntu:~/0x07$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `4-strpbrk.c`

Done?! Help

×

#### Students who are done with "4. strpbrk"

Check your code

×

#### Correction of "4. strpbrk"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 5\. strstr

mandatory

Write a function that locates a substring.

-   Prototype: `char *_strstr(char *haystack, char *needle);`
-   The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared
-   Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

FYI: The standard library provides a similar function: `strstr`. Run `man strstr` to learn more.

```
julien@ubuntu:~/0x07$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
julien@ubuntu:~/0x07$ ./5-strstr 
world
julien@ubuntu:~/0x07$ 

```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `5-strstr.c`

Done?! Help

×

#### Students who are done with "5. strstr"

Check your code

×

#### Correction of "5. strstr"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 6\. Chess is mental torture

mandatory

Write a function that prints the chessboard.

-   Prototype: `void print_chessboard(char (*a)[8]);`

```
julien@ubuntu:~/0x07$ cat 7-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
julien@ubuntu:~/0x07$ ./7-print_chessboard 
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
julien@ubuntu:~/0x07$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `7-print_chessboard.c`

Done?! Help

×

#### Students who are done with "6. Chess is mental torture"

Check your code

×

#### Correction of "6. Chess is mental torture"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 7\. The line of life is a ragged diagonal between duty and desire

mandatory

Write a function that prints the sum of the two diagonals of a square matrix of integers.

-   Prototype: `void print_diagsums(int *a, int size);`
-   Format: see example
-   You are allowed to use the standard library

Note that in the following example we are casting an `int[][]` into an `int*`. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

```
julien@ubuntu:~/0x07$ cat 8-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
julien@ubuntu:~/0x07$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `8-print_diagsums.c`

Done?! Help

×

#### Students who are done with "7. The line of life is a ragged diagonal between duty and desire"

Check your code

×

#### Correction of "7. The line of life is a ragged diagonal between duty and desire"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

### 8\. Double pointer, double fun

#advanced

Write a function that sets the value of a pointer to a char.

-   Prototype: `void set_string(char **s, char *to);`

```
julien@ubuntu:~/0x07$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string
julien@ubuntu:~/0x07$ ./100-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
julien@ubuntu:~/0x07$ 
```

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `100-set_string.c`

Done?! Help

×

#### Students who are done with "8. Double pointer, double fun"

Check your code

×

#### Correction of "8. Double pointer, double fun"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 9\. My primary goal of hacking was the intellectual curiosity, the seduction of adventure

#advanced

Create a file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c "crackme2") executable.

-   Your file should contain the exact password, no new line, no extra space
-   `ltrace`, `ldd`, `gdb` and `objdump` can help
-   You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
-   Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x07-pointers_arrays_strings`
-   File: `101-crackme_password`

Done?! Help

×

#### Students who are done with "9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure"

Check your code

×

#### Correction of "9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Get a sandbox

×

#### Recommended Sandbox

Running only

### 1 image(1/2 Sandboxes spawned)

### Ubuntu 20.04

Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations

SSH

SFTP

[Webterm](https://alx-intranet.hbtn.io/user_containers/180679/webterm)

RestartDestroy

#### Credentials

**Host**b8509b999cdd.e297096d.alx-cod.online

**Username**b8509b999cdd

**Password**682776f7a96232a010c1

#### Web access

[HTTPS](https://b8509b999cdd.e297096d.alx-cod.online)[HTTP](http://b8509b999cdd.e297096d.alx-cod.online)[3000](http://b8509b999cdd.e297096d.alx-cod.online:3000)[4000](http://b8509b999cdd.e297096d.alx-cod.online:4000)[5000](http://b8509b999cdd.e297096d.alx-cod.online:5000)[5001](http://b8509b999cdd.e297096d.alx-cod.online:5001)[8000](http://b8509b999cdd.e297096d.alx-cod.online:8000)[8080](http://b8509b999cdd.e297096d.alx-cod.online:8080)

#### Port mapping

**SSH**50610

**HTTP**50609

**HTTPS**50608

**3000**50607

**MySQL**50606

**4000**50605

**5000**50604

**5001**50603

**8000**50602

**8080**50601

Copyright © 2022 ALX, All rights reserved.

×

#### Markdown Guide

#### Emphasis

```
**bold**
*italics*
~~strikethrough~~
```

#### Headers

```
# Big header
## Medium header
### Small header
#### Tiny header
```

#### Lists

```
* Generic list item
* Generic list item
* Generic list item

1. Numbered list item
2. Numbered list item
3. Numbered list item
```

#### Links

```
[Text to display](http://www.example.com)
```

#### Quotes

```
> This is a quote.
> It can span multiple lines!
```

#### Images

CSS style available: `width, height, opacity`

```
![](http://www.example.com/image.jpg)
![](http://www.example.com/image.jpg | width: 200px)
![](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)

```

#### Tables

```
| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John     | Doe      | Male     |
| Mary     | Smith    | Female   |

Or without aligning the columns...

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John | Doe | Male |
| Mary | Smith | Female |

```

#### Displaying code

```
`var example = "hello!";`

Or spanning multiple lines...

```
var example = "hello!";
alert(example);
```
```

(function(i,s,o,g,r,a,m){i\['GoogleAnalyticsObject'\]=r;i\[r\]=i\[r\]||function(){ (i\[r\].q=i\[r\].q||\[\]).push(arguments)},i\[r\].l=1\*new Date();a=s.createElement(o), m=s.getElementsByTagName(o)\[0\];a.async=1;a.src=g;m.parentNode.insertBefore(a,m) })(window,document,'script','//www.google-analytics.com/analytics.js','ga'); ga('create', 'UA-67152800-9', 'auto', { userId: '157530' } ); ga('send', 'pageview'); $(document).ready(function() { ga(function(tracker) { var clientId = tracker.get('clientId'); $('.ga-client-id').val(clientId); }); });