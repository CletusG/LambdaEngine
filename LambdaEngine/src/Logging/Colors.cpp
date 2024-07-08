#include "Colors.h"

namespace Lambda {
    
    namespace UNXColors {
       
        static std::string GREEN(std::string msg) { 
            std::ostringstream oss; 
            oss << "\033[32m" << msg << "\033[0m"; 
            return oss.str(); 
        }

        static std::string RED(std::string msg) { 
            std::ostringstream oss; 
            oss << "\033[31m" << msg << "\033[0m"; 
            return oss.str(); 
        } 
        
        static std::string YELLOW(std::string msg) { 
            std::ostringstream oss; 
            oss << "\033[33m" << msg << "\033[0m"; 
            return oss.str();
         }
    }
}
