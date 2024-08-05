#include <stdio.h>

int removeDuplicates(int* nums) {
    int i =0, j=0 , a[5];
    while(j<5)
    {
        if(*(nums +j)==*(nums+j+1))
        {
            j++;
        }
        if(*(nums +j) != *(nums+j+1))
        {
             a[i] = *(nums+j) ;
            i++;
            j++;
        }
    }
    for (j=0; j<5; j++)
    {
        printf("a: \n");
        printf("%d\n",a[j]);
    }
    for (j=0; j<5; j++)
    {
        if(j<i)
        *(nums+j) = a[j];
        else
        *(nums+j) = 0;
        
    }
    return i;    
}
int main() {
    int a, b[5]={1,2,2,2,2};
    a = removeDuplicates(b);
    for(int i=0;i<5;i++)
    {
    printf("%d\n",b[i]);
    }
    printf("RUN :%d\n",a);
    return 0;
}