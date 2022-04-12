#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {

        int n,i;
        cin>>n;
        int a[n+1];
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
       if(ceil(log2(n)) == floor(log2(n)))
            cout<<"-1";
        else
        {
            for(i=1;i<=n;i++)
            {
                a[i]=i;
            }
            a[1]=2;
            a[2]=3;
            a[3]=1;
            for(i=4;i<n;i++)
            {
                if(ceil(log2(i)) == floor(log2(i)))
                {
                    swap(a[i],a[i+1]);
                    i++;
                }
            }
            for(i=1;i<=n;i++)
            {
               cout<<a[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

