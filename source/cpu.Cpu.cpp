/** 
 * The operating system target CPU class.
 * 
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2018, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#include "cpu.Cpu.hpp"

namespace global
{
    namespace cpu
    {
        /** 
         * Constructor.
         *
         * @param config a operating system configuration.
         */    
        Cpu::Cpu(Configuration const config) : Parent(),
            config_ (config){
            bool const isConstructed = construct();
            setConstructed( isConstructed );
        }
        
        /** 
         * Destructor.
         */
        Cpu::~Cpu()
        {
        }
        
        /**
         * Tests if this object has been constructed.
         *
         * @return true if object has been constructed successfully.
         */    
        bool Cpu::isConstructed() const
        {
            return Parent::isConstructed();
        }
        
        /**
         * Returns a name of a target Central Processing Unit. 
         *
         * @return a CPU name, or NULL if an error has been occurred.
         */      
        const char* Cpu::getName() const
        {
            return "TI TMS320C64x+ DSP";
        }
        
        /**
         * Constructs this object.
         *
         * @return true if object has been constructed successfully.     
         */    
        bool Cpu::construct()
        {
            bool res = Self::isConstructed();
            while(res == true)
            {
                if( config_.cpuClock == 0 || config_.sourceClock == 0 )
                {
                    res = false;
                    continue;
                }            
                // The construction completed successfully
                break;
            }
            return res;  
        }
    }
}
