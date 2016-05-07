/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Tue 23/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#define INF 1000000000
int main(){
	int i,j;
	int x,y;
	int n;
	int max,c;
	while(scanf("%d%d",&i,&j)!=EOF){
		max=-INF;
		if(i<j){
			x=i;
			y=j;
		}
		else{
			x=j;
			y=i;
		}
		for(int k=x;k<=y;k++){
			n=k;
			c=1;
			while(n>1){
				if(n%2!=0){
					n=3*n+1;
				}
				else{
					n=n>>1;
				}
				c++;
			}
			if(max<c){
				max=c;
			}
		}
		printf("%d %d %d\n",i,j,max);
	}
}
