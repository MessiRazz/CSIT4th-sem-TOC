#include<stdio.h>
#define max 50
 int main(){
 	char str[max],state = 'A';
 	int i;
 	printf("\n DFA  accepting L = (ab U aba)*");
 	printf("\n Enter the string : ");
 	scanf("%s",str);
 	
 	for(i=0;str[i]!='\0';i++){
 		
 		switch (state)
		 {
		 	case 'A':
		 		if(str[i]=='a')
		 		state='B';
		 		else if(str[i]=='b')
		 		state = 'E';
		 		break;
		 	case 'B':
		 		if(str[i]=='a')
		 		state='E';
		 		else if(str[i]=='b')
		 		state = 'C';
		 		break;
		 		
		 	case 'C':
		 		if(str[i]=='a')
		 		state='D';
		 		else if(str[i]=='b')
		 		state = 'E';
		 		break;
			case 'D':
		 		if(str[i]=='a')
		 		state='B';
		 		else if(str[i]=='b')
		 		state = 'C';
		 		break;	
			case 'E':
		 		if(str[i]=='a')
		 		state='E';
		 		else if(str[i]=='b')
		 		state = 'E';
		 		break;		 		
		 }
		 
		 
	 }
	if(state=='A')
		printf("Input string accepted as it reached final state %c",state);
	else if(state == 'C')
		printf("Input string accepted as it reached final state %c",state);
	else if(state == 'D')
		printf("Input string accepted as it reached final state %c",state);
	
	else
	printf("Input string  is Rejected by DFA");
 }
