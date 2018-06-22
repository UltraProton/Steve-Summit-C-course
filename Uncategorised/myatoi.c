#include <stdio.h>
#include<ctype.h>

int isdigitmy(int c){
	return (c>='0' && c <='9')? 1: 0;
}


int myatoi(char str[]){
	int i=0,ans=0;

	  while(1){
		if(isspace(str[i])){
			i++;
			continue;
		}

		else if(isdigitmy(str[i]))
			ans =ans*10 + str[i]-'0';

		else
			break;	

		i++;
	}

	return ans;
}


int myatoibetter(char str[]){ // Handles negative numbers as well
	int sign=1;
	int i=0;
	int ans =0;

	if(str[0]=='-'){
		sign=-1;
		i++;
	}


	  while(1){
		if(isspace(str[i])){
			i++;
			continue;
		}

		else if(isdigitmy(str[i]))
			ans =ans*10 + str[i]-'0';

		else
			break;	

		i++;
	}

	return ans*sign;

}

int main(void){
	char str[250];

	printf("Enter the string: " );

	scanf("%s",str);

	printf("%d\n", myatoibetter(str));

	return 0;

}