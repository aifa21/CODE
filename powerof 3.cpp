#include<bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n){
if(n%3==2||n==0)
        {
             return false;
        }
       else if(n==1||n==3)
        {
            return true;
        }
        else if(n%3==1)
        {
            return false;
        }
        else{
       return isPowerOfThree(n/3);
        }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(isPowerOfThree(n))
        {
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;;
        }
    }
}
