#pragma once

/*This color system only works for most unix terminals,
this isn't meant to be final but a quick system that I can use developing further*/

//Remove
#include <iostream>
#include <string>
#include <sstream>

namespace Lambda {
    namespace UNXColors {
        static std::string GREEN(std::string msg);
        static std::string RED(std::string msg);
        static std::string YELLOW(std::string msg);
    }
}