/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Fri 05/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int T,a,b;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&a,&b);
		if(a<b){
			printf("<\n");
		}
		else if(a>b){
			printf(">\n");
		}
		else{
			printf("=\n");
		}
	}
	return 0;
}
