/*
Copyright (c) 2015, Xenomorphales
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of Aversive++ nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef OUTPUT_STREAM_HPP
#define OUTPUT_STREAM_HPP

#include <device/output.hpp>

namespace Aversive {

namespace Stream {

template<typename _ElementType = char, typename _SizeType = unsigned int>
class OutputStream : public Device::Output<_ElementType> {
public:
  using ElementType = _ElementType;
  using SizeType = _SizeType;

protected:
  inline OutputStream() {}

public:
  //! \brief Write data to the stream.
  //! \param data : The data buffer to write.
  //! \param length : The size of the data buffer.
  //! \return Number of characters written.
  inline SizeType write(const ElementType* data, SizeType length);

  //! \brief Get the number of writable characters.
  //! \return The number of character that can be written.
  inline SizeType writable(void);
};

}

}

#endif//OUTPUT_STREAM_HPP
