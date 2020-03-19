//------------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2020 Benjamin Minerd
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//------------------------------------------------------------------------------

///
/// @file LazerThread.h
/// @author Ben Minerd
/// @date 3/18/2020
/// @brief LazerThread class header file.
///

#ifndef LAZER_OS_LAZER_THREAD_H
#define LAZER_OS_LAZER_THREAD_H

//------------------------------------------------------------------------------
// Include files
//------------------------------------------------------------------------------

#include <cstdint>

#include <Plat4m_Types/Plat4mTypes.h>
#include <Plat4m_Types/Callback.h>

using namespace Plat4m::Types;

//------------------------------------------------------------------------------
// Namespaces
//------------------------------------------------------------------------------

namespace LazerOs
{

//------------------------------------------------------------------------------
// Classes
//------------------------------------------------------------------------------

class LazerThread
{
public:

    //--------------------------------------------------------------------------
    // Public types
    //--------------------------------------------------------------------------

    typedef Callback<> RunCallback;

    //--------------------------------------------------------------------------
    // Public constructors
    //--------------------------------------------------------------------------

	LazerThread(RunCallback& callback, const TimeMs periodMs = 0);

    //--------------------------------------------------------------------------
    // Public virtual destructors
    //--------------------------------------------------------------------------

    virtual ~LazerThread();

    //--------------------------------------------------------------------------
    // Public methods
    //--------------------------------------------------------------------------

    void enable();

    void disable();

    void setEnabled(const bool enabled);

    void setPeriodMs(const TimeMs periodMs);

    uint32_t setPriority(const uint32_t priority);

private:

    //--------------------------------------------------------------------------
    // Private data members
    //--------------------------------------------------------------------------

    //--------------------------------------------------------------------------
    // Private methods
    //--------------------------------------------------------------------------
};

}; // namespace LazerOs

#endif // LAZER_OS_LAZER_THREAD_H
