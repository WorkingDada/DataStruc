<<<<<<< HEAD
void splitList(list<T>& list1, list<T>& list2) {
    auto it = begin();
    for (size_t i = 0 ; i < mSize - mSize/2 ; i++ , it++){ }

}
=======
void splitList(list<T>& list1, list<T>& list2) {
    auto it = begin();
    int i = 0;
    for (; i < mSize - mSize/2 ;i++){
        it++;
    }
    
    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    list1.mHeader->prev = it.ptr->prev;
    it.ptr->prev->next = list1.mHeader;
    list1.mSize += i;

    it.ptr->prev = list2.mHeader->prev;
    list2.mHeader->prev->next = it.ptr;
    list2.mHeader->prev = mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    list2.mSize += mSize-i;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
}
>>>>>>> 0f1e1999fa32c698838dddf7dfa32b9aecb92a9e
