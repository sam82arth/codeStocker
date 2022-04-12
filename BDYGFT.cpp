#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void) {
int tc;
scanf("%d",&tc);
while(tc--)
{
    int n,i,j,flag=0;
    long long int a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
   i=0;
   j=n-1;
   while(i<j)
   {
       if (a[i]+a[j] == 2000)
            {
                flag= 1;
                break;
            }
        else if (a[i]+a[j]< 2000)
            i++;
        else // a[i]+a[j] < 200
            j--;
    }
    
    if(flag==1)
    {
        printf("Accepted\n");
    }
    else
    {
        printf("Rejected\n");
    }
}
	return 0;
}
