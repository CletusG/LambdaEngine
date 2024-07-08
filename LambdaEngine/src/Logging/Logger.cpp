#include "Logger.h"

namespace Lambda {
  
  //Logging functions
   void Logger::IntlMSG(const char* msg) {
      std::cout << "ENGINE: " << msg << std::endl; }

   void Logger::IntlERROR(const char* msg) {
      std::ostringstream oss;
      oss << "Engine: " << msg;
      std::cout << UNXColorString::RED(oss.str()) << std::endl; }

   void Logger::IntlWARN(const char* msg) {
      std::ostringstream oss;
      oss << "Engine: " << msg;
      std::cout << UNXColorString::YELLOW(oss.str()) << std::endl; }
  
   void Logger::MSG(const char* msg) {
      std::cout << "APPLICATION: " << msg << std::endl; }

   void Logger::ERROR(const char* msg) { 
      std::ostringstream oss;
      oss << "APPLICATION: " << msg;
      std::cout << UNXColorString::RED(oss.str()) << std::endl; }

   void Logger::WARN(const char* msg) { 
      std::ostringstream oss;
      oss << "APPLICATION: " << msg;
      std::cout << UNXColorString::YELLOW(oss.str()) << std::endl; }

   //Colors
   std::string UNXColorString::GREEN(std::string msg) { 
      std::ostringstream oss; 
      oss << "\033[32m" << msg << "\033[0m"; 
      return oss.str(); }

   std::string UNXColorString::RED(std::string msg) { 
      std::ostringstream oss; 
      oss << "\033[31m" << msg << "\033[0m"; 
      return oss.str(); } 
        
   std::string UNXColorString::YELLOW(std::string msg) { 
      std::ostringstream oss; 
      oss << "\033[33m" << msg << "\033[0m"; 
      return oss.str(); }

}