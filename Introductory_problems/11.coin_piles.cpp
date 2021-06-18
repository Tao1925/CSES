#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	int tt;
	cin >> tt;
	while(tt--){
		int x,y;
		cin>>x>>y;
		if (x<y)swap(x,y);
		int diff = x-y;
		if (y<diff){
			cout <<"NO"<<endl;
			continue;
		}
		x-=2*diff;
		y-=diff;
		if (x%3!=0){
			cout <<"NO"<<endl;
		}else cout <<"YES"<<endl;
	}
	return 0;
}