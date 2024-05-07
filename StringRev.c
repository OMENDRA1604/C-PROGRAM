// String reversed 
#include<stdio.h>
#include<string.h>
void rev(char* name)
{
    int n;
    char l;
    n =strlen(name); 
    for(int i=0;i<n/2;i++)
    {
        l=*(name+i);
        *(name+i)=*(name+n-i-1);
        *(name+n-i-1)=l;    
    }
}
int main()
{
    char name[1000],num;
    printf("Enter the sentence :\n");
    gets(name);
    rev(name);
    printf("\nSentence after reversing :\n");
    puts(name);
    return 0;    
}