#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int nums[200000];
int main(){
    ll ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for (int i = 1; i < n; i++){
        if (nums[i] < nums[i - 1]){
            ans += nums[i - 1] - nums[i];
            nums[i] = nums[i - 1];
        }
    }
    cout << ans << endl;
}