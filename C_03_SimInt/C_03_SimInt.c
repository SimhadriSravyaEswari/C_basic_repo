# include<stdio.h>
int main()
{
    float p,t,r,SI;
    printf("Enter principal amount ");
    scanf("%f",&p);
    printf("Enter time in years ");
    scanf("%f",&t);
    printf("Enter rate");
    scanf("%f",&r);
    SI = (p*t*r)/100;
    printf("\nThe simple interest is %f", SI); 
    return 0;
}