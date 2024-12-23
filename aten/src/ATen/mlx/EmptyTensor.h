
#pragma once
#include <ATen/core/TensorBase.h>

namespace at::detail {

C10_EXPORT TensorBase empty_mlx(
    IntArrayRef size,
    std::optional<ScalarType> dtype_opt,
    std::optional<Layout> layout_opt,
    std::optional<Device> device_opt,
    std::optional<bool> pin_memory_opt,
    std::optional<c10::MemoryFormat> memory_format_opt);

C10_EXPORT TensorBase empty_mlx(
    IntArrayRef size, const TensorOptions &options);

C10_EXPORT TensorBase empty_strided_mlx(
    IntArrayRef size,
    IntArrayRef stride,
    ScalarType dtype,
    std::optional<DeviceType> device_opt);

C10_EXPORT TensorBase empty_strided_mlx(
    IntArrayRef size,
    IntArrayRef stride,
    std::optional<ScalarType> dtype_opt,
    std::optional<Layout> layout_opt,
    std::optional<Device> device_opt,
    std::optional<bool> pin_memory_opt);

C10_EXPORT TensorBase empty_strided_mlx(
    IntArrayRef size,
    IntArrayRef stride,
    const TensorOptions &options);

C10_EXPORT TensorBase create_null_mlx(
    IntArrayRef size,
    IntArrayRef stride,
    const TensorOptions &options);

} // namespace at::detail
