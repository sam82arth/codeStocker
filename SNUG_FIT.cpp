#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int tc,n,i;
    cin>>tc;
	while(tc--)
	{
    cin>>n;
    long long int arr[n], brr[n];
    for(i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    for(i=0;i<n;i++)
   {
       cin>>brr[i];
   }
    sort(arr,arr+n);
    sort(brr,brr+n);
    long long int sum=0;
    for(i=0;i<n;i++)
    {
      if(arr[i]<brr[i])
            sum+=arr[i];
            else
            sum+=brr[i];

    }

cout<<sum<<endl;

	}

	return 0;
}
