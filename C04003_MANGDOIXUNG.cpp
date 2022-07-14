#include<stdio.h>

int mdx(int a[], int n){
	int l = 0, r=n-1;
	while(l<=r){
		if(a[l] != a[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int a[101];
		scanf("%d",&n);
		for(int i = 0; i< n ;i++){
			scanf("%d",&a[i]);
		}
		if(mdx(a,n)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}