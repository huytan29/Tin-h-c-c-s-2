#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int nhan = 1;
	while(n > 0){
		nhan *=n%10;
		n/=10;
	}
	printf("%d",nhan);
}