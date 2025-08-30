/*  wrirte a C program to calculate compound interest  */

#include<stdio.h>
#include<math.h>
int main(){
    float P, R, T, TM, CI;
    int n;

    printf("Enter the principle amount : ");
    scanf("%f", &P);

    printf("Enter annual interest rate : ");
    scanf("%f", &R);

    printf("Enter the time ( in year ) : ");
    scanf("%f", &T);

    printf("Enter number of times interest is compound per year : ");
    scanf("%d", &n);

    TM = P*((1+R/n), n*T);
    printf("Total money %f\n", TM);

    CI = (TM - P);
    printf("Compound interest %f\n", CI);

    return 0;
}