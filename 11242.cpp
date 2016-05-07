/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Sat 26/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
	int f,r;
	float m[105],n[105];
	float d[10005],spread[10005];
	float maxx;
	while(scanf("%d%d",&f,&r)==2){
		for(int i=0;i<f;i++){
			scanf("%f",&m[i]);
		}
		for(int i=0;i<r;i++){
			scanf("%f",&n[i]);
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<f;j++){
				d[i*f+j]=n[i]/m[j];
//				printf("d[%d]=%f\n",i*f+j,d[i*f+j]);
			}
		}
		sort(d,d+r*f);
//		for(int i=0;i<r*f;i++){
//			printf("d[%d]=%f\n",i,d[i]);
//		}
		maxx=-1000000000;
		for(int i=0;i<r*f-1;i++){
			spread[i]=d[i+1]/d[i];
//			printf("spread[%d]=%f\n",i,spread[i]);
			if(maxx<spread[i]){
				maxx=spread[i];
			}
		}
		printf("%.2f\n",maxx);
	}
	return 0;
}
