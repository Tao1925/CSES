#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin >> n;
	ll temp = 5;
	ll ans = 0;
	while(temp <= n){
		ans += n/temp;
		temp*=5;
	}
	cout << ans << endl;
	return 0;
}