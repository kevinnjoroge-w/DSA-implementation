#include <stdio.h>
#include <stdlib.h>

int main()
typedef struct node
{
    int number;
    struct node*left
    {
        /* data */
    }node;
    struct node*right
    {
        /* data */
    }node;
    
    
}
bool search(node* tree , int number)
{
    if (tree == NULL){
     return 0;
    }
    else if(number < tree->number);
    {
        return search(tree->left , number);
    }
    else if(number > tree->number)
    {
        return search (tree->right , number);
    }
    else
    { return true ;}
    
    
}