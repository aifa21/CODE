#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
   while(cin>>n){
        vector<string>str;
    for(int i=0;i<n;i++)
    {
        string sss;
        cin>>sss;
        str.push_back(sss);
    }

if(str.size()==1) cout<<str[0]<<endl;
        if(str.size()==0) cout<<""<<endl;

string s1=str[0];
string ss;
for(int i=1;i<str.size();i++)
{
    string s2;
    ss="";
    s2=str[i];

    int ln=min(s1.size(),s2.size());

    for(int j=0;j<ln;j++)
    {
        if(s1[j]==s2[j])
        {
            ss+=s1[j];

        }
        else
            {
           break;
           }
    }
    s1=ss;
}
 cout<<s1<<endl;
   }
    return 0;
}
