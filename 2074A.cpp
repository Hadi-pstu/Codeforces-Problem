#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d && a==d)
        {
            cout<<"YES"<<endl;
        } 
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}