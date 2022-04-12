#include <iostream>
using namespace std;

int main() {
int tc;
cin>>tc;
while(tc--)
{
    string str;
    cin>>str;
    if(((str.find("abc"))!=string::npos))
    {
        size_t p = -1; 
        string tempWord =  "abc"; 
           while ((p = str.find("abc")) != string::npos) 
            str.replace(p, tempWord.length(), ""); 
            
              tempWord = "abc"; 
        while ((p = str.find("abc")) != string::npos) 
            str.replace(p, tempWord.length(), ""); 
    }
    cout<<str<<endl;
}
	return 0;
}
