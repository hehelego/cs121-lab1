#include "adjmat.hpp"
#include "common.hpp"
#include <cstdio>

i32 main(i32 argc, Cstr *argv) {
  assert(argc == 3);
  auto matrix = adjacent_matrix::parse_matrix_market(argv[1]);
  u32 source = 0;
  sscanf(argv[2], "%u", &source);

  return 0;
}