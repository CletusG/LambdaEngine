#ifndef LAMBDA_GLOBJECT_H
#define LAMBDA_GLOBJECT_H

namespace Lambda {

    class lglObject {
    public:
        unsigned int GetID() const { return m_ID; }
    protected:
        unsigned int m_ID;
    };
}

#endif