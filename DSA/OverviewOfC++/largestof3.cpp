#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a,b,c;
    cin>>a>>b>>c;
    int d = (a>b)?a:b;
    cout<<((d>c)?d:c);
    return 0;
}