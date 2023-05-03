//function prototypes: print_date_time
// Date: 2021/04/26
// Name: Andrew Van
// Description: Prints hello, world and the date and time
//  1. Print the words hello, world
//  2. Print the date and time

// Function to print the date and time
// properly commented
#include <stdio.h>
#include <stdlib.h>
void print_date_time(void)
{
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
}

// Print the words
// hello, world
int main(void)
{
    printf("hello,w");
    printf("orld\n");
    print_date_time();
    return EXIT_SUCCESS;
}