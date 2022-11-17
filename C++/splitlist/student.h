void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    auto it = begin();
    size_t i = 0;
    for (; i < mSize - mSize/2 ; i++ , it++){}

    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    it.ptr->prev->next = list1.mHeader;
    list1.mHeader->prev  = it.ptr->prev->next;
    list1.mSize += i ;

    list2.mHeader->prev->next = it.ptr;
    mHeader->prev->next = list2.mHeader;
    it.ptr->prev = list2.mHeader->prev;
    list2.mHeader->prev = mHeader->prev;
    list2.mSize += mSize-i ; 

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
}
