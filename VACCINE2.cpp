#include <stdio.h>
#include<math.h>
int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
    float n,d,c=0,b=0;
    int i, a[100000];
    scanf("%f%f",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n==1)
    {
        printf("%.0f\n",n);
        continue;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>=80||a[i]<=9)
            {
                c++;
            }
            else
                 b++;
        }
        
        printf("%.0f\n",ceil(c/d)+ceil(b/d));
    }
}
	return 0;
}

