#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
    struct NODE *fwd;
    struct NODE *bwd;
    int value;
}Node;

Node* dll_init(Node *root);
int dll_insert(Node *root,int value);

int main(void)
{
    Node *root = NULL; 
    root  = dll_init(root);
    for(int i = 0;i < 100;i++){
        int value = rand()%201 - 100;
        dll_insert(root,value);
    }
    Node *cur = root;
    while(cur != NULL){
        printf("%d ",cur->value );
        cur = cur->fwd; 
    }
    printf("\n");
    return 0;
}

Node* dll_init(Node *root)
{
    if(root != NULL){
        return root;
    }
    root = (Node *)malloc(sizeof(Node));
    root->value = 0;
    root->bwd = NULL;
    root->fwd = NULL;
    return root;
}

int dll_insert(Node *root,int value)
{
    Node *this = root;
    Node *next;
    if(this == NULL){
        return -1;
    }
    next = this->fwd;
    while(next != NULL){
        this = next;
        if(this->value > value)
            break;
        next = this->fwd; 
    }
    Node* newnode = (Node *)malloc(sizeof(Node));
    newnode->value = value; 
    if(next == NULL){
        this->fwd = newnode;
        newnode->bwd = this;
        newnode->fwd = NULL; 
    }else{
        if(this->bwd == NULL){
            this->bwd = newnode;
            newnode->fwd = this;
            newnode->bwd = NULL;
        }else{
            this->bwd->fwd = newnode;
            newnode->fwd = this;
            newnode->bwd = this->bwd;
            this->bwd = newnode; 

        }
    }
    
}
