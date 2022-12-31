#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,v,t,i,r=0;
    cin>>n;
    if((n>=1 && n<=1000))
    {
        for(i=0;i<n;i++)
        {

            cin>>p>>v>>t;

              if((p+v+t)>=2 )
              {
                 r++;
              }           
           
        } 
    }
    cout<<r<<endl;
}
