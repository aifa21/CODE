/*#include<bits/stdc++.h>
using namespace std;
//subtract sum of integer from(n*(n-1))/2
int main()
{
    vector<int>v;
    int m;
    cin>>m;
    int a;
    for(int i=0;i<m;i++)
    {
    cin>>a;
     v.push_back(a);
    }
int s=0;
int n=v.size();
    for(int i=0;i<v.size();i++)
    {
        s+=v[i];
    }
    cout<<(n*(n+1)/2)-s<<endl;
    return 0;
}
*/
//Using XOR
#include<bits/stdc++.h>
using namespace std;
//subtract sum of integer from(n*(n-1))/2
int main()
{
    vector<int>v;
    int m;
    cin>>m;
    int a;
    for(int i=0;i<m;i++)
    {
    cin>>a;
     v.push_back(a);
    }
int x=v.size();
    for(int i=0;i<v.size();i++)
    {
        x=x^i^v[i];
        cout<<x<<endl;
    }
    cout<<".."<<x<<endl;
    return 0;
}
