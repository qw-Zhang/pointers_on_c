#include<stdio.h>
#include<stdlib.h>
#include"singly_linked_list_node.h"

#define DEBUG 1
#if DEBUG
//this debug way is a good method, it will be avoid the problems of explain sentence like/**/..//..
#endif

Node* sll_init(Node* root);
int sll_insert(Node* root,int value);
Node* sll_reverse(Node* root);
void print(Node *root);

int main(void)
{
    Node *root = NULL;
    root = sll_init(root);
    for(int i  = 1;i < 11;i++){
        sll_insert(root,i);
    }
    print(root);

    Node *root_new = sll_reverse(root);
    print(root_new);
    return 0;
}

Node* sll_init(Node *root)
{
    if(root != NULL){
        return root;
    }
    root = (Node *)malloc(sizeof(Node));
    root->link = NULL;
    root->value = 0;
    return root;
}

int sll_insert(Node* root,int value)
{
    if(root == NULL){
        return -1;
    }
    Node *pre = NULL;
    Node *this = root;
    Node *next = this->link; 
    while(next != NULL){
        if(next->value > value){
            break;
        }
        this = next;
        next = next->link; 
    }
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->value = value; 
    if(next == NULL){
        this->link = newnode; 
        newnode->link = NULL; 
    }else{
        newnode->link = this;
        pre->link = newnode; 
    }
    return 1;
}

void print(Node *root){
    Node *next = root->link;
    while(next != NULL){
        printf("%d ",next->value);
        next = next->link; 
    }
    printf("\n");
}

Node* sll_reverse(Node* root)
{
    if(root == NULL)
        return NULL;

    Node *p = root->link;
    Node *q = p->link;
    Node *r;

    p->link = NULL;

    while(q != NULL){
        r = q->link; 
        q->link = p;
        p = q;
        q = r;
    }
    root->link = p;
    return root;
}
