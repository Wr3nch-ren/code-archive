#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char key[100];
    int dist;
    struct node* parent;
    struct node* left;
    struct node* right;
};

struct node* createNode(char *key, struct node* parent,int  dist) {

    struct node* node = (struct node*)malloc(sizeof(struct node));

    strcpy(node->key,key);
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;
    node->dist = dist;

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

int isExternal(struct node* node)
{
    if(node->left == NULL)
        return 1;
    else
        return 0;
}

int depth(struct node* node)
{
    int depth = 0;
    while(node->parent != NULL) {
        depth += node->dist;
        node = node->parent;
    }
    return depth;
}

int main() {

    struct node* root = createNode("0",NULL,0);

    int n;
    struct node* nodes[100];

    scanf("%d",&n);

    char child_key[100],parent_key[100];
    int dist;

    nodes[0] = root;

    for(int i = 1;i <= n;i++){
        
        scanf("%s %s %d",parent_key,child_key,&dist);

        for(int j = 0;j < i;j++){
            if(strcmp(nodes[j]->key,parent_key) == 0){
                nodes[i] = createNode(child_key,nodes[j],dist);
            }
        }

    }

    int leaf = 0,h = 0;


    for(int i = 0;i <= n;i++){

        if(isExternal(nodes[i])){
            leaf++;
            h += depth(nodes[i]);
        }
    }

    printf("%.2f",h/(float)leaf);

}
