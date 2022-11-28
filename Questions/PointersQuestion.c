// Write a function to calculate the sum,product &average of 2numbers.
// Print the average in the main function

#include <stdio.h>
void math(int *a, int *b);
int main()
{

    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    math(&a, &b);

    return 0;
}

void math(int *a, int *b)
{
    int c = (*a) * (*b);
    int d = (*a + *b) / 2;
    int e = *a + *b;

    printf("Product =%d Average =%d Sum =%d\n", c, d, e);
    printf("Ther program is ended now\n");
}