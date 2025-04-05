// hashes are arrays of linked lists 
// creating hash table in c 
#include <stdio.h>
#include <ctype.h>
unsigned int hash( const char *word) // hash function
{
    return toupper(word[0]) - 'A';
}