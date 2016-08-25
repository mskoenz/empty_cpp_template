/** ****************************************************************************
 * \file
 * \brief      
 * \author
 * Year      | Name
 * --------: | :------------
 * 2016      | Mario S. Koenz
 * \copyright  todo
 ******************************************************************************/

#ifndef _EXPL_INST_HPP_GUARD
#define _EXPL_INST_HPP_GUARD

#include "A.hpp"
#include "B.hpp"

// we need to disable extern for the instantiation 
// (this "ugly" trick reduces error prone code duplication)
#ifdef EXPLICIT_INSTANTIATION
    #define extern
#endif

extern template class A<int>;
extern template class B<int>;

#ifdef EXPLICIT_INSTANTIATION
    #undef extern
#endif

#endif //_EXPL_INST_HPP_GUARD
