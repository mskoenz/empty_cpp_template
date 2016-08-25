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

// N! is just here to ramp up the compile time
// T is necessary to make it dependent (i.e. the compiler has to wait for T)
template<typename T, uint64_t N>
struct facult {
    static constexpr uint64_t value = N * facult<T, N-1>::value;
};

template<typename T>
struct facult<T, 0> {
    static constexpr uint64_t value = sizeof(T)/sizeof(int);
};

template<typename T>
void B<T>::print() const {
    std::cout << "B.print()" << facult<T, 9990>::value << std::endl;
}
