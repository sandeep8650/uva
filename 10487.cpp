/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 30/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
//#include<algorithm>
#include<cmath>
using namespace std; 

int main(){
	int n,m,min,cas=0;
	size_t k,l;
	int set[10005],q[30],r[500000];
	while(scanf("%d",&n),(n!=0)){
		for(int i=0;i<n;i++){
			scanf("%d",&set[i]);
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%d",&q[i]);
		}
		k=0;
		l=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				r[k]=set[i]+set[j];
				k++;
			}
		}
		//sort(r,r+k);
		cas++;
		printf("Case %d:\n",cas);
		for(int i=0;i<m;i++){
			min = 1000000000;
			for(size_t j=0;(j<k)&&(min!=0);j++){
				if(min>abs(q[i]-r[j])){
					min = abs(q[i]-r[j]);
					l=j;
				}
			}
			printf("Closest sum to %d is %d.\n",q[i],r[l]);
		}
	}
	return 0;
}
