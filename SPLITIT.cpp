using namespace std;
#include<bits/stdc++.h>
int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		int n,flag=1;
		cin>>n;
		string str;
		cin>>str;
		for(int i=0;i<=n-2;i++)
		{
			if(str[i]==str[n-1])
			flag=0;
		}
		if(flag==0)
			cout<<"YES"<<"\n";
			else
			cout<<"NO"<<"\n";
	}
}