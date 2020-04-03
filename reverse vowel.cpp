#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,rs;
    while(cin>>s){
            string rs;
            for(int i=0;i<s.size();i++)
            {
                  if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                  {
                      rs+=s[i];
                      s[i]='*';
                  }

            }
            reverse(rs.begin(),rs.end());

            int j=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='*')
                {
                    s[i]=rs[j];
                    j++;
                }
            }
            cout<<s<<endl;

    }
    return 0;
}
