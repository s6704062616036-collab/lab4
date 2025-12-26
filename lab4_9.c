#include <stdio.h>
int main(){
	int score;
	int A=0,B=0,C=0,D=0,F=0;
	while(1){
		scanf("%d",&score);
		if(score == -1){
			break;
		}
		printf("%d ",score);
		
        if (score >= 85) {
            printf("(A)\n");
            A++;
        } else if (score >= 75) {
            printf("(B)\n");
            B++;
        } else if (score >= 68) {
            printf("(C)\n");
            C++;
        } else if (score >= 55) {
            printf("(D)\n");
            D++;
        } else {
            printf("(F)\n");
            F++;
        }
	}
}