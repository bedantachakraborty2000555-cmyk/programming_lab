/*
Write a C program to swap two numbers  using third variable
  */

#include<stdio.h>
int main(){
    int n1, n2, n3;

    printf("Enter the first no : ");
    scanf("%d", &n1);

    printf("Enter the second no : "); 
    scanf("%d", &n2);

    printf("Before swapping :\n");
    printf(" first number = %d\n",n1 );
    printf(" second number = %d\n",n2);

    n3=n1;
    n1=n2;
    n2=n3;

    printf("After swapping :\n");
    printf(" first number = %d\n",n1 );
    printf(" second number = %d\n",n2);
     
    return 0;
}