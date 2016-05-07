/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Fri 12/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<bitset>
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

int main(){
	bitset<110000> sol;
	int s,b,l,r,nl,nr;
	while(scanf("%d %d",&s,&b),(s||b)){
		sol.set();
		sol[0]=1;
		sol[s+1]=1;
		while(b--){
			scanf("%d %d\n",&l,&r);
			for(int i=l;i<=r;i++){
				sol[i]=0;
			}
			nl=l;
			nr=r;
//			while(1){
//				if((sol[nl]==1)&&(sol[nr]==1)){
//					break;
//				}
//				if(sol[nl]==0){
//					nl--;
//				}
//				if(sol[nr]==0){
//					nr++;
//				}
//			}
			while(sol[nl]==0){
				nl--;
			}
			while(sol[nr]==0){
				nr++;
			}
			if(nl==0){
				printf("* ");
			}
			else{
				printf("%d ",nl);
			}
			if(nr==s+1){
				printf("*\n");
			}
			else{
				printf("%d\n",nr);
			}
		}
		printf("-\n");
	}
}
