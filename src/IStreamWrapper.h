/*
 * Copyright 2008, Jérôme Duval. All rights reserved.
 * Distributed under the terms of the MIT License.
 */
#ifndef ISTREAM_WRAPPER_H
#define ISTREAM_WRAPPER_H

#include <DataIO.h>
#include <ImfIO.h>

#include "StreamBuffer.h"

using namespace Imf;

class IStreamWrapper : public IStream {
	public:
		IStreamWrapper(const char *filename, BPositionIO *stream);
		virtual ~IStreamWrapper();

		virtual bool        read(char c[/*n*/], int n);
		virtual uint64_t    tellg();
		virtual void        seekg(uint64_t pos);
		
	private:
		StreamBuffer fStream;
};

#endif	/* ISTREAM_WRAPPER_H */

