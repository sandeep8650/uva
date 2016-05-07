/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Sun 07/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

#define INF 1000000

int main(){
	int cost;
	int N,B,H,W;
	int p;
	int b[20];
	freopen("input.in","r",stdin);
	while(scanf("%d%d%d%d",&N,&B,&H,&W)!=EOF){
		cost = INF;
		while(H--){
			scanf("%d",&p);
			for(int i=0;i<W;i++){
				scanf("%d",&b[i]);
			}
			for(int i=0;i<W;i++){
				if( (b[i]>=N) && (cost>(N*p))){
					cost=N*p;
				}
			}
			
		}
			if(cost<=B){
				printf("%d\n",cost);
			}
			else{
				printf("stay home\n");
			}
	}
	return 0;
}
