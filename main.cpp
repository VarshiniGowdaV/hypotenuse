#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    double b;
    printf("this app will calculate the hypotenuse of a right triangle.\n");
    printf("Enter the first value:");
    scanf("%lf",&a);
    printf("Enter the second value:");
    scanf("%lf",&b);
    double c = sqrt((a*a) + (b*b));
    printf("The hypotenuse is %f\n",c);
    return 0;
}
