#include<stdio.h>
int main()
{
    int num,sum=0;
    char choice;
    while(1){
        printf("Provide the number\n");
        scanf("%d",&num);
        if(num%2==0){
            sum+=num;

        }
        printf("Do you want to continue\n");
        scanf(" %c",&choice);
        if(choice=='N'||choice=='n'){
            break ;

        }
        else if (choice=='Y'|| choice=='y'){
            continue;
        }
        
        else{
                printf("Please provide correct input\n");
            }
        
        
        


    }
    printf("The sum is %d",sum);
}