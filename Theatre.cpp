#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long n,m,a;
    cin>>n>>m>>a;
   
       unsigned long long need= ceil((double) m/a)*ceil((double) n/a);
      cout<<need<<endl;
      return 0;
    
}