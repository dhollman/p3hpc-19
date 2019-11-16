for(ptrdiff_t i = d; i < s.extent(0)-d; ++i) {
  for(ptrdiff_t j = d; j < s.extent(1)-d; ++j) {
    for(ptrdiff_t k = d; k < s.extent(2)-d; ++k) {
      value_type sum_local = 0;
      for(ptrdiff_t di = i-d; di < i+d+1; ++di) {
        for(ptrdiff_t dj = j-d; dj < j+d+1; ++dj) {
          for(ptrdiff_t dk = k-d; dk < k+d+1; ++dk) {
            sum_local += s(di, dj, dk);
          }
        }
      }
      o(i,j,k) = sum_local;
    }
  }
}
