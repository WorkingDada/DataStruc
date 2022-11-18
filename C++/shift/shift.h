void shift(int k) {
	auto it = begin();
    if (k < 0) {
        k = k % (int)mSize;
        k = (k + (int)mSize) % (int)mSize;
    } else {
        k = k % (int)mSize;
    }
    if (k == 0) {
        return;
    } else {
        for (int i = 0; i < k; ++i)
            ++it;
    }
	node *oldFirst = mHeader->next;
	node *oldLast = mHeader->prev;
	oldFirst->prev = oldLast;
	oldLast->next = oldFirst;
	node *newFirst = it.ptr;
	node *newLast = it.ptr->prev;
	mHeader->next = newFirst;
	it.ptr->prev = mHeader;
	mHeader->prev = newLast;
	newLast->next = mHeader;
}