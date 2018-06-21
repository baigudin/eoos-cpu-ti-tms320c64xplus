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
        Cpu::Cpu(const Configuration config) : Parent(),
            config_ (config){
            const bool isConstructed = construct();
            setConstruct( isConstructed );
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
            return getConstruct();
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
            if( not Self::isConstructed() )
            {
                return false;
            }
            return true;
        }
    }
}
