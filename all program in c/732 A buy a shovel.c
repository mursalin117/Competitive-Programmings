#include <stdio.h>

int main()
{
    int k,r,i;
    scanf("%d%d",&k,&r);
    for(i=1;;i++)
    {
        if((i*k)%10==0)
        {
            printf("%d\n",i);
            break;
        }
        else if(((i*k)-r)%10==0)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
