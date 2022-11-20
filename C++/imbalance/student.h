// Your code here
int get_height(node *a,KeyT &Ans,int &max_imb){
    if (a == NULL){
        return -1;
    }
    int hL = get_height(a->left,Ans,max_imb);
    int hR = get_height(a->right,Ans,max_imb);
    int imb = std::abs(hL-hR);
    int h = 1 + (hL > hR ? hL : hR);
    if (imb > max_imb){
        max_imb = imb;
        Ans = a->data.first;
    }
    return h;
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    int max_imb = 0;
    KeyT Ans = mRoot->data.first;
    get_height(mRoot,Ans,max_imb);
    return Ans;
}
