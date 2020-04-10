#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
    {
        for (int j=2; j*j<=n; j++)
        {
            if(n%j==0)
                return false;
        }
        return true;
    }

    int main(){
        int n;
        while(cin>>n){
        int c=0;

       for(int i=2;i<n;i++)
       {
           if(isprime(i))
           {
               c++;
               }

       }
        cout<<c<<endl;;
    }
    return 0;
}

