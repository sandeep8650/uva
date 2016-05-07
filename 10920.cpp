/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Thu 25/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<cmath>
int main(){
	int SZ,P,mid;
	int x,y,step,k,i=0;
	size_t c;
	while(scanf("%d %d\n",&SZ,&P),(SZ||P)){
		k=sqrt(P);
		mid = (SZ+1)/2;
		if(k%2==0){
			c=(k-1)*(k-1);
			x = y = mid+(k-1)/2;
			step=k-1;
		}
		else{
			c = k*k;
			x = y = mid+(k/2);
			step=k;
		}
		if(c!=P){
			x++;
			c++;
		}
		i=0;
		while((c!=P)&&(i<step)){
			y--;
			c++;
			i++;
		}
		step++;
		i=0;
		while(c!=P){
			i=0;
			while((i<step)&&(c!=P)){ //step down
				x--;
				c++;
				i++;
			}
			i=0;
			while((i<step)&&(c!=P)){ //step right
				y++;
				c++;
				i++;
			}
			step++;
			i=0;
			while((i<step)&&(c!=P)){ //step up
				x++;
				c++;
				i++;
			}
			i=0;
			while((i<step)&&(c!=P)){ //step left
				y--;
				c++;
				i++;
			}
			step++;
		}
		printf("Line = %d, column = %d.\n",x,y);
	}
	return 0;
}
