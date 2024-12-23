#include <c10/core/Allocator.h>

namespace at::mlx {

struct TORCH_API MLXAllocator final : public c10::Allocator {
 public:
  DataPtr allocate(size_t n) override;
  DeleterFnPtr raw_deleter() const override;
  void copy_data(void * dest, const void * src, std::size_t count) const override;

 private:
  static void Delete(void *ptr);
};

TORCH_API MLXAllocator* getMLXAllocator();
} // namespace at::mlx
