/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 24/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<iostream>
#define SIZE 1000
int main(){
	int N,n;
	int x,temp;
	int c[4];
	char M[SIZE][SIZE],m[SIZE][SIZE];
	bool flag;
	while(scanf("%d %d\n",&N,&n),(N||n)){
		c[0]=0;
		c[1]=0;
		c[2]=0;
		c[3]=0;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				scanf("%c",&M[i][j]);
			}
			scanf("\n");
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%c",&m[i][j]);
			}
			scanf("\n");
		}
		x=4;
		while(x--){
			for(int i=0;i<=N-n;i++){
				for(int j=0;j<=N-n;j++){
					flag=1;
					for(int k=0;(k<n)&&flag;k++){
						for(int l=0;(l<n)&&flag;l++){
							if(m[k][l]!=M[k+i][l+j]){
								flag=0;
							}
						}
					}
					if(flag){c[x]++;}
					//printf("i=%d,j=%d | %d %d %d %d\n",i,j,c[3],c[2],c[1],c[0]);
				}
			}
			for(int p=0;p<=(n-1)/2;p++){
				for(int q=p;q<(n-1-p);q++){
					temp=m[p][q];
					m[p][q]			=	m[n-1-q][p];
					m[n-1-q][p]		=	m[n-1-p][n-1-q];
					m[n-1-p][n-1-q]	=	m[q][n-1-p];
					m[q][n-1-p]		=	temp;
				}
			}
		}
		printf("%d %d %d %d\n",c[3],c[2],c[1],c[0]);
	}
	return 0;
}
