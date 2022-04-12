#include <bits/stdc++.h>
using namespace std;

int main() {
int tc;
cin>>tc;
while(tc--)
{
    int n,i,j,c=0,w[9],l[9],p[9];
    vector<pair<pair<int,int>,int>> vect;
    cin>>n;
    for(i=0;i<n;i++)
    {
     cin>>w[i];
    }
    for(i=0;i<n;i++)
    {
        p[i]=i;
    }
    for(i=0;i<n;i++)
    {
        cin>>l[i];
    }
     for (int i=0; i<n; i++) 
        vect.push_back({ { w[i], l[i] }, p[i] });
    sort(vect.begin(), vect.end(), [](auto a, auto b) { return a.first.first < b.first.first; });
     for(i=1;i<n;i++)
     {
         
        // cout<<vect[i].first.first<<" "<<vect[i].first.second<<" "<<vect[i].second<<endl;
         if(vect[i].second>vect[i-1].second)
            {
                //  cout<<vect[i].first.first<<" is correctly placed"<<endl;
                continue;
            }
        int temp=vect[i-1].second-vect[i].second;
        ++temp;
        int temp2= vect[i].first.second;
        // cout<<temp<<endl;
        // cout<<temp2<<endl;
        //  cout<<vect[i].first.first<<" needs to be moved by "<<temp<<endl;
        //  cout<<ceil(temp/temp2 + (temp %temp2 !=0))<<endl;
        //  cout<<vect[i].first.second<<endl;
        c+=ceil(temp/temp2 + (temp %temp2 !=0));
        vect[i].second+=((ceil(temp/temp2 + (temp %temp2 !=0)))*vect[i].first.second);
       
     }
    cout<<c<<endl;

}
	return 0;
}
