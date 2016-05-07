/*******************************************
 * @author: Sandeep Singh
 * @date: Thu 21/Apr/2016 03:31:59 PM IST
 *
 *******************************************
 */
#include<cstdio>
#include<cstring>
int p[50]={0,0,2,3,0,5,0,7,0,0,0,11,0,13,0,0,0,17,0,19,0,0,0,23,0,0,0,0,0,29,0,31,0,0,0,0,0,37,0,0,0,41,0,43,0,0,0,47,0,0};
int used[50];
int a[50];
int n;

int backtrack(int m){
	if(m==n+1){
		printf("%d",a[1]);
		for(int i=2;i<=n;i++){
			printf(" %d",a[i]);
		}
		printf("\n");
		return 0;
	}
	for(int i=2;i<=n;i++){
		if(!used[i] && p[a[m-1]+i]!=0 && m!=n){
			used[i]=1;
			a[m]=i;
			backtrack(m+1);
			used[i]=0;
		}
		else if(!used[i] && p[a[m-1]+i]!=0 && p[1+i]!=0){
			used[i]=1;
			a[m]=i;
			backtrack(m+1);
			used[i]=0;
		}
	}
	return 0;
}
int main(){
	int cas=1;
	memset(used,0,sizeof(used));
	memset(a,0,sizeof(a));
	a[1]=1;
	while(scanf("%d",&n)!=EOF){
		printf("Case %d:\n",cas++);
		backtrack(2);
		printf("\n");
	}
	return 0;
}
