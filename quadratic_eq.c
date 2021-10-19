#include <stdio.h>
#include <math.h>

float fquadr(float a, float b, float c, float *x1, float *x2) {
    float D, xa, xb;
    D = (b * b) - (4 * a * c);
    if (D < 0) {
        printf("Discriminant < 0, => x1, x2 not exists \n");
        return 0;
    } 
    else if (D == 0) {
        printf("Discriminant = 0, => x1 = x2 \n");
        xa = ((-b) - sqrt(D)) / 2;
        xa = xb;
    }
    else {
        xa = ((-b) - sqrt(D)) / 2; 
        xb = ((-b) + sqrt(D)) / 2;
    }
    *x1 = xa; 
    *x2 = xb;
    return 1;
}

void main (void) {
    float a, b, c, x1, x2;
    int flag;
    printf ("Hello. This program will help you calculate the roots of a quadratic equation (press ENTER)");
    scanf ("d");
    printf ("Input a: ");
    scanf ("%f", &a);
    printf ("Input b: ");
    scanf ("%f", &b);
    printf ("Input c: ");
    scanf ("%f", &c);
    flag = fquadr(a , b, c, &x1, &x2);
    if (flag != 0) {
        printf ("x1 = %f \nx2 = %f \n", x1, x2);
    }
}