/****************************************************************************
*                                                                           *
*  PrimeSense Sensor 5.x Alpha                                              *
*  Copyright (C) 2011 PrimeSense Ltd.                                       *
*                                                                           *
*  This file is part of PrimeSense Sensor.                                  *
*                                                                           *
*  PrimeSense Sensor is free software: you can redistribute it and/or modify*
*  it under the terms of the GNU Lesser General Public License as published *
*  by the Free Software Foundation, either version 3 of the License, or     *
*  (at your option) any later version.                                      *
*                                                                           *
*  PrimeSense Sensor is distributed in the hope that it will be useful,     *
*  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the             *
*  GNU Lesser General Public License for more details.                      *
*                                                                           *
*  You should have received a copy of the GNU Lesser General Public License *
*  along with PrimeSense Sensor. If not, see <http://www.gnu.org/licenses/>.*
*                                                                           *
****************************************************************************/
#ifndef _XN_EXTERNAL_BUFFER_POOL_H_
#define _XN_EXTERNAL_BUFFER_POOL_H_ 

//---------------------------------------------------------------------------
// Includes
//---------------------------------------------------------------------------
#include <XnDDK/XnBufferPool.h>
#include <XnArray.h>
#include <XnGeneralBuffer.h>

//---------------------------------------------------------------------------
// Types
//---------------------------------------------------------------------------
class XnExternalBufferPool : public XnBufferPool
{
public:
	XnExternalBufferPool();
	~XnExternalBufferPool();

	XnStatus SetBuffers(XnUInt32 nCount, const XnGeneralBuffer* aBuffers);

protected:
	virtual XnStatus AllocateBuffers(XnUInt32 nSize);
	virtual void DestroyBuffer(void* pBuffer);

private:
	XnArray<XnGeneralBuffer> m_buffers;
};


#endif // _XN_EXTERNAL_BUFFER_POOL_H_