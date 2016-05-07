/*******************************************
 * @author: Sandeep Singh      
 * @date: Fri 08/Apr/2016 03:43:52 PM IST      
 *                               
 *******************************************
 */
#include<cstdio>

int main(){
	int t,L,n,l[25],flag,sum;
	scanf("%d",&t);
	while(t--){
		flag = 0;
		scanf("%d",&L);
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&l[i]);
		}
		for(int i=0;i<(1<<n);i++){
			sum=0;
			for(int j=0;j<n;j++){
				if(i&(1<<j)){
					sum+=l[j];
				}
			}
			if(sum==L){
				flag=1;
				break;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
