/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Fri 05/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int T,a,b,c,i=1;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d",&a,&b,&c);
		if((a<b && a>c) || (a>b && a<c)){
			printf("Case %d: %d\n",i,a);
		}
		else if((b<a && b>c) || (b>a && b<c)){
			printf("Case %d: %d\n",i,b);
		}
		else{
			printf("Case %d: %d\n",i,c);
		}
		i++;
	}
	return 0;
}
