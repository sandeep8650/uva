/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Sat 26/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<iostream>
using namespace std;

class maker{
	public:
		char m[25];
		int l,h;
		bool is_lies(int q){
			if(q<=h && q>=l){
				return true;
			}
			return false;
		}
};

int main(){
	int T,d,q,p,name;
	int flag;
	maker makr[10050];
	scanf("%d",&T);
	while(T--){
		scanf("%d",&d);
		for(int i=0;i<d;i++){
			scanf("%s %d %d",makr[i].m,&makr[i].l,&makr[i].h);
		}
		scanf("%d",&q);
		for(int i=0;i<q;i++){
			scanf("%d",&p);
			flag=0;
			for(int j=0;(j<d)&&(flag!=2);j++){
				if(makr[j].is_lies(p)){
					flag++;
					name=j;
				}
			}
			if(flag==1){
				printf("%s\n",makr[name].m);
			}
			else{
				printf("UNDETERMINED\n");
			}
		}
		if(T)
			printf("\n");
	}
	return 0;
}
