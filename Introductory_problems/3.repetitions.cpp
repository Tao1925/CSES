#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans = 1;
    char prev = s[0];
    int len = s.size();
    int cur = 1;
    for (int i = 1; i < len ; i++){
        if (s[i] == prev){
            cur++;
        } else {
            prev = s[i];
            ans = max(ans, cur);
            cur = 1;
        }
    }
    ans = max(ans, cur);
    cout << ans << endl;
    return 0;
}