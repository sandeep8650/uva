/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Tue 15/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<cstdlib>
#include<bitset>
using namespace std;
int place(int col);

bitset<30> rw,ld,rd;
int ans;
char board[20][20];
int n;

int main(){ 
	char c;
	int TC=0;
	rw.reset();
	ld.reset();
	rd.reset();
	while(scanf("%d\n",&n),(n!=0)){
		ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%c",&board[i][j]);
			}
			scanf("\n");
		}
		place(0);
		printf("Case %d: %d\n",++TC,ans);
	}
	return 0;
}


int place(int col){
	if(col==n){
		ans++;
	}
	for(int i=0;i<n;i++){
		if((rw[i]==false)&&(ld[i-col+n-1]==false)&&(rd[i+col]==false)&&(board[i][col]!='*')){
			rw[i]=ld[i-col+n-1]=rd[i+col]=true;
			
			place(col+1);
			
			rw[i]=ld[i-col+n-1]=rd[i+col]=false;
		}
	}
	return 0;
}




