//Vowel count 
#include<stdio.h>
#include<string.h>
int count(char* name)
{
    int l=0 ,n;
    n =strlen(name); 
    for(int i=0;i<n;i++)
    {
        if((*(name+i)=='A') || (*(name+i)=='E') || (*(name+i)=='I') || (*(name+i)=='O') || (*(name+i)=='U') || (*(name+i)=='a') || (*(name+i)=='e') || (*(name+i)=='i') || (*(name+i)=='o') || (*(name+i)=='u'))
        {
            l++;
        }
        
    }
    return l;
}
int main()
{
    char name[1000],num;
    printf("Enter the sentence :\n");
    gets(name);
    num=count(name);
    printf("\nTotal numbers of vowels is : %d",num);
    return 0;    
}