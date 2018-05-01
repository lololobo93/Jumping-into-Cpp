#include <iostream>
#include <ctime>
#include <cstdlib>
#include "cap21_3link.h"

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

node* find_min (node* p_tree) {
  if (p_tree == NULL) {
    return NULL;
  }
  if (p_tree->p_left == NULL) {
    return p_tree;
  }
  return find_min(p_tree->p_left);
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

bool verify_sorted (node* p_tree) {
  node* apoyo1 = find_min(p_tree->p_right);
  if (p_tree->key_value > apoyo1->key_value) {
    return false;
  }
  node* apoyo2 = find_max(p_tree->p_left);
  if (p_tree->key_value < apoyo2->key_value) {
    return false;
  }
  return true;
}

int count_tree (node* p_tree) {
  int count = 0;
  if (p_tree == NULL) {
    count += 0;
  } else {
    count++;
    count += count_tree(p_tree->p_left);
    count += count_tree(p_tree->p_right);
  }
  return count;
}

void proof_balan(node* p_tree) {
  int count_left = count_tree(p_tree->p_left);
  int count_right = count_tree(p_tree->p_right);
  if (count_left == count_right) {
    std::cout << "Si esta balanceada" << '\n';
  } else {
    std::cout << "No esta balanceada" << '\n';
  }
}
