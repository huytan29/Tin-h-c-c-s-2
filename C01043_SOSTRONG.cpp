#include<stdio.h>
int gt(int n){
	if(n==0||n==1) return 1;
	int giaithua=1;
	for(int i = 1 ; i <= n ;i++){
		giaithua *= i;
	}
	return giaithua;
}
int main(){
	int n;
	scanf("%d", &n);
	int temp = n;
	int sum = 0;
	do{
		sum += gt(n%10);
		n=n/10;
	}
	while(n!=0);
	if(sum==temp){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
}