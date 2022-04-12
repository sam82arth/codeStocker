#include <iostream>
using namespace std;

int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    if(n==1)
       {
           printf("0\n");
           scanf("%d",&i);
       }
    else
    {
        long long int a[10000];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]&1)
            odd++;
            else
            even++;
        }
        if(even==0)
         printf("%d\n",odd);
        else
        if(odd==0)
         printf("%d\n",even);
        else
          printf("%lld\n",min((even+(2*(odd-1))),(odd+(2*(even-1)))))  ;
        
    }
    
}
	return 0;
}
