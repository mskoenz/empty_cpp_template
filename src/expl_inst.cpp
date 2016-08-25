//this file does not need modification

// we don't have the multiple definition problem if we remove the expl_inst.hpp 
// from the main, even though we still link with expl_inst.cpp, since there
// is the "One Definition Rule" (C++03 standart: §3.2)

#define EXPLICIT_INSTANTIATION

#include "expl_inst.hpp"
