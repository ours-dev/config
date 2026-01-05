/// SPDX-License-Identifier: MIT
/// Copyright (c) 2025 smallhuazi
#pragma once

#include <ours/config/types.hpp>
#include <ours/config/lang-items.hpp>

namespace ours {
    CXX11_CONSTEXPR 
    auto operator""_i8(unsigned long long v) -> i8 {
        return static_cast<i8>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_i16(unsigned long long v) -> i16 {
        return static_cast<i16>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_i32(unsigned long long v) -> i32 {
        return static_cast<i32>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_i64(unsigned long long v) -> i64 {
        return static_cast<i64>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_isize(unsigned long long v) -> isize {
        return static_cast<isize>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_u8(unsigned long long v) -> u8 {
        return static_cast<u8>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_u16(unsigned long long v) -> u16 {
        return static_cast<u16>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_u32(unsigned long long v) -> u32 {
        return static_cast<u32>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_u64(unsigned long long v) -> u64 {
        return static_cast<u64>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_usize(unsigned long long v) -> usize {
        return static_cast<usize>(v);
    }

    CXX11_CONSTEXPR 
    auto operator""_kb(unsigned long long v) -> isize {
        return static_cast<isize>(v) << 10;
    }

    CXX11_CONSTEXPR 
    auto operator""_mb(unsigned long long v) -> isize {
        return static_cast<isize>(v) << 20;
    }

    CXX11_CONSTEXPR 
    auto operator""_gb(unsigned long long v) -> isize {
        return static_cast<isize>(v) << 30;
    }

    CXX11_CONSTEXPR 
    auto operator""_tb(unsigned long long v) -> isize {
        return static_cast<isize>(v) << 40;
    }

    CXX11_CONSTEXPR 
    auto operator""_pb(unsigned long long v) -> isize {
        return static_cast<isize>(v) << 40;
    }

    CXX11_CONSTEXPR 
    auto operator""_bit(unsigned long long v) -> usize {
        return static_cast<isize>(1 << v);
    }
} // namespace ours