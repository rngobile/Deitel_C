#include <stdio.h>

void printbin(int n)
{
    char b[] = "00000000";
    int i;

    for (i=0; i<8; i++, n=n/2){
        if (n%2){
            b[7-i]='1';
        }
    }
        printf("%s ",b);
}

void main()
{
    int i;
    char string[] = "Convert This to BINARY";

    int size = sizeof(string)-1;
    printf("size: %d\n",size);

    for(i = 0; i<size; i++){
        printbin(string[i]);
    }
}

