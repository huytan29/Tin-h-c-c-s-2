#include<stdio.h>
int main(){
	int r,d;
	scanf("%d%d", &r, &d);
	for(int i = 0 ;  i<  d; i++){
		for(int j = 0 ; j < r ; j++){
			if(i==0||i==d-1||j==0||j==r-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}