#ifndef LAMBDA_LOGGER_H
#define LAMBDA_LOGGER_H

/*Logger will be a fairly simple group of functions that
just outputs what I enter but with more detailed notation
and colors matching warning severity. I should add definitions
to disable internal logs in client applications*/

//Need to leave this for now
#include <string>

namespace Lambda {
    namespace Logger {        

#ifndef LAMBDA_APP
        void IntlMSG(const char* msg);
        void IntlERROR(const char* msg);
        void IntlWARN(const char* msg);
#endif
        void MSG(const char* msg);
        void ERROR(const char* msg);
        void WARN(const char* msg);
    }

#ifdef LAMBDA_PLATFORM_LINUX
    namespace UNXColorString {
        std::string GREEN(const std::string& msg);
        std::string RED(const std::string& msg);
        std::string YELLOW(const std::string& msg);
    }
}
#endif

#endif