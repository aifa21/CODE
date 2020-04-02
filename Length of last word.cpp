#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin>>s){
     int c=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' '&&c!=0)
            {break;}
            else if(s[i]!=' '){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
