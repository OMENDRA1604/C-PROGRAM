int lengthOfLastWord(char *s)
{
    int n = strlen(s), count = 0, i = n - 1;
    if (n == 1)
        return 1;
    for (int j = n - 1; *(s + j) == ' '; j--)
    {
        i--;
    }
    while (*(s + i) != ' ')
    {
        count++;
        i--;
    }
    return count;
}