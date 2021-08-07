#include "tree.c"
#include <stdio.h>
#include <stdlib.h>


int main(){ 
    /*iterative addition (normal)*/
    struct node* root1= create_tree();
    root1 = (struct node*)malloc(sizeof(struct node));
    root1->info = 15;
     add_node(&root1,10);
    add_node(&root1,20);
    add_node(&root1,30);
    add_node(&root1,19);
    add_node(&root1,6);
    
    printf("\n******************Tree 1(iterative)***************\n");
    
     printf("\nroot node = %d\n",root1->info);
    printf("\nleft node = %d\n",root1->left->info);
    printf("\nright node = %d\n",root1->right->info);

    printf("\n");
    display_leaf(root1);
    
    printf("\nDisplaying the tree...\n");
    display_tree(root1);


    
    /*Recursive addition*/
    struct node* root= create_tree();
    root = (struct node*)malloc(sizeof(struct node));
    root->info = 15;

    add_node_rec(&root,10);
    add_node_rec(&root,20);
    add_node_rec(&root,30);
    add_node_rec(&root,19);
    add_node_rec(&root,6);
    printf("\n******************Tree 2(recursive)***************\n");
    printf("\nroot node = %d\n",root->info);
    printf("\nleft node = %d\n",root->left->info);
    printf("\nright node = %d\n",root->right->info);

    printf("\n");
    display_leaf(root);
    
    printf("\nDisplaying the tree...\n");
    display_tree(root);

return 0;
}
