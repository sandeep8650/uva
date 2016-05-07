/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Sat 26/Mar/2016      *
 *                               *
 *                               *
 *********************************/

//faster then 1260.cpp
#include<cstdio>

int main(){
	int T;
	int a[1005],b[1005];
	int n,sum,j,count;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>=a[j]){
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
