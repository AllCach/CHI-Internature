#pragma once
#include <iostream>
template <class T, int N>
class List {
private:
	T* arr = new T[N];
	size_t arr_size = 0;
	int max_size = N;
public:
	List() {

	}
	const T& operator [] (int index) const {
		return arr[index];
	}
	void operator += (const T& value) {
		if (arr_size < max_size) arr[arr_size] = value;
		arr_size++;
	}

	~List() {
		delete[] arr;
	}
	size_t size() {
		return arr_size;
	}

};