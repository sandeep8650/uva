/*******************************************
 * @author: Sandeep Singh      
 * @date: Fri 08/Apr/2016 01:02:28 PM IST      
 *    unsolved                           
 *******************************************
 */
#include<cstdio>

int main(){
	int n=2000,m;
	float l; 
	for(int i=2;i<=n;i++)
		for(int j=2;j<=n;j++)
			for(int k=2;k<=n;k++){
					l=(float)(i+j+k)/(i*j*k-1);
					m=(i+j+k)/(i*j*k-1);
					if(l-m==0){
						printf("%.2f %.2f %.2f %.2f\n",l/100.0,k/100.0,j/100.0,i/100.0);
					}
				}
	return 0;
}
