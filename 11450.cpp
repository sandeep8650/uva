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
int sol;



int shop(int money,int g){
	int max=-;
	int x;
	if(money<0){
		return -1000000000;
	}
	else if(g==c){
		return m-money;
	}
	else{
		for(int i=0;i<k[g];i++){
			x = shop(money-price[g][i],g+1);
			if(max<x){
				max=x;
			}
		}
		return max;
	}
}


int main(){
	scanf("%d\n",&T);
	while(T--){
		scanf("%d %d\n",&m,&c);
		for(int i=0;i<c;i++){
			scanf("%d ",&k[i]);
			for(int j=0;j<k[i];j++){
				scanf("%d",&price[i][j]);
			}
			//scanf("%d\n",&price[i][k[i]-1]);
		}
		sol=shop(m,0);
		if(sol<0){
			printf("no solution\n");
		}
		else{
			printf("%d\n",sol);
		}
	}
	return 0;
}




