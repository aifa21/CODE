#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.size()>0&&s[i]==')'&&st.top()=='(')
            {
                st.pop();
            }
            else if(st.size()>0&&s[i]==']'&&st.top()=='[')
            {
                st.pop();
            }
            else if(st.size()>0&&s[i]=='}'&&st.top()=='{')
            {
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty())
        {
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    return 0;
}
