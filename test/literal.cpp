#include <ours/config/literals.hpp>

namespace ours {
    static_assert(1_kb == 1024);
    static_assert(-1_kb == -1024);
    static_assert(-1_usize == -1);

} // namespace ours