#ifndef LAMBDA_ENTITYREGISTER_H
#define LAMBDA_ENTITYREGISTER_H

#include <string>
#include <memory>

namespace Lambda {
    
     struct lEntity {
        lEntity(unsigned int size, const char* name);
        lEntity(unsigned int size);
        ~lEntity();
        lEntity (const lEntity &entity) = delete;

        unsigned int m_ID;
        std::string m_Name = "Entity";
    };

    class lEntityRegister {
    public:
        lEntityRegister() = default;
        ~lEntityRegister();

        // Copy constructor will be necessary when copying scenes,
        // I need to make sure entities inside the register are actually copied,
        // as they are just pointers
        //lEntityRegister(const lEntityRegister &reg);
        
        std::vector<std::unique_ptr<lEntity>>& Get() { return m_EntityRegister; }

        void NewEntity(const char* name);
        void DeleteEntity(unsigned int id);
    private:
        std::vector<std::unique_ptr<lEntity>> m_EntityRegister;
    };
}

#endif