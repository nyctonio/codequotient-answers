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

    for (int i = 1; i < n+1; i++){
        int num=1;
        bool check=true;
        for (int j = 1; j < 2*n; j++)
            {
                if(num<=n-i+1)
                    cout<<num;
                else
                    cout<<"*";
                if(num==n)
                    check=false;
                if(check)
                    num++;
                else
                    num--;
                
            }
        cout<<endl;
    }
    
    return 0;
}