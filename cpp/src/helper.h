#pragma once

#include <string>
#include <vector>
#include <iostream>

std::string trim(std::string s);

std::vector<std::string> splitlines(std::string output);

// write vector of video tags to an output stream
void write_tags(std::ostream &out, const std::vector<std::string> &v);

// displays message based on videos state (playing, paused, continuing, stopped)
std::string playing_message(std::string state, std::string title);
