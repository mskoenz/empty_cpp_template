/** ****************************************************************************
 * \file
 * \brief      
 * \author
 * Year      | Name
 * --------: | :------------
 * 2016      | Mario S. Koenz
 * \copyright  todo
 ******************************************************************************/

#ifndef _A_HPP_GUARD
#define _A_HPP_GUARD

#include "B.hpp"

template<typename T>
class A {
public:
    void foo(B<T> const & b) const;
    static int n;
private:
};

#include "A.ipp"

#endif //_A_HPP_GUARD
