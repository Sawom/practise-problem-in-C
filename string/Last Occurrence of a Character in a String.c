#include <stdio.h>
#include <string.h>
int main(){
  	char str[100], ch;
  	int i, index, len;
  	index = -1;
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
	len  = strlen(str);
  	for(i = 0; i < len; i++){
  		if(str[i] == ch)  {
  			index = i;
 		}
	}
    if(index != -1){
  		i = index;

	  	while(i < len){
  			str[i] = str[i + 1];
			i++;
		}
	}
	printf("\n The Final String after Removing Last Occurrence of '%c' = %s ", ch, str);
  	return 0;
}
