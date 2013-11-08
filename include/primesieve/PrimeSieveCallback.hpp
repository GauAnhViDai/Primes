///
/// @file   PrimeSieveCallback.hpp
/// @brief  Callback interface class for PrimeSieve and
///         ParallelPrimeSieve objects.
///
/// Copyright (C) 2013 Kim Walisch, <kim.walisch@gmail.com>
///
/// This file is distributed under the BSD License. See the COPYING
/// file in the top level directory.
///

#ifndef PRIMESIEVECALLBACK_HPP
#define PRIMESIEVECALLBACK_HPP

#include <stdint.h>

namespace primesieve {

class None { };

template <typename T1, typename T2 = None>
class PrimeSieveCallback
{
public:
  virtual void callback(T1 prime) = 0;
  virtual ~PrimeSieveCallback() { }
};

template <>
class PrimeSieveCallback<uint64_t, int>
{
public:
  virtual void callback(uint64_t prime, int threadNum) = 0;
  virtual ~PrimeSieveCallback() { }
};

} // namespace primesieve

#endif