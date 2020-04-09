
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  while(cin>>n)
  {
      string s="";
      while(n>0)
      {
          s=char(65+(n-1)%26)+s;
          n=(n-1)/26;
      }
      cout<<s<<endl;
  }
}
