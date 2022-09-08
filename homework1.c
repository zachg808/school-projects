/*****************************************************************
//
//  NAME:        Zach Gillespie
//
//  HOMEWORK:    1
//
//  CLASS:       ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        September 3, 2022
//
//  FILE:        homework1.c
//
//  DESCRIPTION:
//  This is a program for Homework 1 that was written using c code to output words when num is at certain values or loops are executing.
//
****************************************************************/

#include<stdio.h>

/*****************************************************************
//
//  Function name: main
//
//  DESCRIPTION:   This is the main function which is being used to write all the code in.
//
//  Parameters:    argc (int) : The number of elements in argv
//                 argv (char*[]) : An array of arguments passed
//                                  to the program.
//
//  Return values:  0 : success
//            
//
****************************************************************/

int main(int argc, char* argv[])
{
    int num, i;

    for (i = 0; i < 6; i++)
    {
        if (i < 2)
        {
            printf("Hello\n");
        }
        else if (i < 4)
        {        
            printf("World\n");
        }
        else
        {
            printf("!!!\n");
        }
    }

    num = 0;

    while (num < 3)
    {
      printf("While loop!\n");
      num = num + 1;
    }

    num = 0;

    do
    {
      printf("Do-while loop!\n");
      num = num + 1;
    }
    while (num < 3);

    return 0;
}

