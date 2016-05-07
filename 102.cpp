/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 09/Mar/2016      *
 *                               *
 *                               *
 *********************************/

//HINT: Brute force, just read the problem description carefully and figure out those 6 (yes, only 6) possible combinations, and then choose the smallest.
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	int B[3][3]={{0},{0},{0}};
	char bin[4],n[4]="012",color[3]={'B','C','G'};
	int max,total,sum;
	while(scanf("%d%d%d%d%d%d%d%d%d\n",&B[0][0],&B[0][2],&B[0][1],&B[1][0],&B[1][2],&B[1][1],&B[2][0],&B[2][2],&B[2][1])!=EOF){
		max=-1;
		total = 0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				total += B[i][j];
			} 
		}
		for(int i=0;i<6;i++){
			sum = 0;
			for(int j=0;j<3;j++){
				sum += B[j][n[j]-48];
			}
			if(sum>max){
				max=sum;
				strcpy(bin,n);
			}
			next_permutation(n,n+3);
		}
		printf("%c%c%c %d\n",color[bin[0]-48],color[bin[1]-48],color[bin[2]-48],total-max);
	}
}
