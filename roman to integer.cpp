#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   while(cin>>s)
   {
       int n=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='I')
           {

                if(s[i+1]=='V')
               {
                   n=n+4;
                   i++;
               }
               else if(s[i+1]=='X')
               {
                   n=n+9;
                   i++;
               }
               else{
                n++;
               }
           }
           else if(s[i]=='V')
           {
               n=n+5;

           }
           else if(s[i]=='X')
           {
                  if(s[i+1]=='L')
                  {
                      n=n+40;
                      i++;
                  }
                  else if(s[i+1]=='C')
                  {
                      n=n+90;
                      i++;
                  }
                  else{
               n=n+10;
                  }

           }
           else if(s[i]=='L')
           {
               n=n+50;

           }
           else if(s[i]=='C')
           {
               if(s[i+1]=='D')
                  {
                      n=n+400;
                      i++;
                  }
                 else if(s[i+1]=='M')
                  {
                      n=n+900;
                      i++;
                  }
                  else{
               n=n+100;
                  }
           }
           else if(s[i]=='D')
           {
               n=n+500;

           }
           else if(s[i]=='M')
           {
               n=n+1000;

           }

       }
       cout<<n<<endl;
   }
    return 0;
}
