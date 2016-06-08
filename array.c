# shalini
#include<stdio.h>
int main()
{
int a[5]={1,1,2,3,3},i,c=0,j;
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
    if(i!=j)
    {
        if(a[i]==a[j])
        {
        c++;
        }
    }
    }
    if(c==0)
    {
    printf("%d",a[i]);
    }
c=0;
}
return 0;
}

