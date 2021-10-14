#include <stdio.h>
#include <math.h>

double fquadr(double a, double b, double c, double *x1, double *x2)
{
    double D, xa, xb;

    D = a;

    xa = 1; 
    xb = 2;

    printf("%f \n", D);
    printf("%f \n", xa);
    printf("%f \n", xb);

    *x1 = xa; 

    *x2 = xb;
}




void main (void)
{
    double a,b,c,x1,x2;

    printf ("Hello...");
    scanf ("d");

    printf ("Input a");
    scanf ("%f", &a);

    printf ("Input b");
    scanf ("%f", &b);

    printf ("Input c");
    scanf ("%f", &c);

    fquadr(a,b,c, &x1, &x2);

    printf ("%f \n %f \n", x1, x2);
}