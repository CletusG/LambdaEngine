#include "Logger.h"
#include "Colors.cpp"

namespace Lambda {
  
   void Logger::IntlMSG(const char* msg) {
    std::cout << "ENGINE: " << msg << std::endl;
   }

   void Logger::IntlERROR(const char* msg) {
    std::stringstream oss;
    oss << "Engine: " << msg;
    std::cout << UNXColors::RED(oss.str()) << std::endl;
   }

   void Logger::IntlWARN(const char* msg) {
    std::stringstream oss;
    oss << "Engine: " << msg;
    std::cout << UNXColors::YELLOW(oss.str()) << std::endl; 
   }
  
   void Logger::MSG(const char* msg) {
    std::cout << "APPLICATION: " << msg << std::endl;
   }

   void Logger::ERROR(const char* msg) { 
    std::stringstream oss;
    oss << "APPLICATION: " << msg;
    std::cout << UNXColors::RED(oss.str()) << std::endl;
   }

   void Logger::WARN(const char* msg) { 
    std::stringstream oss;
    oss << "APPLICATION: " << msg;
    std::cout << UNXColors::YELLOW(oss.str()) << std::endl;
   }

}