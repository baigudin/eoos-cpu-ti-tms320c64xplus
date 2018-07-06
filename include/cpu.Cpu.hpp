/** 
 * The operating system target CPU class.
 * 
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2018, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#ifndef CPU_CPU_HPP_
#define CPU_CPU_HPP_

#include "cpu.Object.hpp"
#include "api.Cpu.hpp"
#include "Configuration.hpp"

namespace global
{
    namespace cpu
    {
        class Cpu : public cpu::Object, public api::Cpu
        {
            typedef cpu::Cpu Self;    
            typedef cpu::Object Parent;    
        
        public:
        
            /** 
             * Constructor.
             *
             * @param config a operating system configuration.
             */    
            Cpu(Configuration config);
            
            /** 
             * Destructor.
             */
            virtual ~Cpu();
            
            /**
             * Tests if this object has been constructed.
             *
             * @return true if object has been constructed successfully.
             */    
            virtual bool isConstructed() const;
            
            /**
             * Returns a name of a target Central Processing Unit. 
             *
             * @return a CPU name, or NULL if an error has been occurred.
             */      
            virtual const char* getName() const;                
            
        private:
        
            /**
             * Constructs this object.
             *
             * @return true if object has been constructed successfully.     
             */    
            bool construct();
            
            /**
             * Copy constructor.
             *
             * @param obj a reference to source object.
             */
            Cpu(const Cpu& obj);
        
            /**
             * Assignment operator.
             *
             * @param obj a reference to source object.
             * @return reference to this object.     
             */
            Cpu& operator =(const Cpu& obj);           
    
            /**    
             * Configuration of the operating system.
             */
            Configuration config_;
            
        };
    }
}
#endif // CPU_CPU_HPP_
