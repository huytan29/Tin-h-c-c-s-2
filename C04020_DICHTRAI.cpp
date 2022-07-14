#include<stdio.h>
 void nhap(int a[], int n){
 	for(int i = 0 ; i < n ; i++){
 		scanf("%d",&a[i]);
	 }
 }
 void in(int a[], int n, int u, int v){
 	for(int i = u ; i < v ; i++) printf("%d ", a[i]);
 }
 int main(){
 	int n, a[100],x;
 	scanf("%d",&n);
 	nhap(a,n);
 	scanf("%d",&x);
 	in(a,n,x,n);
 	in(a,n,0,x);
 }