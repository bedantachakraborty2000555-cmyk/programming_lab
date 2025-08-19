/*
write a C program to calculate simple interest
*/

#include<stdio.h>

int main(){
    
    float p, r, t, i;

    printf("Enter principle amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest(in %% per annum): ");
    scanf("%f",&r);

    printf("Enter the time (in year): ");
    scanf("%f", &t);

    i=(p*r*t)/100;

    printf(" The simple interest is  %f\n",i);
    
    return 0;

}