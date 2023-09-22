#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void D(int v){
	if(v>7) return;
	else{
		D(2*v);
		printf("%d", v);
		D(2*v+1);
	}
}

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	D(1);	
	return 0;
}
