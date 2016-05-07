/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 09/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<cstring>

int main(){
	char line[10000];
	while(scanf("%s\n",line)!=EOF){
		for(int i=0;i<strlen(line);i++){
			printf("%c",line[i]-7);
		}
		printf("\n");
	}
}
