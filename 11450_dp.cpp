/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 23/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#define INF 1000000000

int T;
int m,c,k[30],price[30][30];
int sol,shop[210][25];
int max;

int main(){
	scanf("%d\n",&T);
	while(T--){
//		for(int i=0;i<300;i++){
//			for(int j=0;j<300;j++){
//				shop[i][j]=-1;
//			}
//		}
		scanf("%d %d\n",&m,&c);
		for(int i=0;i<c;i++){
			scanf("%d ",&k[i]);
			for(int j=0;j<k[i];j++){
				scanf("%d",&price[i][j]);
			}
			//scanf("%d\n",&price[i][k[i]-1]);
		}
		for(int i=0;i<=m;i++){
			shop[i][c]=m-i;
		}
		for(int i=c-1;i>=0;i--){
			for(int j=0;j<=m;j++){
				max=-INF;
				for(int l=0;l<k[i];l++){
					if(j-price[i][l]>=0){
						if(max<shop[j-price[i][l]][i+1]){
							max=shop[j-price[i][l]][i+1];
						}
					}
				}
				shop[j][i]=max;
			}
		}
		if(shop[m][0]<0){
			printf("no solution\n");
		}
		else{
			printf("%d\n",shop[m][0]);
		}
	}
	return 0;
}
