#include "pch.h"
#include "Filesystem.h"

namespace Lambda {

    std::string Filesystem::ReadFile(const char* filename) {
        std::ostringstream l_sstream;
        std::ifstream l_file(filename);
        l_sstream << l_file.rdbuf();
        std::string l_outputstr = l_sstream.str();
        l_file.close();
        return l_outputstr;
    }
    
}