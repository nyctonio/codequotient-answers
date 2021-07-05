#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    int sum=0;
    for (int i = 0; i <=n ; i++)
    {
        sum+=i;
    }
    cout<<sum;
    return 0;
}