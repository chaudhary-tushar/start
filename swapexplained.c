#include<stdio.h>
void swap(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
}
void swap(int *a, int *b);
int main(void)
{
    int x=1;
    int y=2;
printf("the output unswsapped is %i:%i\n", x,y);
    swap(&x,&y);
    printf("the output now is %i:%i\n",x,y );
}


