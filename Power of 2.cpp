#include <bits/stdc++.h>

using namespace std;
bool poweroftwo(int n) {
        if(n==1)
        {return true;}
       else if(n%2==1||n==0)
        {
            return false;
        }
        else{
       return poweroftwo(n/2);
        }
}
int main()
{
    int n;
    while(cin>>n)
    {


        if(poweroftwo(n))
        {
            cout<<"true"<<endl;
        }
        else {
            cout<<"false"<<endl;
        }

    }
    return 0;
}

