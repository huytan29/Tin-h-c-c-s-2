#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[1001];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ;j++){
			if(a[i]<a[j]){
				int temp  = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("%d ",a[i]);
	}
}