# c_18_score_array

## DESCRIPTION

The program demonstrates how arrays can make our program more logical and simplier. Let's say we want to ask the user for it's exam scores then calculate the average of them. If we would use separate variable for each number, the user would be compromised of how much scores he can input. If we use arrays we can easily implement a solution to ask the user how many numbers he wants to average then ask for the individual numbers. The progam will be easier to change if someone wants to input more numbers, he just needs to change **score_count** value, compile the code and run it.

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
