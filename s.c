# shalini
#include<stdio.h>
int main()
{
    int a[15],n,i,j,c=0,v[10],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
        {
        if(i!=j)
        {
            if(a[i]==a[j])
            {
                v[k]=a[i];
                c++;
                  k++;
            }
          }
    }
}

printf("%d",v[0]);
return 0;
}
