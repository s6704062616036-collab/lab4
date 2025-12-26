#include <stdio.h>
int main() {
    int score,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&score);
    	printf("%d ",score);
    	if (score >= 68) {
		if(score >= 85){
			printf("(A)\n");
		}else if(score >= 75){
			printf("(B)\n");
		}else if(score >= 68){
			printf("(C)\n");
		}
	} else {
	 	if(score >= 55){
	 		printf("(D)\n");
		 }else{
		 	 printf("(F)\n");
		 }			
	}
}
	}
	
