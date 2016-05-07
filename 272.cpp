/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Wed 09/Mar/2016      *
 *                               *
 *                               *
 *********************************/

#include<cstdio>
#include<cstring>

int main(){
	int k=1;
	char str[100000];
	while(gets(str)!=NULL){
		for(int i=0;i<strlen(str);i++){
			if((str[i]=='"')&&(k%2==1)){
				printf("``");
				k++;
			}
			else if((str[i]=='"')&&(k%2==0)){
				printf("''");
				k++;
			}
			else{
				printf("%c",str[i]);
			}
		}
		printf("\n");
	}
}
