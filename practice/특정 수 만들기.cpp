#include <iostream>
#include <string>
using namespace std;

int n, m, a[11], cnt = 0;

void DFS(int L, int sum){
	if(L == n + 1){
		if(sum == m) cnt++;
	}
	else{
		DFS(L+1, sum + a[L]);
		DFS(L+1, sum-a[L]);
		DFS(L+1, sum);
	}
}

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i = 1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	DFS(1, 0);
	if( cnt == 0 ) printf("-1\n");
	else printf("%d\n", cnt);
	
	return 0;
}
