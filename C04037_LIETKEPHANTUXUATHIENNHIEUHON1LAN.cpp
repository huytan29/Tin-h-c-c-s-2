#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int dem = 0;
	int c[10001];
	int b[n];
	for(int j = 0 ; j < 10001 ; j++){
		c[j] = 0;
	}
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
		c[a[i]]++;
	}
	for(int i  = 0 ; i < n ; i ++){
		if(c[a[i]] > 1){
			b[dem++] = a[i];
			c[a[i]] = 0;
		}
	}
	printf("%d\n",dem);
    for(int i = 0 ; i <  dem ; i++){
    		printf("%d ", b[i]);
	}	
	
}