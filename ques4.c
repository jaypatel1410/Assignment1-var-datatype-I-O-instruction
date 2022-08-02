#include<stdio.h>
#include<conio.h>
int main()
{
    double A,R;
    printf("Enter the value of radius for calculating the area of Circle\n");
    scanf("%lf",&R);
    A=3.14*R*R;
    printf("\"Area of circle is %lf having the radius %lf\"\n",A,R);
    getch();
    return 0;
}