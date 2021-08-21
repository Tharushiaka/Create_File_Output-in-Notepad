#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>

void main()
{
    int i;
    FILE *fp;
    time_t t;

    for(i=0;i<100;i++)
    {
        time(&t);
        printf("\n Current time of Number %d is : %s",i+1,ctime(&t));
        fp=fopen("C:\\Users\\hp\\Desktop\\Tharu.txt","a");
        fprintf(fp,"Current time of Number %d is --> %s",i+1,ctime(&t));
        Sleep(1000);
    }

}
