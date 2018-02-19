/** 
 * The operating system target CPU memory allocator.
 * 
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2016-2018, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef CPU_ALLOCATOR_HPP_
#define CPU_ALLOCATOR_HPP_

#include "api.Constant.hpp"

namespace global
{
    namespace cpu
    {
        class Allocator : public api::Constant
        {
        
        public:
        
            /**
            * Allocates memory.
            *
            * @param size number of bytes to allocate.
            * @return allocated memory address or a null pointer.
            */    
            static void* allocate(size_t size);
        
            /**
            * Frees an allocated memory.
            *
            * @param ptr address of allocated memory block or a null pointer.
            */      
            static void free(void* ptr);
    
        };
    }
}
#endif // CPU_ALLOCATOR_HPP_
