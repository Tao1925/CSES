#include<iostream>
#include<algorithm>
using namespace std;
int nums[200000];
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++){
        cin >> nums[i];
    }
    sort(nums, nums + n - 1);
    for (int i = 0; i < n - 1; i++){
        if (nums[i] != i + 1){
            cout<< i + 1 << endl;
            break;
        }
    }
    if (nums[n - 2] == n - 1) cout << n << endl;
    return 0;
}