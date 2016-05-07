/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 09/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int n,a,b,k;
	while(scanf("%d\n",&n),(n!=0)){
		a=0;b=0;
		k=1;
		for(int i=0;i<31;i++){
			if((n)&(1<<i)){
				if(k%2!=0){
					a += (1<<i);
					k++;
				}
				else{
					b += (1<<i);
					k++;
				}
			}
		}
		printf("%d %d\n",a,b);
	}
}
