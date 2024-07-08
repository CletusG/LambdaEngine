// I need to make a precompiled header for this
#include <iostream>

/*Logger will be a fairly simple static class that
just outputs what I enter but with more detailed notation
and colors matching warning severity. I should add definitions
to disable internal logs in client applications*/

namespace Lambda {

   class Logger {
   public:
       Logger() = delete;
       ~Logger() {};

       static void IntlMSG(const char* msg);
       static void IntlERROR(const char* msg);
       static void IntlWARN(const char* msg);
      
       static void MSG(const char* msg);
       static void ERROR(const char* msg);
       static void WARN(const char* msg);
   };
}
