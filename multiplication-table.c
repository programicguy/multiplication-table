#include <stdio.h>

// Multiplication Table

int main(void)
{
    int i, input;

    // Get the number from the user
    printf("Please enter the number : \n");
    scanf("%d", &input);

    // Print the table number 
    for(i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d \n", input, i, input * i );
    }

    return 0;
}