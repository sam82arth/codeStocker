#include <iostream>
using namespace std;
int main(void) {
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        int a=n;
        int k=0;
        while(k!=a)
        {
            for( i=0;i<n-1;i++)
            {
                cout<<" ";
            }
            if(k%2==0)
            {  int j=0;
                for(;i<a;i++)
                {
                    cout<<char(j+65);
                    j++;
                }
                cout<<'\n';
            }
            else
            {  int j=0;
                for(;i<a;i++)
                {
                    cout<<j+1;
                    j++;
                }
                cout<<'\n';
            }
            
            --n;
            k++;
        }
    }
    return 0;
}

