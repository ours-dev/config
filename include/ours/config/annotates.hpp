/// SPDX-License-Identifier: MIT
/// Copyright (c) 2025 smallhuazi
#pragma once

#define USED                        [[gnu::used]]
#define NAKED	                    [[gnu::naked]]
#define PACKED	                    [[gnu::packed]]
#define ALIGNED(x)	                [[gnu::aligned]]

#define NO_INLINE	                [[gnu::noinline]]
#define FORCE_INLINE                [[gnu::always_inline]]

#define WEAK_LINK                   [[gnu::weak]]
#define LINK_SECTION(name)          [[gnu::section(name)]]
#define LINK_NAME(name)             asm(name)

#ifdef __clang__
#   define THREAD_ANNOTATE(x) __attribute__((x))
#else
#   define THREAD_ANNOTATE(...)
#endif

#define TA_CAP(x)                  THREAD_ANNOTATE(capability(x))
#define TA_GUARD(x)                THREAD_ANNOTATE(guarded_by(x))
#define TA_ACQUIRE(...)            THREAD_ANNOTATE(acquire_capability(__VA_ARGS__))
#define TA_REQUIRE(...)            THREAD_ANNOTATE(requires_capability(__VA_ARGS__))
#define TA_RELEASE(...)            THREAD_ANNOTATE(release_capability(__VA_ARGS__))

#define TA_RETURN_CAPABILITY(...)  THREAD_ANNOTATE(__lock_returned__(__VA_ARGS__))