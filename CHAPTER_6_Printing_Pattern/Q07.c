// write a program to print the following pattern

// solution:
#include <stdio.h>

// main function
int main()
{

    // variable declaration
    int height;
    int Number = 1;

    // user instruction
    printf("This program print right trangle patterns with star\n");

    // taking input from user
    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    // loop to print pattern
    while (Number <= (height * 2))
    {
        for (int i = 1; i <= Number; i += 2)
        {
            printf("%d ", i);
        }
        printf("\n");
        Number += 2;
    }
    return 0;
}