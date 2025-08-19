/*
Write a C program to convert Fahrenheit to celsius and the Celcius to Fahrenheit
*/

#include<stdio.h>
int main(){
    float C, F;

    printf(" Enter the Celcius :");
    scanf("%f" ,&C);

    printf(" The convertion into Fahrenheit is: %f\n",((9*C/5)+32));

    printf(" Enter Fahrenheit :");
    scanf("%f",&F);

    printf(" The convertion into Celcius is : %f\n",((F-32)*5/9));

    return 0;
}
