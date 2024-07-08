#include "Logging.h"

namespace Lambda {
    
    //Add colors
    
    void Logger::IntlMSG(const char* msg) {
        std::cout << "ENGINE: " << msg << std::endl;
    }

    void Logger::IntlERROR(const char* msg) {
        std::cout << "ENGINE: " << msg << std::endl;
    }

    void Logger::IntlWARN(const char* msg) {
        std::cout << "ENGINE: " << msg << std::endl;
    }
    
    void Logger::MSG(const char* msg) {
        std::cout << "APPLICATION: " << msg << std::endl;
    }

    void Logger::ERROR(const char* msg) {
        std::cout << "APPLICATION: " << msg << std::endl;
    }

    void Logger::WARN(const char* msg) {
        std::cout << "APPLICATION: " << msg << std::endl;
    }

}