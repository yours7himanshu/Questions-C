#include <stdio.h>
int main()
{

    // Write a program to enter price of 3items and print their final cost with GST---->
    // GST=0.18`


    float price[3];

    printf("Enter price of item1\n");
    scanf("%f", &price[0]);

    printf("Enter price of item2\n");
    scanf("%f", &price[1]);

    printf("Enter price of item3\n");
    scanf("%f", &price[2]);

    printf("price of item1=%f item2 =%f item3= %f\n", (0.18) * price[0],
           (0.18) * price[1], (0.18) * price[2]);
    return 0;
}