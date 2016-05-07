/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Sun 07/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int T,max,t=1;
	int N,c[110];
	//freopen("input.in","r",stdin);
	scanf("%d",&T);
	while(T--){
		max=-1;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&c[i]);
			if(max<c[i]){
				max=c[i];
			}
		}
	printf("Case %d: %d\n",t++,max);
	}
	return 0;
}
