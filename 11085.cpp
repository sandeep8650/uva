/*******************************************
 * @author: Sandeep Singh
 * @date: Thu 21/Apr/2016 09:05:12 AM IST
 *
 *******************************************
 */
#include<cstdio>
#include<bitset>
using namespace std;
int row[8];
bitset<15> rw,rd,ld;

int backtrack(int c){
	int min=1000000000,move;
	if(c==8) return 0;
	for(int i=0;i<8;i++){
		if(rw[i]==0 && rd[i+c]==0 && ld[i-c+7]==0){
			rw[i]=1;rd[i+c]=1;ld[i-c+7]=1;
			if(row[c]==i){
				move=backtrack(c+1);
			}
			else{
				move=backtrack(c+1)+1;
			}
			if(move<min) min=move;
			rw[i]=0;rd[i+c]=0;ld[i-c+7]=0;
		}
	}
	return min;	
}

int main(){
	int cas=1,min;
	rw.reset();
	rd.reset();
	ld.reset();
	while(scanf("%d%d%d%d%d%d%d%d",&row[0],
								   &row[1],
								   &row[2],
								   &row[3],
								   &row[4],
								   &row[5],
								   &row[6],
								   &row[7])!=EOF){
		
		for(int i=0;i<8;i++){
			row[i]--;
		}
		min=backtrack(0);
		printf("Case %d: %d\n",cas++,min);
	}
	
}
