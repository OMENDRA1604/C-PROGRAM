#include<stdio.h>
#include<string.h>

int lengthOfLongestSubstring(char* s) 
{
    int l=strlen(s) , count = 0;
    for (int i = 0 ; i<l ; i++)
    {
        for (int j=i+1 ; j<l; j++)
        {
            if (*(s+i) == *(s+j) || *(s+j) == *(s+j+1))
            {
                printf("\nNEW : %d",count);
                break;
            }
            else 
            {
                count ++;
                printf("\nOLD : %d",count);
            }
            
        }
        
        
    }
    return count ;
}
int main()
{
    int l ;
    char s[1000];
    gets(s);
    l = lengthOfLongestSubstring(s);
    printf("\n %d",l);
    return 0;
}