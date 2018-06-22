#include <stdio.h>
#define size 100

int atoi(char str[]){
	int ans=0,i=0;

	while(str[i]){
		ans=ans*10 + str[i]-'0';
		i++;
	}

	return ans;
}

void getline1(char line[]){
	int c;
	int max=size-1;
	int nch=0;

    while((c=getchar())!=EOF && c!='\n' && nch < max ){
		line[nch++]=c;
	}

}


int main(void){
	char line[size];
	float gallons,miles,mpg;

	while(1){
		printf("Enter miles driven: \n");
		getline1(line);
		miles=atoi(line);

		if(miles==0)
			break;

		printf("Enter gallons used: \n");
		getline1(line);
		gallons=atoi(line);

		printf("%3.2f\n",(miles/gallons));
	}

	return 0;
}