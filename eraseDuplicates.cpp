//3. Miss Anita is interested in working with arrays, 
//that contains values such as [8,4,3,5,7,4] 
//write a prog to eleminate duplicate values in the array
#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {8,4,3,5,7,4};
	sort(arr.begin(),arr.end());
	for(int i =1; i<arr.size();i++){
		if(arr[i]==arr[i-1]){
			arr.erase(arr.begin()+i);
		}
	}
	for(auto x : arr) std::cout<<x;

    return 0;
}
