#include<stdio.h>

int sochan(long long n){
	if(n<10) return (n%2==0?1:0);
	while(n!=0){
		if((n%10)%2!=0) return 0;
		n = n/10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(sochan(n) == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}