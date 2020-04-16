#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
while(cin>>n)
{
int i=1;
  while(1)
  {
  if(n>=i){
  n=n-i;
  i++;
  }
  else{
  cout<<i-1<<endl;
  break;
  }
  }
}

}
