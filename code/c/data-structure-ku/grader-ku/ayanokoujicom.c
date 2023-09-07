#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char key[100];
    struct node* parent;
    struct node* left;
    struct node* right;
};


struct node* createNode(char *key, struct node* parent) {

    struct node* node = (struct node*)malloc(sizeof(struct node));

    strcpy(node->key,key);
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    if(node->parent != NULL) {
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

void findPath(struct node* node,int n){

    struct node* nodes[n+1];
    int i = 0;

    while(node != NULL) {
        nodes[i] = node;
        i++;
        node = node->parent;
    }

    for(int j = i-1;j >= 0;--j){
        if(j == 0 || j == i-1)
            printf("%s",nodes[j]->key);
        else
            printf("%s/",nodes[j]->key);
    } 
   
}

int main() {

    struct node* root = createNode("/",NULL);
    struct node* nodes[1000];
    int n_node = 1;

    nodes[0] = root;
    char parent_key[100],child_key[100],target[100];

    while(1){
        scanf("%s",parent_key);
        if(strcmp(parent_key,"<`~`?>") == 0)
            break;
        scanf("%s",child_key);

         for(int j = 0;j < n_node;j++){
            if(strcmp(nodes[j]->key,parent_key) == 0){
                nodes[n_node] = createNode(child_key,nodes[j]);
                n_node++;
            }
        }

    }
    

    scanf("%s",target);


    int j = 0;
    for(;j < n_node;j++){
        if(strcmp(nodes[j]->key,target) == 0){
            findPath(nodes[j],n_node);
            return 0;
        }
    }

    if(j == n_node)
        printf("(╯°□°）╯︵ ┻━┻ - Not found, Alas!!!\n┬─┬ /( ゜-゜/) - Calm down bro.");
    return 0;
}