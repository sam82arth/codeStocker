#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> store;
vector<int> factors;
int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 
                        1, 2, 2, 3, 2, 3, 3, 4 }; 

unsigned int countSetBitsRec(unsigned int num) 
{ 
    int nibble = 0; 
    if (0 == num) 
        return num_to_bits[0]; 
    nibble = num & 0xf; 
    return num_to_bits[nibble] + countSetBitsRec(num >> 4); 
} 


 bool okay(int counter) {
        int count { 0 };
        for (int i { 0 }; i < 31; ++i) {
            if (counter & (1ULL << i)) count++;
        }
        return count == 2;
    }

int solve(int b[],int n,int k, int sum)
{
    unsigned int size= pow(2,n);
     unsigned int i,j,a=0;
     int d[10000007];
    for(i=0;i<size;i++)
    {
        if(countSetBitsRec(i)==2)
        continue;
        int temp=1;
        for(j=0;j<n;j++)
        {
            if(i&(1<<j)) 
            temp*=b[j];
            else
            {
                d[a]=b[j];
                a++;
            }
        }
        d[a]=temp;
        
    }
    
}

  void func(vector<int> v, int& min_sum,int k) {
        
        
        if (k == (int)v.size()) {
            int sum { accumulate(v.begin(), v.end(), 0) };
            if (sum < min_sum) {
                min_sum = sum;
                store.clear();
                for (int i : v) {
                    store.push_back(i);
                }
            }
            
            return;
        } else {
            size_t sub_sets { 1ULL << v.size() };
            for (size_t counter { 1ULL }; counter < sub_sets; counter++) {
                if (okay(counter)) {
                    vector<int> sub_fact;
                    int merge { 1 };
                    for (size_t j { 0ULL }; j < v.size(); ++j) {
                        if (counter & (1ULL << j)) {
                            merge *= v[j];
                        } else {
                            sub_fact.push_back(v[j]);
                        }
                    }
                    sub_fact.push_back(merge);
                    func(sub_fact, min_sum,k);
                }
            }
        }
    }
        



int main() {
int tc;
cin>>tc;
while(tc--)
{
    int k,x,n,c=0;
    cin>>k>>x;
    n=k;
    int a[10000007]={0},i=0,j,sum=0;
    if(x%2==0)
    c++;
    while(x%2==0)
    {
        if(a[2]==0)
        a[2]=1;
        a[2]*=2;
        x=x/2;
       
       
    }
    for(j=3;j<sqrt(x);j=j+2)
    {
        if(x%j==0)
         c++;
       while(x%j==0)
       {
           if(a[j]==0)
                a[j]=1;
           a[j]*=j;
           x=x/j;
           
            
       }
    }
    if(x>2)
    {
        c++;
        if(a[j]==0)
                a[j]=1;
           a[j]*=x;
        
    }
    sort(a,a+j+1);
    // cout<<"Factors : ";
      for(i=0;i<=j;i++)
     {
         sum+=a[i];
        //  cout<<a[i]<<" ";
     }
    if(c==n)
    {
       
        cout<<sum<<endl;
    }
    else
    if(c<n)
    {
        cout<<sum+n-c<<endl;
    }
    else
    {
           int min_sum { INT_MAX };
       sort(a,a+j+1);
      for(i=0;i<=j;i++)
        {
         if(a[i]==0)
         continue;
         else
            {
            break;
            }
        }
       int b[j+1]={0};
       k=0;
       
       for(i;i<=j;i++)
       {
         factors.push_back(a[i]);
           
           // k =total length of array  
           // convert to size n
       }
       
       
       func(factors, min_sum,n);
        cout<<min_sum<<endl;
       
       
  

    }
         factors.clear();
        store.clear();
}
	return 0;
}
