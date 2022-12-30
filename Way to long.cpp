#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,i;
    string str;
    cin>>n;
    if(n>=1 && n<=100)
    {
        for(i=0;i<n;i++)
        {
        cin>>str[i];
        }
    if(str[i]>='a' && str[i]<='z')
    {
      for(i=0;i<str.length();i++)
       {
          if(str.length()>10)
          {
           if(i==0)
            {
               cout<<str[i];
            }
        cout<<str.length()-2;
            if(i==str.length()-1)
            {
               cout<<str[i]<<endl;
            }
          }else
        {
           cout<<str[i]<<endl;
        }
       }
    }
    }
}       

   
