/** ****************************************************************************
 * \file
 * \brief      
 * \author
 * Year      | Name
 * --------: | :------------
 * 2016      | Mario S. Koenz
 * \copyright  todo
 ******************************************************************************/

#include <iostream>
#include <A.hpp>
// switch this header on/off to see the difference in compiletime
#include <expl_inst.hpp>

int main() {
    
    A<int> a;
    B<int> b;
    
    a.foo(b);
    
    return 0;
}
