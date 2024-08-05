#include <stdio.h>
#include <string.h>
int lengthOfLastWord(char *s)
{
    int n = strlen(s), count = 0, i = n - 1;
    printf("%d\n",n);
    if (n == 1)
        return 1;
    /*for (int j = n - 1; *(s + j) == ' '; j--)
    {
        i--;
    }*/
    /*while (i >= 0 && *(s+i)==' ') 
    {
        i--;
    }*/
    for (int j = n - 1; *(s + j) == ' ' &&  i>=0; j--)
    {
        i--;
    }
    while (*(s + i) != ' ' && i>=0)
    {
        count++;
        i--;
    }
    return count;
}
int main()
{
    char s[1000];
    gets(s);
    int n = lengthOfLastWord(s);
    printf("Length of the last world : %d", n);
    return 0;
}
