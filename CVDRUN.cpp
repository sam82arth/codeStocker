#include <stdio.h>


int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,k,x,y,i,flag=1;
        scanf("%d%d%d%d",&n,&k,&x,&y);
       for(i=x;;i=(i+k)%n)
       {
           if(i==y)
           {
               printf("YES\n");
               break;
           }
           else
           if(i==x&&flag==0)
           {
               printf("NO\n");
               break;
           }
           flag=0;
       }

    }
    return 0;
}
