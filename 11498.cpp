/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Fri 05/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int T,n,m,x,y;
	while(scanf("%d",&T),T){
		scanf("%d%d",&m,&n);
		while(T--){
			scanf("%d%d",&x,&y);
			if(x<m && y<n){
				printf("SO\n");
			}
			else if(x<m && y>n){
				printf("NO\n");
			}
			else if(x>m && y>n){
				printf("NE\n");
			}
			else if(x>m && y<n){
				printf("SE\n");
			}
			else{
				printf("divisa\n");
			}
		}
	}
	return 0;
}
