#include<stdio.h>

int ktra(int a[] , int i){
      for(int j = i ; j >=0 ; j--){
      	if(a[i]<a[j]) return 0;
	  }
	  return 1;
	}

int main(int argc, char const *argv[]){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[1000];
		for(int i = 0 ; i < n ; i++)
		    scanf("%d",&a[i]);
		int dem = 0;
		for(int i = 0 ; i < n ; i++){
			if(ktra(a,i)) dem++;
		}
		printf("%d\n",dem);
	}
}