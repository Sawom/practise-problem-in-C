#include <stdio.h>
#include <string.h>
int main(){
  	char str[100], ch;
  	int i, sign;
  	sign = -1;
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	for(i = 0; i <= strlen(str); i++){
  		if(str[i] == ch)  {
  			sign= i;
 		}
	}
    if(sign ==  -1){
  		printf("\n Sorry!! We haven't found the Search Character = %c ", ch);
	}
	else{
		printf("\n The last Occurrence of the Search Element = %c is at Position %d ", ch, sign + 1);
	}
  	return 0;
}
