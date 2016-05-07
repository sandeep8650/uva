/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Sat 26/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int T;
	int a[1005],b[1005];
	int n,sum,j,count;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		sum=0;
		b[0]=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=1;i<n;i++){
			count=0;
			j=i-1;
			while((j>=0)&&(a[i]!=a[j])){
				if(a[j]<a[i]){
					count++;
				}
				j--;
			}
			if(j<0){
				b[i]=count;
			}
			else{
				b[i]=b[j]+count+1;
			}
			sum += b[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
