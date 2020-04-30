#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<unistd.h>
int main(void)
{
    int a;
    for (a>0 ; ;a++ )
    {
        printf("%d\n",2^a);
        sleep(15000);
    }
}