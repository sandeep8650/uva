/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 30/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>

int main(){
	int k,s[15];
	int c=0;
	while(scanf("%d",&k),(k!=0)){
		for(int i=0;i<k;i++){
			scanf("%d",&s[i]);
		}
		if(c!=0){printf("\n");}
		for(int i=0;i<=k-6;i++)
			for(int j=i+1;j<=k-5;j++)
				for(int l=j+1;l<=k-4;l++)
					for(int m=l+1;m<=k-3;m++)
						for(int n=m+1;n<=k-2;n++)
							for(int p=n+1;p<=k-1;p++){
								printf("%d %d %d %d %d %d\n",s[i],s[j],s[l],s[m],s[n],s[p]);
							}
		c++;
	}
	return 0;
}
