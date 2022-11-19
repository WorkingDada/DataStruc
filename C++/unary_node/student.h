#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  //you may write additional code here
  if (ptr->left != NULL && ptr->right != NULL){
    process(ptr->left); process(ptr->right);
    return 0;
  }
  if (ptr->left == NULL && ptr->right != NULL){
    process(ptr->right);
    return 1;
  }
  if (ptr->left != NULL && ptr->right == NULL){
    process(ptr->left);
    return 1;
  }
  return 0;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  //write your code here
  if (mRoot == NULL){
    return 0;
  }
  size_t c = 0 ;
  c += process(mRoot);
  return c;
}

#endif
