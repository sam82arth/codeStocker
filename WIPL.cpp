#include <iostream>
#include<bits/stdc++.h>
using namespace std;



////////////////////////////////////////////////////////////////////////////////////////////////////

bool ho_payega(vector<int> &arr, int n, int sum)
{
    int i,j;
    bool part[sum / 2 + 1][n + 1];
    for (i = 0; i <= n; i++)
        part[0][i] = true;
    for (i = 1; i <= sum / 2; i++)
        part[i][0] = false;
    for (i = 1; i <= sum / 2; i++) {
        for (j = 1; j <= n; j++) {
            part[i][j] = part[i][j - 1];
            if (i >= arr[j - 1])
                part[i][j] = part[i][j]
                             || part[i - arr[j - 1]][j - 1];
        }
    }
 
    return part[sum / 2][n];
}
bool read()
{
    if(5%2)
    return true;
}
///////////////////////////////////////////////////////////////////////////////////////////////////

bool hai_kya(vector<int> &set, int n, int sum)
{
   
    bool subset[n + 1][sum + 1];
 
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - set[i - 1]];
        }
    }
 
    return subset[n][sum];
}

////////////////////////////////////////////////////////////////////////////////////////////////////

bool ispossible(vector<int> &a,int n, int sum, int k)
{
   if(sum<2*k)
   {
       cout<<"-1"<<endl;
       return false;
   }
   if(sum==2*k)
   {
       if(ho_payega(a,n,sum))
       {
           cout<<n<<endl;
           return false;
       }
       if(a.size()==n)
       {
           cout<<-1<<endl;
           return false;
       }
       return false;
   }
   return true;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

int linear(vector<int> &a,int n, int sum, int k)
{
    sort(a.begin(), a.end(), greater<int>());
    int temp=0,i,j,alpha=0,beta=0,c=0;
    vector<int>h,x,y;
   
        alpha=0,beta=0;
        for(i=0;i<n;i++)
         {
             h.push_back(a[i]);
             temp+=a[i];
             if(temp>=2*k)
                break;
         }
    
        if(temp==2*k)
        {
            if(ho_payega(h,h.size(),temp))
            {
                return h.size();
               
            }
            else
            if(hai_kya(h,h.size(),k))
                return h.size();
            else
            {
                ++i;
                h.push_back(a[i]);
                temp+=a[i];
            }
        }
        if(temp>2*k)
        {
            if(hai_kya(h,h.size(),k))
                return h.size();
            else
            if(hai_kya(h,h.size(),temp/2))
            {
                return h.size();
            }
            else
            {
                //  cout<<"size of h is = "<<h.size()<<endl;
                 alpha=h[0];
                //  cout<<"added to stack 1 ="<<h[0]<<endl;
     
                for(i=h.size()-1;i>=1;i--)
                 {
                     alpha+=h[i];
                    //  cout<<"added to stack 1 ="<<h[i]<<endl;
                     if(alpha>=k)
                        break;
                 }
                
                for(j=i-1;j>=1;j--)
                 {
                    beta+=h[j];
                    // cout<<"added to stack 2 ="<<h[j]<<endl;
                    if(beta>=k)
                        break;
                  }
                if(alpha>=k&&beta>=k)
                    return h.size();
              else
                {
                    for(i=h.size();i<n;i++)
                     {
                         h.push_back(a[i]);
                         if(hai_kya(h,h.size(),k))
                              return h.size();
                         beta+=a[i];
                         temp+=a[i];
                         //  cout<<"added to stack 2 ="<<a[i]<<endl;
                        //  if(temp/2>=k)
                        //  {
                        //  if(hai_kya(h,h.size(),temp/2))
                        //      return h.size();
                        //  }
                        if(beta>=k)
                            break;
                     }
                    if(alpha>=k&&beta>=k)
                        return h.size();
                 }
            }
        }

    return -1;
}
 
 //////////////////////////////////////////////////////////////////////////////////////////////////
 
void solve(vector<int> &a,int n, int sum, int k)
{
    int i,j,c=0,temp=0;
     if(ispossible(a,n,sum,k))
     {
        sort(a.begin(), a.end(), greater<int>());
        if(a[0]>=k)
        {
                for(i=1;i<n;i++)
                {
                    temp+=a[i];
                    if(temp>=k)
                    break;
                }
                if(temp>=k)
                {
                     cout<<i+1<<endl;
                    return;
                }
                else
                {
                    cout<<"-1"<<endl;
                    return;
                }
        }
            else
               {    
                   cout<<linear(a,n,sum,k)<<endl;
                    return;
               }
     }
}

//////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
int tc;
cin>>tc;
while(tc--)
{
    if(read)
    {
   int n,k,sum=0,i=0,x;
   vector<int>a;
    cin>>n>>k;
    for(i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
            sum+=x;
        }
   if(n==1)
   {
       cout<<"-1"<<endl;
       continue;
   }
    solve(a,n,sum,k);
    }
}

	return 0;
}
