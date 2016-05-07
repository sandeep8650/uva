/*******************************************
 * @author: Sandeep Singh      
 * @date: Fri 08/Apr/2016 10:46:05 PM IST      
 *                               
 *******************************************
 */
#include<cstdio>

int main(){
	int N,t,n[35],k,sum,min;
	while(scanf("%d",&N)!=EOF){
		scanf("%d",&t);
		for(int i=0;i<t;i++){	
			scanf("%d",&n[i]);
		}
		min=1000000000;
		for(int i=0;i<(1<<t);i++){
			sum=0;
			for(int j=0;j<t;j++){
				if(i&(1<<j)){
					sum+=n[j];
				}
			}
			if(min>(N-sum) && N-sum >=0){
				min=N-sum;
				k=i;
			}
		}
		for(int i=0;i<t;i++){
			if(k&(1<<i)){
				printf("%d ",n[i]);
			}
		}
		printf("sum:%d\n",N-min);
	}
	return 0;
}
