#include <iostream>
using namespace std;

int main() {
 int a[3],b[3],i,a1=0,b1=0;
 for(i=0;i<3;i++)
 {
     cin>>a[i];
 }
 for(i=0;i<3;i++)
 {
     cin>>b[i];
 }
 for(i=0;i<3;i++)
 {
     if(a[i]>b[i])
        a1++;
    if(b[i]>a[i])
        b1++;
 }
 cout<<a1<<" "<<b1<<endl;
	return 0;
}
