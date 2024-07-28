#ifndef LAMBDA_UNXCOLORS_H
#define LAMBDA_UNXCOLORS_H

#include <string>

namespace Lambda {

    #ifdef LAMBDA_PLATFORM_LINUX
        namespace UNXColorString {
            std::string GREEN(const std::string& msg);
            std::string RED(const std::string& msg);
            std::string YELLOW(const std::string& msg);
        }
    #endif
}

#endif