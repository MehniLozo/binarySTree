#include "tree.c"
#include <stdio.h>
#include <stdlib.h>


int main(){ 
    struct node* root= create_tree();
    root = (struct node*)malloc(sizeof(struct node));
    root->info = 15;
    add_node(&root,10);
    add_node(&root,20);
    add_node(&root,30);
    add_node(&root,19);
    add_node(&root,6);
    printf("\nroot node = %d\n",root->info);
    printf("\nleft node = %d\n",root->left->info);
    printf("\nright node = %d\n",root->right->info);

    printf("\n");
    display_leaf(root);
    
    printf("\nDisplaying the tree...\n");
    display_tree(root);

return 0;
}
