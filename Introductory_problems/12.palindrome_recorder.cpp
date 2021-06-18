#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int cnt[26];
	for (int i = 0; i < 26; i++) cnt[i] = 0;
	for (char c: s){
		cnt[c - 'A']++;
	}
	int count = 0;
	int index = -1;
	for (int i = 0; i < 26; i++){
		if (cnt[i] % 2 != 0){
			count++;
			index = i;
		}
	}
	string ans = "";
	if (count > 1){
		cout <<  "NO SOLUTION" << endl;
	}else {
		for (int i=0;i<26;i++){
			int temp = cnt[i]/2;
			while(temp--){
				ans += (char)('A' + i);
			}
		}
		if (index >= 0) ans += (char)('A' + index);
		for (int i = 25; i >= 0; i--){
			int temp = cnt[i]/2;
			while(temp--){
				ans += (char)('A' + i);
			}
		}
	}
	cout << ans << endl;
	return 0;
}