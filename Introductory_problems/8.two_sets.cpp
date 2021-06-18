#include<iostream>
#include<vector>
using namespace std;
// 1->1 2->3 3->6 4->10 5->15 6->21 7->28 8->36
int main(){
	int n;
	cin >> n;
	if (n % 4 == 3 || n % 4 == 0){
		cout << "YES" << endl;
		vector<int> nums1;
		vector<int> nums2;
		if (n % 4 == 3){
			nums1.push_back(1);
			nums1.push_back(2);
			nums2.push_back(3);
			for (int i = 1;i <= n/4; i++){
				nums1.push_back(i*4);
				nums2.push_back(i*4 + 1);
				nums2.push_back(i*4 + 2);
				nums1.push_back(i*4 + 3);
			}
			
		}else {
			for (int i = 1;i <= n/4; i++){
				nums1.push_back(i*4 - 3);
				nums2.push_back(i*4 - 2);
				nums2.push_back(i*4 - 1);
				nums1.push_back(i*4);
			}
		}
		cout << nums1.size() << endl;
		for (int num: nums1){
			cout << num << " ";
		}
		cout << endl;
		cout << nums2.size() << endl;
		for (int num: nums2){
			cout << num << " ";
		}
		cout << endl;
	}else {
		cout << "NO" << endl;
	}
	return 0;
}