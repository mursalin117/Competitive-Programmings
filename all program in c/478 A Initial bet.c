#include <stdio.h>

int main()
{
    int a[5],i,s=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    if(s%5==0 && s!=0) printf("%d\n",s/5);
    else printf("-1\n");
    return 0;
}
