/*  write a c program to find out the floor and ceiling value of a positive and negetive number  */

#include<stdio.h>
#include<math.h>

 int main(){
    double N, F, C ;

    printf("Enter a number (positive or negative): ");
    scanf("%lf", &N);

    F= floor(N);
    C=ceil(N);

    printf("Floor value of %lf = %lf\n", N, F);

    printf("Ceiling value of %lf = %lf\n", N, C);

    return 0;
 }