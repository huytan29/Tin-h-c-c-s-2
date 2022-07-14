#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	if(b != 0){
		if(a != 0){
			printf("%.2f", (float)-b/a);
		}
		else{
			printf("Vo nghiem");
		}
	}
	else{
		if(a != 0){
				printf("%.2f", (float)-b/a);
		}
		else{
			printf("Vo so nghiem");
		}
	}
}