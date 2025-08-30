/*  write a C program to find out the area and perimeter of rectangle  */

#include<stdio.h>
int main(){

    int L, W, A, P;

    printf("Enter the lenght : ");
    scanf("%d",&L);

    printf("Enter the wigth : ");
    scanf("%d",&W);

    A = L * W;
    printf("Area of rectangle %d\n",A);

    P = 2 * (L + W);
    printf("perimer of the rectangle %d\n",P);

    return 0;
}        