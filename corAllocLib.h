//
// FILE            corAllocLib.h
//
// AUTHOR          Ken Zangelin
//
// Copyright 2019 Ken Zangelin
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef CORALLOC_CORALLOCLIB_H_
#define CORALLOC_CORALLOCLIB_H_

//
// corAllocLib.h - the whole (small) library: the declaration of corAlloc() and every header. Included
// through corAlloc.h and CorAlloc.h, which are the same one line - on a case-insensitive file system
// (macOS) they are one file, and whichever of the two a checkout keeps, it is this.
//
#include "corAlloc/CorAllocStruct.h"
#include "corAlloc/CorAllocBuffer.h"
#include "corAlloc/CorAllocStatus.h"
#include "corAlloc/CorAllocTraceLevel.h"
#include "corAlloc/corAllocBufferInit.h"
#include "corAlloc/corAllocBufferReset.h"
#include "corAlloc/corAllocHooks.h"
#include "corAlloc/corAllocStrdup.h"
#include "corAlloc/corAllocMem.h"



// -----------------------------------------------------------------------------
//
// corAlloc - allocate 'size' bytes, zeroed, from the allocator
//
extern char* corAlloc(CorAlloc* kaP, unsigned long long size);



// -----------------------------------------------------------------------------
//
// corAllocThreadSafe - make kaP safe to allocate from on several threads at once (see corAlloc.c)
//
extern void corAllocThreadSafe(CorAlloc* kaP);

#endif  // CORALLOC_CORALLOCLIB_H_
