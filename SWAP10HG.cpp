#include <iostream>
#include<string>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
       long long int n, x1 = 0, x2 = 0, i;
        cin >> n;
        string s1, s2;
        cin>>s1;
        cin>>s2;
        
        if (s1 == s2)     {
            cout << "Yes" << endl;
            continue;
        }
        for (i = 0; i < s1.size(); i++)   
        {
            x1 += (s1[i] - 48);
            x2 += (s2[i] - 48);
            
        }
        // cout<<x1<<endl<<x2<<endl;
        if (x1 != x2)     {
            cout << "No" << endl;
            continue;
        }
    
        int flag = 1, count = 0;
        
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                if(s1[i]=='0')
                {
                    if(count>0)
                        count--;
                    
                    else
                   {
                       flag=0;
                       break;
                   }
                }
                else
                count++;
            }
        }
        // for (i = s1.size() - 1; i >= 0; i--)     {
        //     if (s1[i] == '0')
        //         flag = 1;

        //     if (flag == 1 && s1[i] == '1')
        //         count++;
        // }

        if (flag==1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;


    }
    return 0;
}

