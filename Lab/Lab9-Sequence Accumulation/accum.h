#include <vector>
#include <iostream>

using namespace std;

template <typename T>//declares a template


T accum(vector<T> v) {//template in a vector using stl
	T sum = T();

	for (long unsigned int i = 0; i < v.size(); ++i) {
		sum += v[i];
	}
	return sum;
};


