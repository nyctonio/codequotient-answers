#include <iostream>
#include <cmath>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

// method 1 but not work in codequotient as there the required stl is not included in the code
// int binaryToDecimal(string binary){
//     int n=binary.length()-1;
//     int decimal=0;
//     for(char c:binary){
//         string a(1,c);
//         decimal+=stoi(a)*(pow(2,n));
//         n--;
//     }
    
//     return decimal;
// }

// method 2 (work in codequotient)
int binaryToDecimal(string binary){
   	string num = binary;
    int decimal = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            decimal += base;
        base = base * 2;
    }
    return decimal;
}

int main()
{
    fastio;
    string s;
    cin>>s;
    cout<<binaryToDecimal(s);
    return 0;
}