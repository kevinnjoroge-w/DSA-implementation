// creating hash table in c 
#include <stdio.h>
#include <ctype.h>
unsigned int hash( const char *word)
{
    return toupper(word[0]) - 'A';
}