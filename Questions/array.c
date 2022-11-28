/*Write a function to count the number of odd numbers in an array*/

#include <stdio.h>
void count(int arr[], int n);

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d", count(arr, 6));

    return 0;
}

void count(int arr[], int n)
{
    int countable = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            countable++;
        }
    }
    return count;
}