#include <iostream>
 #include <algorithm>
 using namespace std;
int main()
{
int tc;
scanf("%d",&tc);
while(tc--)
{
 int n;
 scanf("%d",&n);
 long long int a[100001], max=0,b=1;
 int i,j;
 for(i=0;i<n;i++)
 scanf("%lld",&a[i]);
sort(a, a+n, greater<>()); 	
max=a[0];
for(i=1;i<n;i++)
{
a[i]=a[i]-b;
b++;
if(a[i]>=0)
{
max=max+a[i];
}
}
max = max%1000000007;
printf("%lld\n",max);

}
return 0;
}