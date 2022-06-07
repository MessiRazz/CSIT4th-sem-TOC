// C program to validate password
#include<stdio.h>
#include<string.h>
#define max 50
void check_pass(char s[]);
int main(){
	char pass[max];
	while(1){
	

	printf("\n condition are must use at least one uppercase ,lowercase, numbmer (0-9),length greater than 8 and specific symbol(specific symbol available are :@, &,*,#,$):");
	printf("\n Enter the password to create :");
	gets(pass);
	
	check_pass(pass);
	}
	
}
void check_pass(char s[]){
	int flag_lowc=0,flag_upc=0,flag_spe=0,flag_len=0,flag_null=0;
	int len,i;
	len=strlen(s);
	if(len<8){
		flag_len=0;
		printf("\n password must be longer than 8:retry");
		
	}

	else{
          for(i=0;i<len;i++)
		  if(s[i]>='a'&& s[i]<='z')
		  flag_lowc=1;
		  else
		  flag_lowc=0;	
		  
		for(i=0;i<len;i++)
		if(s[i]>='A'&& s[i]<='Z')
		  flag_upc=1;
		  else
		  flag_upc=0;
		  
		 for(i=0;i<len;i++){
		 
		 if(s[i]=='@'||s[i]=='&'||s[i]=='*'||s[i]=='%'||s[i]=='$')
		 flag_spe=1;
		 else 
		 flag_spe=0;}
	
		 for(i=0;i<=len;i++)
		 if(s[i]!='\0')
		 flag_null=1;
		 else 
		 flag_null=0;
		 
		
	
		
	}
	 if(flag_lowc==0 && flag_upc==0 && flag_spe==0 && flag_len==0 && flag_null==0){
		printf("\n Invalid password (TRY again");
	}
	else
	printf("\n Password created sucessfully!!");

	

}


