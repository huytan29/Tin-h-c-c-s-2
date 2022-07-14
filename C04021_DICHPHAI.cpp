#include<stdio.h>

void nhap(int a[],int n){
	for(int i = 0 ; i< n ; i++){
		scanf("%d",&a[i]);
	}
}
void in(int a[], int n, int u, int v){
	for(int i  = n-u ; i < v; i++) printf("%d ", a[i]);
}

int main(){
	int n,x;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	scanf("%d",&x);
	in(a,n,x,n);
	in(a,n,n,n-x);
	
	
}