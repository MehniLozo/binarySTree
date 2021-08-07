
//binary search tree
struct node{    
    int info;
    struct node* left;//left sub tree
    struct node* right; //right sub tree
                
};

struct node* create_tree();
void add_node(struct node ** t,int elem);
void display_leaf(struct node * root );
void display_tree(struct node * root);
