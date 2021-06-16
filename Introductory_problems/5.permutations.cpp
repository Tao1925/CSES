#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n == 1){
        cout << 1 << endl;
    }else if (n == 2||n == 3){
        cout << "NO SOLUTION" << endl;
    } else {
        if (n % 2 == 0){
            for (int i = 1; i <= n/2; i++){
                cout << 2 * i << " ";
            }
            for (int i = 1; i <= n/2; i++){
                cout << 2 * i - 1 << " ";
            }
            cout << endl;
        }else {
            for (int i = 1; i <= n/2; i++){
                cout << 2 * i << " ";
            }
            for (int i = 0; i <= n/2; i++){
                cout << 2 * i + 1 << " ";
            }
        }
    }
    return 0;
}