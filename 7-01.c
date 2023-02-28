#include<stdio.h>

void main()
{
    int n,count;
    float x,y;

    printf("Enter values for x and n: ");
    scanf("%f %d",&x,&n);

    count = 1;
    y = 1;

    while(count<=n){
        y = y*x;
        count++;
    }
    printf("x = %.2f\n n = %d\n y = %.2f",x,n,y);
}
