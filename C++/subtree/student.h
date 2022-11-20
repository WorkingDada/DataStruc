#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  size_t ret = 0;
  if (n->left == NULL && n->right == NULL){
    return 1;
  }
  if (n->left != NULL){
    ret += 1+process(n->left);
  }
  if (n->right != NULL){
    ret += 1+process(n->right);
  }
  if (n->left != NULL && n->right != NULL){
    ret -= 1;
  }
  return ret;
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if (mRoot->left == NULL && mRoot->right == NULL){
    return mRoot->data;
  }
  if (mRoot->left != NULL){
      left.mRoot = mRoot->left;
      left.mSize = process(left.mRoot);
      mRoot->left = NULL;
  }
  if (mRoot->right != NULL){
      right.mRoot = mRoot->right;
      right.mSize = process(right.mRoot);
      mRoot->right = NULL;
  }
  mSize = 1;
  return mRoot->data ;
}

#endif

