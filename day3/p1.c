/*  write a C program to find last digit of a integer using modulus operator and without using modulus operator  */

#include<stdio.h>
int main(){

    int num, lastdigit_mod, lastdigit_no_mod ;
    
    printf("Enter an integer : ");
    scanf("%d",&num);

    lastdigit_mod = num % 10;
    printf("Last digit of integer with using modulus %d\n", lastdigit_mod);

    lastdigit_no_mod = num - (num/10) * 10;
    printf("Last digit of integer without using modulus %d\n", lastdigit_no_mod);

    return 0;

}