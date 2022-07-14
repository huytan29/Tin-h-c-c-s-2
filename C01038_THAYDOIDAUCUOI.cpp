#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	long long cuoi=n%10;
	int dau=n;
	int mu=0;
	while(dau>9){
		mu++;
		dau=dau/10;
	}
	int giua=n-pow(10,mu)*dau-cuoi;
	int result=cuoi*pow(10,mu)+giua+dau;
	printf("%d",result);
}