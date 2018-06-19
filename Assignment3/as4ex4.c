#include <stdio.h>
#include <ctype.h>
#include<math.h>


#define linesize 256

double stDeviation(char line[], float mean, int n_digits){
	int i=0;
	double stDev=0;
	double deviation=0;


	while(1){
		if(isspace(line[i])){   //Skip the leading spaces...
			i++;
			continue;
		}

		else if(isdigit(line[i])){ //Capture the character if it is a digit

			deviation = ((line[i]-'0')-mean);
			stDev+=deviation*deviation;
		}

		else     // If string contains anything else then do nothing
			break;	

		i++;
	}

	stDev/=n_digits;

	stDev=sqrt(stDev);

	return stDev;

}

float atoiAvg(char str[]){
	int sign=1;
	int i=0;
	float sum =0;
	int n_digits=0;

	if(str[0]=='-'){  //check whether first character is negative sign '-'
		sign=-1;
		i++;
	}


	  while(1){
		if(isspace(str[i])){
			i++;
			continue;
		}

		else if(isdigit(str[i])){
			n_digits++;
			sum+= str[i]-'0';
		}

		else
			break;	

		i++;
	}

	return (sum/n_digits)*sign;

}


int Readline(char line[],int max){
	int c;
	int nch=0;
	max=max-1;
	while((c=getchar())!=EOF && c!='\n' && nch<max){
		line[nch]=c;
		nch++;
	}

	if(c==EOF && nch==0)
		return EOF;

	line[nch]='\0';

	return nch;

}


int main(void){
	char line[linesize];
	int nch=0;
	float avg=0;

	while(nch=Readline(line,linesize)){  // Take the no of characters returned by ReadLine() in nch if Readline returns EOF then we 
		                                // incorrect string and  break out of loop
		if(nch==EOF){
			printf("No numbers were there in the string\n");
			break;
		}
		avg=atoiAvg(line);
		printf("Average: %f\nStandard Deviation: %f\n",avg,stDeviation(line,avg,nch) );
	}

	return 0;
}
