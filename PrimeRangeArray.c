#include<stdio.h>

void primeRange(int s , int e)
{
    int prime[10];
    int nonprime[10];
    int pi=0;
    int npi=0;

    for(int i=s;i<=e;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            prime[pi]=i;
            pi++;
        }else{
            nonprime[npi]=i;
            npi++;
        }
    }

    printf("\nPrime Array: ");
    for(int i=0;i<pi;i++)
    {
        printf("%d ",prime[i]);
    }

    printf("\nNon Prime Array: ");
    for(int i=0;i<npi;i++)
    {
        printf("%d ",nonprime[i]);
    }

}
void main()
{
    primeRange(2,15);
}