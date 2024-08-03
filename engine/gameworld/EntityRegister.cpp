#include "pch.h"
#include "EntityRegister.h"

namespace Lambda {
    
    // lEntity
    lEntity::lEntity(unsigned int size, const char* name)
        : m_Name(name), m_ID(size) {}
    lEntity::lEntity(unsigned int size) {}

    // Temporary for debugging
    lEntity::~lEntity() {
        Logger::IntlWarn("Entity Destroyed");
    }
    lEntity::lEntity(const lEntity &entity) {
        Logger::IntlWarn("Entity Copied");
    }


    // Register
    lEntityRegister::~lEntityRegister() {
        m_EntityRegister.clear(); // Memory deallocated by smart pointers
        Logger::IntlWarn("Deleted Register");
    }

    void lEntityRegister::NewEntity(const char *name) {
        auto l_id = m_EntityRegister.size();
        m_EntityRegister.push_back(std::make_unique<lEntity>(l_id, name));
    }

    void lEntityRegister::DeleteEntity(unsigned int id) {
        
        /*  Use < when checking size because the first valid ID is 0, 
            so m_EntityRegister.size() will always return the last entity ID + 1
            I believe I could use <= if the first valid ID was 1 */
        
        // Make sure ID is valid
        if (id < m_EntityRegister.size()) {
            // Delete the unique_pointer, which will automatically deallocate the Entity 
            m_EntityRegister.erase(m_EntityRegister.begin() + id);
        }
        else { Logger::IntlError("Invalid Entity"); }

        // Decrement each Entity's ID that comes after the deleted entity
        // in the register by 1 so there are no 'holes' in the entity ids 
        for (size_t it = id; it < m_EntityRegister.size(); ++it) {
            m_EntityRegister[it]->m_ID--;
        }

    }    

}