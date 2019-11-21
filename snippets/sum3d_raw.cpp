for(ptrdiff_t i = 0; i < x; ++i) {
  for (ptrdiff_t j = 0; j < y; ++j) {
    for (ptrdiff_t k = 0; k < z; ++k) {
      sum += s_ptr[k + j\*z + i\*y\*z];
    }
  }
}
