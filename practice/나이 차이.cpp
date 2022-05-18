#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, i, j= 0;
	vector<int> age;
	cin>>n;
	for (i = 0; i < n; i++ ){
		cin>>j; 
		age.push_back(j);	
	}
	cout<< *max_element(age.begin(), age.end()) - *min_element(age.begin(), age.end());
	return 0;
}
