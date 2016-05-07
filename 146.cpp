/*********************************
 *    Author: Sandeep Singh      *
 *    Date: Fri 26/Feb/2016      *
 *                               *
 *                               *
 *********************************/

#include<algorithm>
#include<cstdio>
#include<cstring>

using namespace std;
int main(){
	char str1[51];
	char str2[51];
	while(scanf("%s\n",str1),strcmp(str1,"#")){
		strcpy(str2,str1);
		next_permutation(str2,str2+strlen(str2));
		if(lexicographical_compare(str1, str1+strlen(str1), str2, str2+strlen(str2))){
			printf("%s\n",str2);
		}
		else{
			printf("No Successor\n");
		}
	}
	return 0;
}
