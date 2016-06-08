#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int l,i;
    scanf("%s",a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        b[i]=a[i];
        printf("%c",b[i]);
    }
printf("\n");
    for(i=l-1;i>=0;i--)
    {
    if(b[i]!='a'&&b[i]!='A'&&b[i]!='e'&&b[i]!='E'&&b[i]!='i'&&b[i]!='I'&&b[i]!='o'&&b[i]!='O'&&b[i]!='u'&&b[i]!='U')
    {
        printf("%c",b[i]);
    }
}

return 0;
}
