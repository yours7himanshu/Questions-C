#include <stdio.h>

void storeTables(int arr[][10],int n ,int m,int number);

int main(){
// Create a 2D array.storing tables of 2&3.

int tables[2][10];
storeTables(tables,0,10,2);
storeTables(tables,1,10,3);

for(int i =0;i<10;i++){
    printf("%d\t",tables[0][10]);
}

for(int i =0;i <10;i++){
    printf("%d\t",tables[1][10]);
}

return 0;
}

void storeTable(int arr[][10],int n ,int m,int number){
    for(int i =0;i<10;i++);
    arr[n][i]=number *(i+1);
}
