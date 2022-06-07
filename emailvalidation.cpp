//email validator
#include<stdio.h>
#include<string.h>
#define max 100
int email_valid(char email[]);
int main()
{
    char email[max];
    up:
    printf("\nEnter a email to check : ");
    scanf(" %s",email);
    if(strlen(email) <6){
        printf("Invalid email");
        goto up;
    }
    email_valid(email);
    return 0;
}
int email_valid(char email[])
{
    int at_position,dt_position,i,at_true = 0,dt_true = 0,diff,diff_last,pos_true = 0;
    for(i=0;i<strlen(email);i++)
    {
        if(email[i] == '@')
        {
            at_true =1;
            at_position = i;
        }
    }
    for(i=at_position;i<strlen(email);i++)
    {
        if(email[i] == '.')
        {
            dt_true =1;
            dt_position= i;
        }
    }
    diff_last = strlen(email) - (dt_position+1);
    diff = dt_position-at_position;
    if(diff>1 && diff_last >=2 &&at_position >0)
    {
        pos_true = 1;
    }
    if(pos_true && at_true && dt_true)
    {
        printf("\nValid email : %s",email);
    }else
    {
        printf("\nInvalid email");
    }
}


