#include<stdio.h>
#define max 50
 int main(){
 	char str[max],state = 'A';
 	int i;
 	printf("\n DFA accepting string which do not contain 101 as substring ");
 	printf("\n Enter the string : ");
 	scanf("%s",str);
 	
 	for(i=0;str[i]!='\0';i++){
 		
 		switch (state)
		 {
		 	case 'A':
		 		if(str[i]=='0')
		 		state='A';
		 		else if(str[i]=='1')
		 		state = 'B';
		 		break;
		 	case 'B':
		 		if(str[i]=='1')
		 		state='B';
		 		else if(str[i]=='0')
		 		state = 'C';
		 		break;
		 		
		 	case 'C':
		 		if(str[i]=='0')
		 		state='A';
		 		else if(str[i]=='1')
		 		state = 'D';
		 		break;
			case 'D':
		 		if(str[i]=='0')
		 		state='D';
		 		else if(str[i]=='1')
		 		state = 'D';
		 		break;		 		
		 }
		 
		 
	 }
	if(state=='A')
		printf("Input string accepted as it reached final state %c",state);
	else if(state=='B')
		printf("Input string accepted as it reached final state %c",state);
	else if(state=='C')
		printf("Input string accepted as it reached final state %c",state);
		
	else
	printf("Input string  is Rejected by DFA");
 }
