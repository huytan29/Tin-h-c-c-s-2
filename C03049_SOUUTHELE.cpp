#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long n;
	scanf("%lld", &n);
	int chan = 0;
	int le = 0;
	while(n>0){
		((n%10)%2==0)?(++chan):(++le);
		n/=10;
	}
	if(chan<le) printf("YES\n");
    else printf("NO\n");
}
}