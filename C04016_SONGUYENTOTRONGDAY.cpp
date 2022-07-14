#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return (n>1?1:0);
}
int main(){
	int t,k=1;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int dem[10001];
		for(int i = 0 ; i < 10001 ;i++){
			dem[i] = 0;
		}
		for(int i = 0 ; i < 10001 ;i++){
			scanf("%d",&a[i]);
			dem[a[i]]++;
		}
		printf("Test %d:\n",k++);
		for(int i = 0 ; i < n ; i++){
			if(snt(i) && dem[i]>0){
				printf("%d xuat hien %d lan\n",i,dem[i]);
				dem[i] = 0;
			}
		}
	}
}