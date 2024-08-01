#ifndef LAMBDA_LOGGER_H
#define LAMBDA_LOGGER_H

#include "platform/linux/UNXColors.h"

// I know this logger is completely broken but it works well enough for now so 
// I'm going to fix it later

/* Logger is a very simple debug tool for 
   printing values to the lambda debug console*/

namespace Lambda {
    namespace Logger {        
        
        // Internal (Engine) logging functions
        #ifndef LAMBDA_APP
            // Message 
            template <typename T>
            void IntlMessage(T msg) {
                std::cout << "Engine: " << msg << '\n';
            }
            template <typename T, typename... Args>
            void IntlMessage(T t, Args... args) {
                IntlMessage(args...);
            }   
            // Warn
            template <typename T>
            void IntlWarn(T msg) {
                std::ostringstream oss;
                oss << "Engine: " << msg;
                std::cout << UNXColorString::YELLOW(oss.str()) << '\n'; 
            }
            template <typename T, typename... Args>
            void IntlWarn(T t, Args... args) {
                IntlWarn(args...);
            }   
            // Error
            template <typename T>
            void IntlError(T msg) {
                std::ostringstream oss;
                oss << "Engine: " << msg;
                std::cout << UNXColorString::RED(oss.str()) << '\n'; 
            }
            template <typename T, typename... Args>
            void IntlError(T t, Args... args) {
                IntlError(args...);
            }        
        
        // Client (Application) logging functions
        #else
            // Message
            template <typename T>
            void Message(T msg) {
                std::cout << "Application: " << msg << '\n';
            }
            template <typename T, typename... Args>
            void Message(T t, Args... args) {
                Message(args...);
            }
            
            // Warn
            template <typename T>
            void Warn(T msg) {
                std::ostringstream oss;
                oss << "Application: " << msg;
                std::cout << UNXColorString::YELLOW(oss.str()) << '\n'; 
            }
            template <typename T, typename... Args>
            void Warn(T t, Args... args) {
                Warn(args...);
            }

            // Error
            template <typename T>
            void Error(T msg) {
                std::ostringstream oss;
                oss << "Application: " << msg;
                std::cout << UNXColorString::RED(oss.str()) << '\n'; 
            }
            template <typename T, typename... Args>
            void Error(T t, Args... args) {
                Error(args...);
            } 
            
        #endif

    }
}

#endif