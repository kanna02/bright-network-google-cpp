#include "vectorListUtility.h"
#include <vector>
#include <list>
#include <iostream>

using namespace std;

// read numbers from an input stream
// and store them in a vector
void read_vector(istream &in, vector<double> &v) {
	cout << "enter some numbers: " << '\n';
	double x;
	while (in >> x)
		v.push_back(x);
}

// write vector to an output stream
void write_tags(ostream &out, const vector<string> &v) {
	typedef vector<string>::size_type size_type;
	const size_type n = v.size();
	out << "[";
	for (size_type i = 0; i < n; ++i)
		out << ' ' << v[i];
	out << "]";
}

// write vector to an output stream
void write_vector_int(ostream &out, const vector<int> &v){
	typedef vector<int>::size_type size_type;
	const size_type n = v.size();
	out << "vector:";
	for (size_type i = 0; i < n; ++i)
		out << ' ' << v[i];
	out << '\n';

}

// read numbers from an input stream
// and store them in a list
void read_list(istream &in, list<double> &l) {
	cout << "enter some numbers: " << '\n';
	double x;
	while (in >> x)
		l.push_back(x);
}

// write list to an output stream
void write_list(ostream &out, const list<double> &l) {
	out << "list:";
	for (auto const &e : l)
		out << ' ' << e ;
	out << '\n' << '\n';
}