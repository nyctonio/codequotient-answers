#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int amount;
    cin>>amount;
    int arr[]={2000, 500, 100, 50, 20, 10, 5, 2, 1};
    int n=(sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < n; i++)
    {
        cout<<amount/arr[i]<<" ";
        amount%=arr[i];
    }
    
    return 0;
}