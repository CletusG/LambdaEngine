#include "pch.h"
#include "Filesystem.h"

namespace Lambda {

    std::string Filesystem::ReadFile(const char* filename) {
        std::ostringstream l_text;
        std::ifstream l_file(filename);
        
        l_text << l_file.rdbuf();
        l_file.close();

        return l_text.str();
    }
    
}