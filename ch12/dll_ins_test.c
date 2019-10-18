#include<stdio.h>
#include"doubly_linked_list_node.h"
int main(void)
{
    Node *root=NULL;

    for(int i = 12;i < 20;i++){
        dll_insert(root,i);
    }
    Node *cur = root;
    while(cur->fwd!=NULL)
        printf("%d ",cur->value);
    printf("\n");
    return 0;
}
