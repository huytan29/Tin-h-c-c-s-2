#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[1000];
   for(int i = 0  ; i < n ; i++){
   	scanf("%d",&a[i]);
   }
   int chan[n], le[n];
   int c = 0 , l = 0;
   for(int i = 0; i < n; i++){
   	if(a[i]%2==0){
   		chan[c++]= a[i];
	   }
	   else{
	   	le[l++]=a[i];
	   }
   }
   for(int  i = 0 ; i <c;i++){
   	printf("%d ",chan[i]);
   }
   printf("\n");
   for(int i =  0 ; i < l ;i++){
   	printf("%d ",le[i]);
   }
}