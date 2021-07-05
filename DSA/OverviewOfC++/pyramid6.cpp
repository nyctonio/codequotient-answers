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
    for (int i = 1; i <= n; i++)
    {
        int temp=i;
        bool check = true;
        for (int j = 1; j < 2*i; j++)
        {
            cout<<temp;
            if(temp==1){
                check=false;
                temp+=1;
            }else if(check){
                temp--;
            }else{
                temp++;
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}