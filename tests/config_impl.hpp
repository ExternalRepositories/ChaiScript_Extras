// Copyright (C) 2014-2015 Jonathan Müller <jonathanmueller.dev@gmail.com>
// This file is subject to the license terms in the LICENSE file
// found in the top-level directory of this distribution.

//=== version ===//
/// \brief Major version.
#define FOONATHAN_STRING_ID_VERSION_MAJOR ${version_major}

/// \brief Minor version.
#define FOONATHAN_STRING_ID_VERSION_MINOR ${version_minor}

/// \brief Total version number.
#define FOONATHAN_STRING_ID_VERSION (${version_major} * 100 + ${version_minor})

//=== database ===//
/// \brief Whether or not the database for string ids is active.
/// \detail This is \c true by default, change it via CMake option \c FOONATHAN_STRING_ID_DATABASE.
#define FOONATHAN_STRING_ID_DATABASE

/// \brief Whether or not the database should thread safe.
/// \detail This is \c true by default, change it via CMake option \c FOONATHAN_STRING_ID_MULTITHREADED.
#define FOONATHAN_STRING_ID_MULTITHREADED 0

//=== compatibility ===//
#define FOONATHAN_IMPL_HAS_NOEXCEPT
#define FOONATHAN_IMPL_HAS_CONSTEXPR
#define FOONATHAN_IMPL_HAS_LITERAL
#define FOONATHAN_IMPL_HAS_OVERRIDE

#ifndef FOONATHAN_NOEXCEPT
    #ifdef FOONATHAN_IMPL_HAS_NOEXCEPT
        #define FOONATHAN_NOEXCEPT noexcept
    #else
        #define FOONATHAN_NOEXCEPT
    #endif
#endif

#ifndef FOONATHAN_CONSTEXPR
    #ifdef FOONATHAN_IMPL_HAS_CONSTEXPR
        #define FOONATHAN_CONSTEXPR constexpr
    #else
        #define FOONATHAN_CONSTEXPR const
    #endif
#endif

#ifndef FOONATHAN_CONSTEXPR_FNC
    #ifdef FOONATHAN_IMPL_HAS_CONSTEXPR
        #define FOONATHAN_CONSTEXPR_FNC constexpr
    #else
        #define FOONATHAN_CONSTEXPR_FNC inline
    #endif
#endif

#ifndef FOONATHAN_OVERRIDE
    #ifdef FOONATHAN_IMPL_HAS_OVERRIDE
        #define FOONATHAN_OVERRIDE override
    #else
        #define FOONATHAN_OVERRIDE
    #endif
#endif

/// \brief Whether or not the \c constexpr literal operators are availble.
/// \detail If this is \c false, there is only the \ref id() function which can't be used inside switch cases.
#define FOONATHAN_STRING_ID_HAS_LITERAL 1

/// \brief Whether or not the handler functions are atomic.
//#cmakedefine01 FOONATHAN_STRING_ID_ATOMIC_HANDLER
