/*******************************************
 * @author: Sandeep Singh      
 * @date: Fri 08/Apr/2016 02:09:16 PM IST      
 *                               
 *******************************************
 */
/* 1.using equation x^2+y^2+z^2=C and C<=10000
   therefore range of x,y,z is [-100,100]
   2.use the second equation x × y × z = B 
   and assume that x = y = z to obtain 
   x*x*x < B or x < B^(1/3). The new range of x is [−22,22]
 */
#include<cstdio>

int main(){
	int t,a,b,c,x,y,z;
	bool sol;
	scanf("%d",&t);
	while(t--){
		sol=false;
		scanf("%d%d%d",&a,&b,&c);
		for(x=-22;(x<=22)&&(!sol);x++) if(x*x <= c)
			for(y=-100;(y<=100)&&(!sol);y++) if(y!=x && x*x + y*y <= c)
				for(z=-100;(z<=100)&&(!sol);z++){
					if((y!=z)&&(z!=x)&&(x+y+z==a)&&(x*y*z==b)&&(x*x+y*y+z*z==c)){
						printf("%d %d %d\n",x,y,z);
						sol=true;
					}
				}
		if(!sol){
			printf("No solution.\n");
		}
	}
	return 0;
}
