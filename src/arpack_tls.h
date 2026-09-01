#pragma once

/* The f2c translation turns Fortran SAVE variables into function-local
   `static' objects and COMMON blocks into file-scope ones.  Both are live
   state of a running reverse-communication loop, so two threads
   driving ARPACK at the same time overwrite each other.  ARPACK_TLS gives
   every thread its own copy.  */

#if defined(_MSC_VER)
#  define ARPACK_TLS static __declspec(thread)
#else
#  define ARPACK_TLS static __thread
#endif
