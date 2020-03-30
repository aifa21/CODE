#include <bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 while(cin>>n)
 {
     string s="";
      while(n!=0)
        {
            if(n>=1000)
            {
                n-=1000;
                s+='M';
            }
            else if(n>=900)
            {
                n-=900;
                s+='C';
                s+='M';
            }
            else if(n>=500)
            {
                n-=500;
                s+='D';
            }
            else if(n>=400)
            {
                n-=400;
                s+='C';
                s+='D';
            }
            else if(n>=100)
            {
                n-=100;
                s+='C';
            }
            else if(n>=90)
            {
                n-=90;
                s+='X';
                s+='C';
            }
            else if(n>=50)
            {
                n-=50;
                s+='L';
            }
            else if(n>=40)
            {
                n-=40;
                s+='X';
                s+='L';

            }
            else if(n>=10)
            {
                n-=10;
                s+='X';
            }
            else if(n==9)
            {
                n-=9;
                s+='I';
                s+='X';

            }
            else if(n>=5)
            {
                n-=5;
                s+='V';
            }
            else if(n==4)
            {
                n-=4;
                s+='I';
                s+='V';
            }
            else
            {
                n--;
                s+='I';
            }
        }
     cout<<s<<endl;
 }
    return 0;
}
