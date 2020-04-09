#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {  int s;
        if(n<=9)
        {
            s=n;

        }

    while(n>9){
             s=0;
            if(n<=9)
            {
                s=n;
                break;
            }
    while(n!=0)
    {
        int b=n%10;
        s+=b*b;
        n=n/10;
    }
    n=s;
    cout<<s<<endl;
    }
    if(s==1){
        cout<<"t"<<endl;
    }
    else{
        cout<<"f"<<endl;
    }


    }
}
