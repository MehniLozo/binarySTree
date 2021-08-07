#include <stdlib.h>
#include <stdio.h>
#include "tree.h"
#include <stdbool.h>
#include <malloc.h>
struct node*  create_tree(){return NULL;}


void add_node(struct node** root,int elem){ 
   struct node* pt = *root,*father = NULL; 
   bool found = false;
   while(!found&& pt)
   {   
    father = pt;
    if(elem>pt->info)
        pt = pt->right;
   else if(elem< pt->info)
       pt = pt->left;
   else//our current node is null or sthg}
    found = true;
   }
    if(!found){
        pt = (struct node*)malloc(sizeof(struct node));
        pt->info = elem; 
        if(elem>father->info){  
            pt->right = father->right;
            father->right = pt;
        }else{  //inferior
            pt->left = father->left;
            father->left = pt;
        }

    }
    else{
        printf("%d already exists in the tree",elem);
    }
}

void display_leaf(struct node * root )
{   //displaying the leafs of the tree using recursive method:
    //*check whether you are in the "NULL" if you are you're gonna have to quit
    //* current node is a leaf ---> print it
    //*current node is a middle/normal node--->apply the same display_leaf function
    
    if(!root)
        return;    
    if(!root->left && !root->right)
        printf("\t%d",root->info);
    else{
            if(root->left)
                display_leaf(root->left);
            if(root->right)
                display_leaf(root->right);
    }
}
void display_tree(struct node * root)
{   
    //In-depth display of the tree 
    if(!root)
       return; 
    printf("%d\t",root->info);
    if(root->left)
        display_tree(root->left);
    if(root->right)
        display_tree(root->right);
}
