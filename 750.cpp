/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Mon 14/Mar/2016      *
 *                               *
 *                               *
 *********************************/

//For exact output format see udebug

#include<cstdio>
#include<cstdlib>

int count=1;
int r,c;

int place(int row[], int col);

int main(){
	int row[8]={0},n;
	scanf("%d\n",&n);
	while(n--){
		count=1;
		scanf("%d %d\n",&r,&c);
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		place(row,0);
		if(n!=0){
			printf("\n");
		}
	}
	
	
}

int place(int row[], int col){
	int flag;
	if(col<8){
		for(int i=0;i<8;i++){
			flag=1;
			for(int j=0;(j<col)&&(flag);j++){   //checking constraint
				if( (row[j]==i)||(abs(row[j]-i)==abs(j-col)) ){
					flag=0;
				}
			}
			if(flag){
				row[col]=i;
				if((col==7)&&(row[c-1]==r-1)){
					printf("%2d      %d",count++,row[0]+1);
					for(int k=1;k<8;k++){
						printf(" %d",row[k]+1);
					}
					printf("\n");
				}
				place(row,col+1);
			}
		}
	}
	return 0;
}
