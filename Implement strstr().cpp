#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s1,s2;
   while(cin>>s1>>s2)
   {
       int t,f=0;
       if(s2=="")
       {
           return 0;
       }
       for(int i=0;i<s1.size();i++)
       {
           t=i;

           int j=0;
          while(j<s2.size()&&i<s1.size()&&s1[i]==s2[j])
           {
               i++;

               j++;
           }
           if(j==s2.size())
          {
           f=1;
           cout<<t<<endl;
           break;

           }
           if(i>=s1.size())
           {
               cout<<"-1"<<endl;
               break;
           }
       i=t;
       }
       if(f==0){
        cout<<"-1"<<endl;
       }
   }

    return 0;
}


//alternative
/*
int m = s1.length();
	int n = s2.length();


    if(m==0 )
        return 0;
	int i=0,j=0, s=0;
	while(i < n)
	{

		if(s2[i]!=s1[j])
		{
			i = i- j+1;
			j=0;
		}
		else
		{
			i++;
			j++;
			if(j==m)
				return i-j;
		}

	}
	return -1;
	*/


/*alternative 2
int strstr(string s1,string s2)
{
    return s1.find(s2);
}

int main()
{
    while(cin>>s1>>s2)
   {
       int a=strstr(s1,s2);
       cout<<a<<endl;

   }
   return 0;
}
*/
