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
/// @file LazerThread.cpp
/// @author Ben Minerd
/// @date 3/18/2020
/// @brief LazerThread class source file.
///

//------------------------------------------------------------------------------
// Include files
//------------------------------------------------------------------------------

#include <LazerOs/LazerThread.h>

using LazerOs::LazerThread;

//------------------------------------------------------------------------------
// Public constructors
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
LazerThread::LazerThread(RunCallback& callback, const TimeMs periodMs)
{
}

//------------------------------------------------------------------------------
// Public virtual destructors
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
LazerThread::~LazerThread()
{
}

//------------------------------------------------------------------------------
// Public methods
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
void LazerThread::enable()
{
    setEnabled(true);
}

//------------------------------------------------------------------------------
void LazerThread::disable()
{
    setEnabled(false);
}

//------------------------------------------------------------------------------
void LazerThread::setEnabled(const bool enabled)
{
}

//------------------------------------------------------------------------------
void LazerThread::setPeriodMs(const TimeMs periodMs)
{
}

//------------------------------------------------------------------------------
uint32_t LazerThread::setPriority(const uint32_t priority)
{
}

//------------------------------------------------------------------------------
// Private methods
//------------------------------------------------------------------------------
