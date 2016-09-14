// using gets and putchar
#include <stdio.h>

void reverse( const char * const sPtr ); // prototype

int main()
{
    char sentence[80]; // create char array
    printf( "enter a line of text:\n");

    //use gets to read line of text
    gets( sentence );
    printf( "\nThe line printed backwards is:\n" );
    reverse(sentence);

    printf("\n");
    return 0; // indicates successful termination
}

void reverse( const char * const sPtr)
{
    if (sPtr[0] == '\0'){
        return;
    }
    else {
        reverse( &sPtr[1] ); // recursive step

        putchar ( sPtr[0] );
    }
}
