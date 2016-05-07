/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Thu 11/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<bitset>
#include<cmath>
using namespace std;

int main(){
	bitset<30010> flag;
	int n,a,b,j;
	//freopen("input.in","r",stdin);
	while(scanf("%d",&n)!=EOF){
		flag.reset();
		scanf("%d",&a);
		for(int i=1;i<n;i++){
			scanf("%d",&b);
			flag[abs(b-a)]=1;
			a=b;
		}
		j=1;
		while(j<n){
			if(flag[j]==0){
				break;
			}
			j++;
		}
		if(j==n){
			printf("Jolly\n");
		}
		else{
			printf("Not jolly\n");
		}
	}
	return 0;
}
