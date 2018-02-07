#include<stdio.h>
int main()
{
    float basic,hra,da,sal;
    printf("Enter basic salary");
    scanf("%f",&basic);
    printf("Enter hra ");
    scanf("%f",&hra);
    printf("Enter da ");
    scanf("%f",&da);
    sal = basic+hra+da;
    printf("The gross salary is %f",sal);
    return 0;
}