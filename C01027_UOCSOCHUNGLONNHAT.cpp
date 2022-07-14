#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b;
		scanf("%d%d" ,&a, &b);
		for(int i = (a<b)?a:b ; i >= 1 ; i--){
			if(a%i==0 && b%i ==0){
				printf("%d\n",i);
				break;
			}
		}
			}
}