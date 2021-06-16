#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        ll x, y;
        cin >> x >> y;
        ll layout = max(x, y);
        ll ans = (layout - 1) *  (layout - 1);
        if (layout % 2 == 0){
            if (y == layout){
                ans += x;
            }else {
                ans += 2 * layout - y;
            }
        } else {
            if (x == layout){
                ans += y;
            }else {
                ans += 2 * layout - x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}