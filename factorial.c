#include<stdio.h>
int main()   
{
    int num = 7;
    int result;
    for (int i = num; i>= 1; i--) {
        result = result * i;
    }
    printf("%d",result);
    return 0;
}
