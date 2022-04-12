#include <stdio.h>

int main() {
int tc;
scanf("%d",&tc);
while(tc--)
{
    int n,s,i,minf=10000,mind=1000;
    int p[100],t[100];
    scanf("%d%d",&n,&s);
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    for(i=0;i<n;i++)
    scanf("%d",&t[i]);
    for(i=0;i<n;i++)
{
    if((p[i]<minf)&&(t[i]==1))
    {
        minf=p[i];

    }
    if((p[i]<mind)&&(t[i]==0))
    {
        mind=p[i];

    }
}
if(mind+minf+s<=100)
printf("yes\n");
else
printf("no\n");
}

	return 0;
}

