#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;

    while(cin>>n>>k>>m)
    {
        int ar[1000],gp[1000],cost[1000];
        map<string ,int>mp;
        string s;

        for(int i=1;i<=n;i++)
        {
            cost[i]=1000000000;
        }
        for(int i=1;i<=n;i++)
        {
            cin>>s;
            mp[s]=i;

        }
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];


        }
        for(int i=1;i<=k;i++)
        {
            int p;
            cin>>p;
            for(int j=1;j<=p;j++)
            {
                int pp;
                cin>>pp;
                cost[i]=min(cost[i],ar[pp]);
                gp[pp]=i;

cout<<cost[i]<<".."<<gp[pp]<<endl;

            }
        }


        int sum=0;
        for(int i=1;i<=m;i++)
        {
            string s;
            cin>>s;
            sum+=cost[gp[mp[s]]];
        }
        cout<<sum<<endl;
    }
}
