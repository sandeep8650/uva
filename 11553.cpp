/*******************************************
 * @author: Sandeep Singh      
 * @date: Fri 08/Apr/2016 07:13:00 PM IST      
 *                               
 *******************************************
 */
 
/* @hint 1.using all n! permutation
*/ 
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int t,n,M[10][10],min,w;
	int a[10];
	scanf("%d",&t);
	while(t--){
		min=1000000000;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			a[i]=i;
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&M[i][j]);
				
		do{ //all n! permutation using array a
			w=0;
			for(int i=0;i<n;i++){
				w+=M[i][a[i]];
			}
			if(w<min)
				min=w;
		 }while(next_permutation(a,a+n));
		printf("%d\n",min);
	}
}
