#pragma once
#include <iostream>
template<class A, class B>

class Pair {

public:
	A key;
	B value;
	Pair() {

	}
	Pair(const A& typeA, const B& typeB) {
		key = typeA;
		value = typeB;
	}
	const A& getKey() const {
		return key;
	}
	const B& getValue() const {
		return value;
	}
};