#ifndef FILEIO_H
#define FILEIO_H

#include <string>
//#include <nlohmann/json.hpp>
#include "json.hpp"

using json = nlohmann::json;

json readDataFromFile(const std::string& filename);
void writeDataToFile(const std::string& filename, const json& data);

#endif
