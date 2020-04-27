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
    int vsz=v.size();
    int sz=vsz/2;
    //int sz=ceil(vsz/2.0)-1;
    int median=v[sz],s=0;

    for(int i=0;i<vsz;i++)
    {
        s+=abs(median-v[i]);

    }
    cout<<s<<endl;

}
