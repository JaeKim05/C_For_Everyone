/* A Program that prints the sine function of an input x between (0, 1)
Jae Kim
February 21, 2022
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x; //This is the input value, function will print sine of x
    printf("Enter a number between 0 and 1: ");
    scanf("%lf", &x);
    printf("sine is: %lf \n\n", sin(x));
    return 0;
}
