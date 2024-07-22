#ifndef LAMBDA_LOGGER_H
#define LAMBDA_LOGGER_H

/*Logger will eventually turn into a full console app*/

#include <string>

namespace Lambda {
    namespace Logger {        

#ifndef LAMBDA_APP
        void IntlMSG(const char* msg);
        void IntlERROR(const char* msg);
        void IntlWARN(const char* msg);

        void IntlMSG(std::string& msg);
        void IntlError(std::string& msg);
        void IntlWARN(std::string& msg);
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