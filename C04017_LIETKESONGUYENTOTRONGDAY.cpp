#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return (n>1?1:0);
}
void nhap(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int dem=0;
	nhap(a,n);
	for(int i = 0 ; i < n ; i++){
		if(snt(a[i]) == 1){
		  dem++;
	}
}
		printf("%d ",dem);
	for(int i = 0 ; i < n ; i++){
		if(snt(a[i])==1){
			printf("%d ",a[i]);
		}
	}
}