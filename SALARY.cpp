#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p,n,tc,c;
    cin>>tc;
    while(tc)
    {   cin>>n;
    c=0;
        p=(int*)calloc(n,sizeof(int));
        for(int i=0;i<n;i++)
            cin>>*(p+i);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if(*(p+i)>*(p+j))
    {
        int temp = *(p+j);
        *(p+j)=*(p+i);
        *(p+i)=temp;

    }
    for(int i=0;i<n;i++)

        c=c+(*(p+i)-*p);
    cout<<c<<endl;
        tc--;
    }
    free(p);
    return 0 ;
}
