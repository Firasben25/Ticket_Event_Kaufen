#include "fileio.h"
#include <iostream>
#include <fstream>

json readDataFromFile(const std::string& filename) {
    std::ifstream file(filename);
    json data;
    if (file.is_open()) {
        file >> data;
        file.close();
    } else {
        std::cerr << "Fehler beim oeffnen der Datei!" << std::endl;
    }
    return data;
}

void writeDataToFile(const std::string& filename, const json& data) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << data.dump(4);
        file.close();
    } else {
        std::cerr << "Fehler beim Schreiben in die Datei!" << std::endl;
    }
}
