#include "helper.h"

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

std::string trim(std::string toTrim) {
  size_t trimPos = toTrim.find_first_not_of(" \t");
  toTrim.erase(0, trimPos);
  trimPos = toTrim.find_last_not_of(" \t");
  if (std::string::npos != trimPos) {
    toTrim.erase(trimPos + 1);
  }
  return toTrim;
}

std::vector<std::string> splitlines(std::string output) {
  std::vector<std::string> commandOutput;
  std::stringstream ss(output);
  std::string line;
  while (std::getline(ss, line, '\n')) {
    commandOutput.emplace_back(line);
  }
  return commandOutput;
}

// write vector of video tags to an output stream
void write_tags(ostream &out, const vector<string> &v) {
	typedef vector<string>::size_type size_type;
	const size_type n = v.size();
	out << "[";
	for (size_type i = 0; i < n; ++i){
		if (i < n-1)
        cout << v[i] << " ";
    else 
        cout << v[i]; // leave out space if its the last element
  }
	out << "]";
}

// plays message for when video is playing/stopping
string playing_message(string state, string title){
  
  if (state == "playing")
    return "Playing video: " + title;
  else if (state == "stop")
    return "Stopping video: " + title;
  else if (state == "paused")
    return "Pausing video: " + title;
  else if (state == "continue")
    return "Continuing video: " + title;
  else
    throw domain_error ("invalid video state");
  
}
