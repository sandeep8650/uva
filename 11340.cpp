/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Thu 11/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<memory.h>
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,k;
	int value[10000];
	int m;
	char ch;
	char str[11000];
	double cost;
	scanf("%d",&n);
	while(n--){
		cost=0;
		scanf("%d",&k);
		memset(value,0,sizeof(value));
		for(int i=0;i<k;i++){
			//scanf("%c %lld\n",&ch,&value[ch]);
			cin>>ch;
			cin>>value[ch];
		}		
		scanf("%d\n",&m);
		while(m--){
			gets(str);
			for(size_t i=0;i<strlen(str);i++){
				cost += value[str[i]]/100.0;
			}
		}
		printf("%.2lf$\n",cost);
	}
	return 0;
}







