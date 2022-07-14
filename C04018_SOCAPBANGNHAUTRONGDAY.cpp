#include<stdio.h>
#include<math.h>

void nhap(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
}
int sosanh(int a[], int n){
	int dem = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] == a[i+1]){
			dem++;
			a[i] = a[i+1];
		}
	}
	return dem;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	printf("%d\n",sosanh(a,n));
}
}