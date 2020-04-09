#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int n=0;
        for(int i=0;i<s.size();i++){
        n=n*26+(s[i]-64);
        }
        cout<<n<<endl;
    }
}
