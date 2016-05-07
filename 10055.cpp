/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Thu 25/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<cstdlib>
void main(){
	long long int x,y;
	while(scanf("%lld%lld",&x,&y)!=EOF){
		printf("%lld\n",llabs(x-y));
	}
}
