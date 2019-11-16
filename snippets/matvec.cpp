for(ptrdiff_t i = 0; i < A.extent(0); ++i) {
  for(ptrdiff_t j = 0; j < A.extent(1); ++j) {
    y(i) += A(i,j) * x(j);
  }
}
