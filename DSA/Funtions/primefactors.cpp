#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void primeFactors(int n){
  int p=2;
  while(n!=1){
    if(n%p==0){
      cout<<p<<endl;
      n/=p;
      continue;
    }
    p++;
  }
}

int main()
{
    fastio;
    int n;
    cin>>n;
    primeFactors(n);   
    return 0;
}