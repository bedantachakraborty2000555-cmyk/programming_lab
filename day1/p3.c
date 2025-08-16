/*Write a C program to substract two number taking from user*/

#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    int c = a-b;
    printf("The value of %d - %d = %d\n", a, b, c);
    return 0;

}