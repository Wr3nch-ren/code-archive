#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char name[100];
    int size;
    struct node* parent;
    struct node* left;
    struct node* right;
};

struct node* createNode(char* name,struct node* parent,int size){

    struct node* node = (struct node*)malloc(sizeof(struct node));

    strcpy(node->name,name);
    node->size = size;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    if(node->parent != NULL){
        if(node->parent->left != NULL) {
            struct node* child = node->parent->left;
            while(child->right != NULL) {
                child = child->right;
            }
        child->right = node;
        } else {
        node->parent->left = node;
        }
    }

    return node;
}

void postOrder(struct node* root){

    for(struct node* i = root->left;i != NULL;i = i->right){
        postOrder(i);
        root->size += i->size;
    }
    
    printf("%s = %dk\n",root->name,root->size);
}

int main() {

    struct node* root = createNode("/user/rt/courses/",NULL,1);
    
    struct node* cs016 = createNode("cs016/",root,2);
    createNode("grades",cs016,8);
    struct node* homeworks = createNode("homeworks/",cs016,1);
    createNode("hw1",homeworks,3);
    createNode("hw2",homeworks,2);
    createNode("hw3",homeworks,4);
    struct node* programs = createNode("programs/",cs016,1);
    createNode("pr1",programs,57);
    createNode("pr2",programs,97);
    createNode("pr3",programs,74);

    struct node* cs252 = createNode("cs252/",root,1);
    struct node* projects = createNode("projects/",cs252,1);
    struct node* papers = createNode("papers/",cs252,1);
    createNode("buylow",papers,26);
    createNode("sellhigh",papers,55);
    struct node* demos = createNode("demos/",projects,1);
    createNode("market",demos,4786);
    createNode("grades",cs252,3);

    postOrder(root);
}