#include<stdio.h>

void print(int* ptr){
    *ptr = 6;
}
int main()
{
    int a = 5;
    int* ptr = &a;
    print(ptr);
    printf("%d",a);
    return 0;

}