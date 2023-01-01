#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int x=0;
    for(i=0;i<n;i++)
    {
        string x1;
        cin>>x1;
        if(x1[1]=='+')
        {
            x++;
        }else
        {
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}