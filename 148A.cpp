#include<bits/stdc++.h>
#define ll long long
#define be(x) x.begin() , x.end()
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int i,count=0;
    for(i=1;i<=d;i++)
    {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0 )
        {
            count++;
        }
    }
    cout<<count<<endl; 
}