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
            cin>>str;
            int len = str.size();
            if(len<=10)
            {
                cout<<str<<endl;
            }else
            {
                cout<<str[0]<<len-2<<str[len-1]<<endl;
            }
        }
   }
   return 0;
}
