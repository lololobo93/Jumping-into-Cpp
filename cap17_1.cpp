#include <iostream>
#include <ctime>
#include <cstdlib>

struct node{
  int key_value;
  node* p_left;
  node* p_right;
};

// Insertar nueva llave.
node* insert(node* p_tree, int key) {
  if (p_tree == NULL) {
    node* p_new_tree = new node;
    p_new_tree->p_left = NULL;
    p_new_tree->p_right = NULL;
    p_new_tree->key_value = key;
    return p_new_tree;
  }
  if (key < p_tree->key_value) {
    p_tree->p_left = insert(p_tree->p_left, key);
  }
  else {
    p_tree->p_right = insert(p_tree->p_right, key);
  }
  return p_tree;
}

// Buscar en el archivero
node* search (node* p_tree, int key) {
  if (p_tree == NULL) {
    return NULL;
  }
  else if (key == p_tree->key_value) {
    return p_tree;
  }
  else if (key < p_tree->key_value) {
    return search(p_tree->p_left, key);
  }
  else {
    return search(p_tree->p_right, key);
  }
}

// Destruir archivero
void destroy (node *p_tree) {
  if (p_tree != NULL) {
    destroy(p_tree->p_left);
    destroy(p_tree->p_right);
    delete p_tree;
  }
}

node* find_max (node* p_tree) {
  if (p_tree == NULL) {
    return NULL;
  }
  if (p_tree->p_right == NULL) {
    return p_tree;
  }
  return find_max(p_tree->p_right);
}

node* remove_max_node (node* p_tree, node* p_max_node) {
  if (p_tree == NULL) {
    return NULL;
  }
  if (p_tree == p_max_node) {
    return p_max_node->p_left;
  }
  p_tree->p_right = remove_max_node(p_tree->p_right, p_max_node);
  return p_tree;
}

node* remove (node* p_tree, int key) {
  if (p_tree == NULL) {
    return NULL;
  }
  if (p_tree->key_value == key) {
    if (p_tree->p_left == NULL) {
      node* p_right_subtree = p_tree->p_right;
      delete p_tree;
      return p_right_subtree;
    }
    if (p_tree->p_right == NULL) {
      node* p_left_subtree = p_tree->p_left;
      delete p_tree;
      return p_left_subtree;
    }
    node* p_max_node = find_max(p_tree->p_left);
    p_max_node->p_left = remove_max_node(p_tree->p_left, p_max_node);
    p_max_node->p_right = p_tree->p_right;
    delete p_tree;
    return p_max_node;
  } else if (key < p_tree->key_value) {
    p_tree->p_left = remove(p_tree->p_left, key);
  } else {
    p_tree->p_right = remove(p_tree->p_right, key);
  }
  return p_tree;
}

void print_inverse (node* p_tree) {
  if (p_tree != NULL) {
    node* apoyo = find_max(p_tree);
    std::cout << apoyo->key_value << '-';
    print_inverse(remove_max_node(p_tree, apoyo));
  }
}

void print_sorted (node* p_tree) {
  if (p_tree != NULL) {
    node* apoyo = find_max(p_tree);
    print_sorted(remove_max_node(p_tree, apoyo));
    std::cout << apoyo->key_value << '-';
  }
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int key, i = 0;
  node* binary = new node;
  while (i < 10) {
    key = rand() % 50 + 1;
    if (search(binary, key) == NULL) {
      if (i == 0) {
        binary->key_value = key;
        i++;
        std::cout << key << '-';
      } else {
        insert(binary, key);
        i++;
        std::cout << key << '-';
      }
    }
  }
  // std::cout << '\n';
  // print_inverse(binary);
  std::cout << '\n';
  print_sorted(binary);
  std::cout << '\n';
  return 0;
}
