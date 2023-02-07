#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter number of natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        sum=sum+i;
        
    }
    printf("Sum of %d natural numbers is : %d ",n,sum);
    return 0;
}