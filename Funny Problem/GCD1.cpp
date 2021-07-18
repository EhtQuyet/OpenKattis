#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, t;
    long long x, y;
    cin >> t;
    while(t--){
        cin >> a >> x >> y;
        long long k = std::__gcd(x,y);
        for(int i = 1; i <= k; ++i) cout << a;
    }
    return 0;
}
