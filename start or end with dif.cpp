#include<stdio.h>
#define max 50
 int main(){
 	char str[max],state = 'A';
 	int i;
 	printf("\n DFA for start or end with differnt symbol ");
 	printf("\n Enter the string : ");
 	scanf("%s",str);
 	
 	for(i=0;str[i]!='\0';i++){
 		
 		switch (state)
		 {
		 	case 'A':
		 		if(str[i]=='0')
		 		state='B';
		 		else if(str[i]=='1')
		 		state = 'D';
		 		break;
		 	case 'B':
		 		if(str[i]=='0')
		 		state='B';
		 		else if(str[i]=='1')
		 		state = 'C';
		 		break;
		 		
		 	case 'C':
		 		if(str[i]=='0')
		 		state='B';
		 		else if(str[i]=='1')
		 		state = 'C';
		 		break;
			case 'D':
		 		if(str[i]=='0')
		 		state='E';
		 		else if(str[i]=='1')
		 		state = 'D';
		 		break;
			case 'E':
		 		if(str[i]=='0')
		 		state='E';
		 		else if(str[i]=='1')
		 		state = 'D';
		 		break;		 		
		 }
		 
		 
	 }
	if(state=='C')
		printf("Input string accepted as it reached final state %c",state);
	else if(state=='E')
		printf("Input string accepted as it reached final state %c",state);
	else
	printf("Input string  is Rejected by DFA");
 }
