/*****************************************************************
//
//  NAME:        Zach Gillespie
//
//  HOMEWORK:    2
//
//  CLASS:       ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        September 10, 2022
//
//  FILE:        homework2.c
//
//  DESCRIPTION:
//  This is a program for Homework 2 that was written using c code to output a table that determines if the values leading up to the user's input from 0 are multiples of 4.
//
****************************************************************/

#include<stdio.h>
#include<ctype.h>

/*****************************************************************
//
//  Function name: user_interface
//
//  DESCRIPTION:   This is a function that gets an integer input from the user.
//
//  Parameters:    none
//
//  Return values: user_input : returns the value the user inputed.
//            
//
****************************************************************/

int user_interface();

/*****************************************************************
//
//  Function name: is_multiple
//
//  DESCRIPTION:   This is a function that checks if a number is a multiple of 4.
//
//  Parameters:    int num : The number being checked.
//
//  Return values:  1 : The number is a multiple of 4.
//                  0 : The number is not a multiple of 4.
//            
//
****************************************************************/

int is_multiple(int);

/*****************************************************************
//
//  Function name: print_table
//
//  DESCRIPTION:   This is a function that prints a table of all multiples of 4 leading up to the input of the user.
//
//  Parameters:    int user_input : The input of the user.
//
//  Return values: none
//            
//
****************************************************************/

void print_table(int);

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
    int user_input;
 
    user_input = user_interface();

    print_table(user_input);

    return 0;
}

int user_interface()
{
    int user_input;

    printf("This a program that takes the user's input (integer) then checks if every integer up to the one entered by the user is a multiple of 4 and outputs the results.\n");
    printf("Enter maximum number to show: ");
    scanf("%d", &user_input);

    return user_input;
}

int is_multiple(int num)
{
    if (num % 4 == 0)
    {
        return 1;
    }
        else
    {
        return 0;
    }
}

void print_table(int user_input)
{
    int i;

    printf("  Number  Multiple of 4?\n");

    for (i = 0; i < user_input + 1; i++)
    {
        if (is_multiple(i) == 1)
        {
            printf("     %3d   Yes\n", i);
        }
        else if (is_multiple(i) == 0)
        {
            printf("     %3d   No\n", i);
        }
    }
}