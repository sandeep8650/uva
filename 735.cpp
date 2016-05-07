/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 30/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int score;
	int c,p;
	int a[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
			 21,22,24,26,27,28,30,32,33,34,36,38,39,40,42,45,48,50,51,
			 54,57,60	
			}; //size 43
	while(scanf("%d",&score),(score>0)){
		c=0;p=0;
		for(int i=0;i<43;i++)
			for(int j=0;j<43;j++)
				for(int k=0;k<43;k++){
					if(score-a[i]-a[j]-a[k]==0){
						p++; //counting permutation
						if((j>=i)&&(k>=j)){c++;} //counting combination
					}
				}
		if(p>0){
			printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\n",score,c);
			printf("NUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n",score,p);
		}
		else{
			printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n",score);
		}
		printf("**********************************************************************\n");
		
	}
	printf("END OF OUTPUT\n");
	return 0;
}
