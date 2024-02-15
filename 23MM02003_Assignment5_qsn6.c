#include <stdio.h>
int main()
{
    int n;
    
    int i;
    int a;
    
    printf("Enter the size n of array");
    scanf("%d",&n);
    char arr[n];

    printf("Enter the character array: ");
    for (i = 0; i < n; i++) {
        scanf(" %c",&arr[i]); 
    }
    
    char x;
    printf("Enter the element");
    scanf(" %c",&x);
    a=0;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            a=1;
            break;
        }
    }
    if(a==1){
        printf("Entered elemet is present in the array");

    }
    else{
        printf("Entered element is not present in the array");
    }


    return 0;
}

