/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Mon 08/Feb/2016      *
 *                               *
 *                               *
 *********************************/

//not solved
#include<cstdio>
#include<cstring>
#include<string>
#include<sstream>
#include<iostream>
using namespace std;

int main(){
	int n,p,c;
	char pname[100];
	string pn;
	char name[100];
	float d,mind;
	int r,rpf=1;
	freopen("input.in", "r", stdin);
	while(scanf("%d%d",&n,&p),(n||p)){
		c=-1;
		mind=10000000;
		for(int i=0;i<n;i++){
			//getline(std::cin,pn);
		}
		for(int j=0;j<p;j++){
			scanf("%s",pname);
			scanf("%f%d",&d,&r);
			for(int i=0;i<r;i++){
				getline(std::cin,pn);
			}
			if(c<r){
				c=r;
				mind = d;
				strcpy(name,pname);
			}
			else if((c==r)&&(mind>d)){
				c=r;
				mind = d;
				strcpy(name,pname);
			}
		}
		printf("RPF #%d\n%s\n\n",rpf++,name);
	}
	return 0;
}
