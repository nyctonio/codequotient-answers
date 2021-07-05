#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a,b;
    cin>>a>>b;
    int temp=a;
    for (int i = 0; i < b; i++)
    {
        cout<<a<<endl;
        a+=temp;
    }
    
    return 0;
}