#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    long long a=v[0],s=0;
    for(int i=0;i<n;i++)
    {
        s+=v[i];
    }
    cout<<s-(v.size()*a)<<endl;
}
