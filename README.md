0x1B. C - Sorting algorithms & Big O
====================================

C Algorithm Data structure

*   By: Alexandre Gautier
*   Weight: 2
*   Project to be done in teams of 2 people (your team: Olasunkanmi Oyetunji, Kingue Leo)
*   Project will start Oct 5, 2022 6:00 AM, must end by Oct 12, 2022 6:00 AM
*   was released at Oct 7, 2022 12:00 AM
*   An auto review will be launched at the deadline



Background Context
------------------

This project is meant to be done by groups of two students. Each group of two should [pair program](https://alx-intranet.hbtn.io/rltoken/gIcHRL9I7i1lw2CTAll37A "pair program") for at least the mandatory part.

Resources
---------

**Read or watch**:

*   [Sorting algorithm](https://alx-intranet.hbtn.io/rltoken/-j5MKLBlzZAC2RfJ5DTBIg "Sorting algorithm")
*   [Big O notation](https://alx-intranet.hbtn.io/rltoken/WRvrE2BaNVQFssHiUATTrw "Big O notation")
*   [Sorting algorithms animations](https://alx-intranet.hbtn.io/rltoken/ol0P7NbYVb5R31iOv4Q40A "Sorting algorithms animations")
*   [15 sorting algorithms in 6 minutes](https://alx-intranet.hbtn.io/rltoken/_I0aEvhfJ66Xyob6dd9Utw "15 sorting algorithms in 6 minutes") (_**WARNING**: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms_)

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/b-QhraVUoSGmQ1C4QfNoFw "explain to anyone"), **without the help of Google**:

### General

*   At least four different sorting algorithms
*   What is the Big O notation, and how to evaluate the time complexity of an algorithm
*   How to select the best sorting algorithm for a given input
*   What is a stable sorting algorithm

### Copyright - Plagiarism

*   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
*   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
*   You are not allowed to publish any content of this project.
*   Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
------------

### General

*   Allowed editors: `vi`, `vim`, `emacs`
*   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
*   All your files should end with a new line
*   A `README.md` file, at the root of the folder of the project, is mandatory
*   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
*   You are not allowed to use global variables
*   No more than 5 functions per file
*   Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like _printf, puts, …_ is totally forbidden.
*   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
*   The prototypes of all your functions should be included in your header file called `sort.h`
*   Don’t forget to push your header file
*   All your header files should be include guarded
*   A list/array does not need to be sorted if its size is less than 2.

### GitHub

**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

More Info
---------

### Data Structure and Functions

*   For this project you are given the following `print_array`, and `print_list` functions    

*   Our files `print_array.c` and `print_list.c` (containing the `print_array` and `print_list` functions) will be compiled with your functions during the correction.
*   Please declare the prototype of the functions `print_array` and `print_list` in your `sort.h` header file
*   Please use the provided data structure for doubly linked list

Please use the “short” notation (don’t use constants). Example: `O(nk)` or `O(wn)` should be written `O(n)`. If an answer is required within a file, all your answers files must have a newline at the end.

### Tests

Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://alx-intranet.hbtn.io/rltoken/YR-VWQbICB59wZs1eAaI3w "Random.org")
