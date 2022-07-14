#include<stdio.h>
#include<math.h>


int sochinhphuong(int n){
	int temp = (int) sqrt(n);
	if(temp*temp == n) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(sochinhphuong(n)) printf("YES\n");
		else printf("NO\n");
	}
}