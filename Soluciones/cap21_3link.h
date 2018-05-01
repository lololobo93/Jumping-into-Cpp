struct node{
  int key_value;
  node* p_left;
  node* p_right;
};

node* insert(node* p_tree, int key);

node* search (node* p_tree, int key);

void destroy (node *p_tree);

node* find_max (node* p_tree);

node* find_min (node* p_tree);

node* remove_max_node (node* p_tree, node* p_max_node);

node* remove (node* p_tree, int key);

bool verify_sorted (node* p_tree);

int count_tree (node* p_tree);

void proof_balan(node* p_tree);
