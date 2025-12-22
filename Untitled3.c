#include <stdio.h>
int main(){
	int i,j,x,n;
	scanf("%d %d",&x,&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",x);
		}
		printf("\n");
	}
}
