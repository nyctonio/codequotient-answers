#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int number;
    cin>>number;
    if(number%2==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
    return 0;
}