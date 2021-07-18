#include<bits/stdc++.h>
using namespace std;
int main(){
	long long m,n,a,b;
	cin >> m >> n >> a >> b;
	if(a % n == 1 && b % n == 0) cout << "1";
	if((a-1) % n != 0 && b % n == 0) cout << "2";
	if((a-1) % n != 0 && b % n != 0) cout << "3";
	return 0;
}
