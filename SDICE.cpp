#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int tc;
cin>>tc;
while(tc--)
{
    long long int n,x,ans=0;
    cin>>n;
   if(n<=4)
   {
      if(n==1)
      ans=20;
      if(n==2)
      ans=36;
      if(n==3)
      ans=51;
      if(n==4)
      ans=60;
   }
   if(n>4)
   {
       ans=(n/4)*44;
       if(n%4==0)
      ans+=16;
      if(n%4==1)
      ans+=32;
      if(n%4==2)
      ans+=44;
      if(n%4==3)
      ans+=55;
       
   }
   cout<<ans<<endl;
   
   
   
    
    
}
	return 0;
}
