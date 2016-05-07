/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 09/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<bitset>
using namespace std;
int main(){
	bitset<1000002> bit;
	int s,e,skip;
	int n,m,flag;
	while(scanf("%d %d\n",&n,&m),(n||m)){
		bit.reset();
		flag=1;
		for(int i=0;i<n;i++){
			scanf("%d %d\n",&s,&e);
			for(int j=s;(j<e)&&(flag);j++){
				if(bit.test(j)){
					flag=0;
				}
				else{
					bit.set(j);
				}
			}
		}
		for(int i=0;i<m;i++){
			scanf("%d %d %d\n",&s,&e,&skip);
			while((s<=1000000)&&(flag)){
				for(int j=s;(j<e)&&(flag)&&(j<=1000000);j++){
					if(bit.test(j)){
						flag=0;
					}
					else{
						bit.set(j);
					}
				}
				s+=skip;
				e+=skip;
			}
		}
		flag==1?printf("NO CONFLICT\n"):printf("CONFLICT\n");
	}
}
