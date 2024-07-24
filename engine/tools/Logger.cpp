#include "pch.h"
#include "Logger.h"
//#include "Logger.h" - Already in precompiled header

namespace Lambda {
  
  // Logging functions
   void Logger::IntlMSG(const char* msg) {
      std::cout << "ENGINE: " << msg << '\n'; 
   }

   void Logger::IntlMSG(std::string& msg) {
      std::cout << "ENGINE: " << msg << '\n'; 
   }

   void Logger::IntlError(std::string &msg) {
      std::ostringstream oss;
      oss << "Engine: " << msg;
      std::cout << UNXColorString::RED(oss.str()) << '\n'; 
   }

   void Logger::IntlERROR(const char *msg) {
       std::ostringstream oss;
       oss << "Engine: " << msg;
       std::cout << UNXColorString::RED(oss.str()) << '\n';
   }

   void Logger::IntlWARN(const char* msg) {
      std::ostringstream oss;
      oss << "Engine: " << msg;
      std::cout << UNXColorString::YELLOW(oss.str()) << '\n'; 
   }

   void Logger::IntlWARN(std::string& msg) {
      std::ostringstream oss;
      oss << "Engine: " << msg;
      std::cout << UNXColorString::YELLOW(oss.str()) << '\n'; 
   }
  
   void Logger::MSG(const char* msg) {
      std::cout << "APPLICATION: " << msg << '\n'; 
   }

   void Logger::ERROR(const char* msg) { 
      std::ostringstream oss;
      oss << "APPLICATION: " << msg;
      std::cout << UNXColorString::RED(oss.str()) << '\n'; 
   }

   void Logger::WARN(const char* msg) { 
      std::ostringstream oss;
      oss << "APPLICATION: " << msg;
      std::cout << UNXColorString::YELLOW(oss.str()) << '\n'; 
   }

   // Colors
   std::string UNXColorString::GREEN(const std::string& msg) { 
      std::ostringstream oss; 
      oss << "\033[32m" << msg << "\033[0m"; 
      return oss.str(); 
   }

   std::string UNXColorString::RED(const std::string& msg) { 
      std::ostringstream oss; 
      oss << "\033[31m" << msg << "\033[0m"; 
      return oss.str(); 
   } 
        
   std::string UNXColorString::YELLOW(const std::string& msg) { 
      std::ostringstream oss; 
      oss << "\033[33m" << msg << "\033[0m"; 
      return oss.str(); 
   }

}