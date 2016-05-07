/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Tue 15/Mar/2016      *
 *                               *
 *                               *
 *********************************/

//using bit manipulation

#include<cstdio>
#include<cstdlib>
#include<bitset>

#define ibit(n,i) (n&(1<<i))


using namespace std;

int place(int col);

int rw=0,ld=0,rd=0;
int ans;
char board[20][20];
int n;

int main(){ 
	char c;
	int TC=0;
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
		if((ibit(rw,i)==0)&&(ibit(ld,i-col+n-1)==0)&&(ibit(rd,i+col)==0)&&(board[i][col]!='*')){
			rw |= (1<<i);
			ld |= (1<<(i-col+n-1));
			rd |= (1<<(i+col));
			
			place(col+1);
			
			rw &= ~(1<<i);
			ld &= ~(1<<(i-col+n-1));
			rd &= ~(1<<(i+col));
		}
	}
	return 0;
}




