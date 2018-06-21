/** 
 * Root class of the operating system target CPU class hierarchy.
 * 
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2014-2018, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef CPU_OBJECT_HPP_
#define CPU_OBJECT_HPP_

#include "Object.hpp"
#include "cpu.Allocator.hpp"

namespace global
{
    namespace cpu
    {
        class Object : public ::global::Object<Allocator>
        {
            typedef ::global::Object<Allocator> Parent;        
        
        public:
        
            /** 
             * Constructor.
             */  
            Object();
    
            /** 
             * Destructor.
             */    
            virtual ~Object();       
        
        };
    }
}
#endif // CPU_OBJECT_HPP_
