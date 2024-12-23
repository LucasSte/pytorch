#include <ATen/native/mlx/Scalar.h>
#include <ATen/Dispatch.h>
#include <iostream>
#include <mlx/allocator.h>

namespace at::native {
Scalar _local_scalar_dense_mlx(const Tensor& self) {
  Scalar r;

  AT_DISPATCH_ALL_TYPES_AND_COMPLEX_AND3(at::ScalarType::Half,
                                         at::ScalarType::Bool,
                                         at::ScalarType::BFloat16,
                                         self.scalar_type(),
                                         "_local_scalar_dense_mps",
                                         [&] {
                                           scalar_t value = *self.data_ptr<scalar_t>();
                                           r = Scalar(value);
                                         });

  return r;
}
}
