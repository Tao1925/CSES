#include<iostream>
#include<vector>
using namespace std;
const int MOD = 1e9+7;
int main(){
	int n;
	cin >> n;
	int ans = 1;
	while (n--){
		ans *= 2;
		ans %= MOD;
	}
	cout << ans << endl;
	return 0;
}