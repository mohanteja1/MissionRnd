void inorder(struct node *,int *);
void preorder(struct node *, int *);
void postorder(struct node *, int *);
int * BSTRighttoLeftRows(struct node *);
struct node * convert_array_to_bst(int *arr, int len);
void fix_bst(struct node *root);
int get_closest_leaf_distance(struct node *, struct node *);
int get_height(struct node *);
int get_right_subtree_sum(struct node *root);
int get_left_subtree_sum(struct node *root);


struct listNode * enqueue(struct listNode *tail, struct node *bstNode);
struct listNode * dequeu(struct listNode *head);
int max(int a, int b);