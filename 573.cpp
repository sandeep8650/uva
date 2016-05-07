/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Mon 08/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int H,D,F,day;
	float U,h,f;
	while(scanf("%d%f%d%d",&H,&U,&D,&F),H){
		day=0;
		h=0;
		f = (float(F)/100)*U;
		while(h<=H && h>=0){
			day++;
			if(U>0){
				h=h+U;
				U = U-f;
			}
			if(h<=H){
				h = h-D;
			}
		}
		if(h>H){
			printf("success on day %d\n",day);
		}
		else{
			printf("failure on day %d\n",day);
		}
	}
	return 0;
}
