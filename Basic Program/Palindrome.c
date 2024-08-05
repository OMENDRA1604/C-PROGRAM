//Palindrome
#include<stdio.h>
#include<string.h>
void palindrome(char* str)
{
    int n=strlen(str) , count=0;
    for(int i=0;i<n/2;i++)
    {
        if (*(str+i)==*(str+n-i-1)) count++;
    }
    if(count==n/2) printf("Given string is palindrome");
    else printf("Given string is not palindrome");
}
int main()
{
    char s1[1000];
    printf("Enter the sentence :\n");
    gets(s1);
    palindrome(s1);
    return 0;    
}