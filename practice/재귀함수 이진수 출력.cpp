#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void recur(int x){
	if(x==0) return;
	else{
		recur(x/2);
		printf("%d ", x%2);
	}
}



int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	recur(n);	
	return 0;
}
