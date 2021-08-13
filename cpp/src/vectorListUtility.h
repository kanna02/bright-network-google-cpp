#ifndef GUARD_vectorListUtility_h
#define GUARD_vectorListUtility_h
#include <vector>
#include <list>
#include <iostream>
#include <string>

// read numbers from an input stream
// and store them in a vector
void read_vector(std::istream &in, std::vector<double> &v);

// write vector to an output stream
void write_tags(std::ostream &out, const std::vector<std::string> &v);

// write vector to an output stream
void write_vector_int(std::ostream &out, const std::vector<int> &v);

// read numbers from an input stream
// and store them in a list
void read_list(std::istream &in, std::list<double> &l);

// write list to an output stream
void write_list(std::ostream &out, const std::list<double> &l);


#endif