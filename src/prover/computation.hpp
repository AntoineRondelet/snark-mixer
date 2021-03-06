#ifndef __ZKSNARK_COMPUTATION_HPP__
#define __ZKSNARK_COMPUTATION_HPP__

#include <fstream>
#include <iostream>
#include <cassert>
#include <iomanip>

//#include <libsnark_helpers/libsnark_helpers.hpp>

template<typename FieldT> void generate_proof(libsnark::protoboard<FieldT> pb);
template<typename FieldT> void run_trusted_setup(libsnark::protoboard<FieldT> pb);

#include "computation.tcc"

#endif
