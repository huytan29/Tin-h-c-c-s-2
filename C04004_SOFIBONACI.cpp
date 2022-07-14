#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n, a[93];
		scanf("%lld",&n);
		for(long long i = 0 ; i < n ;i++){
			if(i==0||i==1){
				a[i] = 1;
			}
			else{
				a[i] = a[i-2] + a[i-1];
			}
			}
			printf("%lld\n",a[n-1]);
	}
}