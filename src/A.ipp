/** ****************************************************************************
 * \file
 * \brief      
 * \author
 * Year      | Name
 * --------: | :------------
 * 2016      | Mario S. Koenz
 * \copyright  todo
 ******************************************************************************/

// implementation dependencies
#include <iostream>

template<typename T>
void A<T>::foo(B<T> const & b) const {
    std::cout << "A<T>.foo(B<T>)" << std::endl;
    b.print();
    std::cout << ++n << std::endl;
}

// we can have multiple definitions of static template data under (C++03 standart: §3.2)
template<typename T>
int A<T>::n = 2;
