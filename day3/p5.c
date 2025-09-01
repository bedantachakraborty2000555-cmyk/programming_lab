#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, x1, x2;
    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);

    x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    printf("First root = %f\n", x1);
    printf("Second root = %f\n", x2);

    return 0;
}