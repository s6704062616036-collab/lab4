#include <stdio.h>
int main(){
	 char c;
	 int i,j,n,k;
	 scanf("%c %d %d",&c,&k,&n);
	 for(i=0;i<n;i++){
	 	for(j=0;j<k;j++){
	 		printf("%c",c);
		 }
		 printf("\n");
	 }
}