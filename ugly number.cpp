#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
int f=0;

       while(n%2==0||n%3==0||n%5==0||n%1==0)
       {
           if(n==2||n==3||n==5||n==1)
           {
               f=1;
               break;
           }
           if(n%2==0)
           {
               n=n/2;
           }
           else if(n%3==0)
           {
               n=n/3;
           }
           else if(n%5==0)
           {
               n=n/5;
           }
           else{break;}

       }
        if(f==1)
        {cout<<" true"<<endl;}
        else{cout<<" false"<<endl;}
}
return 0;
}
