
#include<stdio.h>
int main()
{
    int rev,n,rem;
    scanf("%d",&n);
    rev=0;
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    
    {
        printf("False");
    }
}