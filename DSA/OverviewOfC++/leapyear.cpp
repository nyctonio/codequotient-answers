#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int year;
    cin>>year;
    bool check=(year%100==0?true:false);
    if(check){
        cout<<((year%400==0)?"Leap Year":"Not a Leap Year");
    }else{
        cout<<((year%4==0)?"Leap Year":"Not a Leap Year");
    }
    
    return 0;
}