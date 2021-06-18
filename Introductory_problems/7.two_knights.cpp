#include<iostream>
using namespace std;
typedef long long ll;
// two knights attack each other if thy form
// a 2*3 retangle, like this:
// *--
// --*
int main(){
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++){
        ll tot = ((i * i)*(i * i - 1))/2;
        ll exclude = 4*(i - 1)*(i - 2);
        cout << tot - exclude << endl;
    }
    return 0;
}