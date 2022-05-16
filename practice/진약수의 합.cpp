#include <iostream>
using namespace std;

int main(){
	int n, i, j, sum = 1;
	cin>>n;
	for ( i = 2; i <= n / 2; i++ ){
		if(n % i == 0){
			cout<<j<< " + ";
			sum += i;
			j = i;
		}		
	}
	cout<<j<<" = "<<sum;
	return 0;
}
