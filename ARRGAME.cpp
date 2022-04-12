#include <iostream>
using namespace std;

int main() {
 int tc;
 cin>>tc;
 while(tc--)
 {
     int n,i,flag=0,c=0,max=0,temp=0,s[1000000];
     cin>>n;
     for(i=0;i<n;i++)
     cin>>s[i];
     for(i=0;i<n;i++)
     {
         if(s[i]==1)
         {
            if(c!=0)
            {
                if(c>max)
                {
                    temp=max;
                    max=c;
                }
                else
                if(c>temp)
                 {
                     temp=c;
                     
                 }
                c=0;
            }
         }
        else
            c++;
     }
        if(c>max)
            {
                temp=max;
                max=c;
            }
     
    

     if(temp==0)
    {
        if(max%2==1&&max>0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
       
    }
    
    if(temp>0)
    {
      if(((max/2)+1) > temp && max%2==1)
       cout<<"Yes"<<endl;
       else
       cout<<"No"<<endl;
    }
     
 }
	return 0;
}
