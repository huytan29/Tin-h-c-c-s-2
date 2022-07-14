#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int dem = 1;
	while(n > 9){
		n/=10;
		dem++;
	}
	printf("%d",dem);
}