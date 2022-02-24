/* A Program that prints a table of values for sine and cosine between (0, 1)
Jae Kim
February 23, 2022
*/

#include<stdio.h>
#include<math.h> /* has  sin(), cos(), abs(), and fabs() */

int main(void)
{ 
double interval;
int i;
for(i = 0; i <= 10; i++)
{
 interval = i/10.0;
 printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
 printf("cos( %lf ) = %lf \t", interval, fabs(cos(interval)));
 
}


printf("\n+++++++\n");
return 0;
}

