#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int gcd(int i, int j){
  if (j == 0)
        return i;
    return gcd(j, i % j);
}

int main()
{
    fastio;
    cout<<gcd(4,12);
    return 0;
}