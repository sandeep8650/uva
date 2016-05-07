/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Tue 29/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int k,l,m;
	int x[20050],y[20050],count;
	double j;
	while(scanf("%d",&k)!=EOF){
		count=0;
		for(int i=k+1;i<=2*k;i++){ //y = [k+1 , 2*k]
			j = (i*k)/(double)(i-k);  //x = y*k/(y-k)
			if(j-int(j)==0){
				x[count]=j;
				y[count]=i;
				count++;
			}
			//printf("j-int(j)=%lf,,count=%d\n",j-int(j),count);
		}
		printf("%d\n",count);
		for(int i=0;i<count;i++){
			printf("1/%d = 1/%d + 1/%d\n",k,x[i],y[i]);
		}
	}
	return 0;
}
