#include "pch.h"
#include "UNXColors.h"

namespace Lambda {

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