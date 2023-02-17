#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* headers here */
/* main function goes here */
/**
 * main - Entry point of the program
 * Return: 0 (Success)
 */
int main(void)
{       
        int n;
        
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* I write my code here */      
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);
        return (0);
}
