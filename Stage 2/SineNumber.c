#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{ 
double interval;
printf("\nPlease type in a number:\n");
scanf("%lf", &interval);

printf("\nAbsolute value of sin( %lf) = %lf\t", interval, fabs(sin(interval)*1.0));

printf("\n+++++++\n");
return 0;
}