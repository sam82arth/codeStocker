#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int tc=1;

while(tc--)
{
    long long int n,m,i,j,a[1000000],b[100000000],d=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<m;i++)
    cin>>b[i];
    sort(b,b+m);
//   sort(b, b+m, [](int x, int y) { return x > y ; });
    sort(a,a+n);
    if(b[0]>=a[0])
    printf("0\n");
     else
   {
       for(i=0;i<m;i++)
       {
           if(b[i]>=a[0])
           break;
       }
       printf("%lld\n",n*i);
   }
    // for(i=0;i<m;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         if(b[i]<a[j])
    //             d++;
    //         else
    //         break;
    //     }
    // }
    // cout<<d<<endl;
    
    
    
}
	return 0;
}
