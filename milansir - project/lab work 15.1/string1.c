
#include<stdio.h>
#include<string.h>

int main()
{
    
    char str[50];
    int i;
    
    printf("Enter string : ");
    // scanf("%s",&str);
    gets(str);
    
    for(i=0; str[i]!='\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    
    printf("String in upper case : %s ",str);

    return 0;
}