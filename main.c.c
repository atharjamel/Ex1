#include <stdio.h>
#include "basicMath.c"
#include "power.c"


void main(double x)
{


printf("please insert a real number : ");
scanf("%lf",&x);

double v1 = Exponent(x) + Power(x,3)-2 ;
double v2 = mul(x,3)+mul(2,Power(x,2)); 
double v3 = div(mul(4,Power(x,3)),sub(5,mul(2,x))); 
// function 1 
printf("The value of f(x)= ‫)‪e^x+𝑥^3−2 at the point %f  is = %lf \n" ,x,v1 );
//function 2
printf("The value of f(x) = 3x + 2X^2 at the point %lf is = %lf \n" ,x,v2);
//function 3 
printf("The value of f(x) = (4x^3)/5 -2x at the point %lf is = %lf \n",x ,v3);


	
}






