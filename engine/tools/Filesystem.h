#ifndef LAMBDA_FILESYSTEM_H
#define LAMBDA_FILESYSTEM_H

/* I feel there is no point in putting this function in an lFilesystem class 
    because it doesn't need members and it would just be static anyways, so it makes the most
    sense to me to just put it in a namespace for organization*/

namespace Lambda {
    namespace Filesystem {

        std::string ReadFile(const char* filename);
    }
}

#endif