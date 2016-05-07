/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Fri 25/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<cmath>
int main(){
	int T;
	int i,c[25],d,k,n;
	int sum;
	size_t ans; 
	scanf("%d",&T);
	while(T--){
		scanf("%d",&i);
		for(int l=0;l<=i;l++){
			scanf("%d",&c[l]);
		}
		scanf("%d",&d);
		scanf("%d",&k);
		sum = 0;
		n=0;
		while(sum<k){
			n++;
			sum+=d*n;
		}
		ans=0;
		for(int l=0;l<=i;l++){
			ans+= c[l]*((size_t)pow(n,l));
		}
		printf("%zu\n",ans);
	}
}
