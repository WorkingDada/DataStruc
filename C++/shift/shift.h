void shift(int k) {
	auto it = begin();
	if ( k > 0 ){
		k %= mSize;
	} else {
		k %= mSize;
		k += mSize;
	}
	if ( k == 0 ){
		return;
	} else {
		for (size_t i = 0 ; i < k ; i++){
			it++;
		}
	}
	
}