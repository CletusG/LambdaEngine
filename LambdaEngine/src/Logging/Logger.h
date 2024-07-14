#pragma once

/*Logger will be a fairly simple group of functions that
just outputs what I enter but with more detailed notation
and colors matching warning severity. I should add definitions
to disable internal logs in client applications*/

//Need to leave this for now
#include <string>

namespace Lambda {
    namespace Logger {        
        void IntlMSG(const char* msg);
        void IntlERROR(const char* msg);
        void IntlWARN(const char* msg);
        void MSG(const char* msg);
        void ERROR(const char* msg);
        void WARN(const char* msg);
    }

    namespace UNXColorString {
        std::string GREEN(const std::string& msg);
        std::string RED(const std::string& msg);
        std::string YELLOW(const std::string& msg);
    }
}