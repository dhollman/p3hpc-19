for(ptrdiff_t i = 0; i < s.extent(0); ++i) {
  for(ptrdiff_t j = 0; j < s.extent(1); ++j) {
    for(ptrdiff_t k = 0; k < s.extent(2); ++k) {
      o(i,j,k) += s(i,j,k);
    }
  }
}
