/* 
 * tclPlatStubs.c --
 *
 *	This file contains the wrapper functions for the platform independent
 *	unsupported Tcl API.
 *
 * Copyright (c) 1998-1999 by Scriptics Corporation.
 * All rights reserved.
 *
 * RCS: @(#) $Id: tclPlatStubs.c,v 1.1 1999/03/03 00:38:42 stanton Exp $
 */

#include "tcl.h"
#include "tclPort.h"

/*
 * WARNING: This file is automatically generated by the tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the generic/tclInt.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

/*
 * Exported stub functions:
 */

#if !defined(__WIN32__) && !defined(MAC_TCL)
/* Slot 0 */
void
Tcl_CreateFileHandler(fd, mask, proc, clientData)
    int fd;
    int mask;
    Tcl_FileProc * proc;
    ClientData clientData;
{
    (tclPlatStubsPtr->tcl_CreateFileHandler)(fd, mask, proc, clientData);
}

/* Slot 1 */
void
Tcl_DeleteFileHandler(fd)
    int fd;
{
    (tclPlatStubsPtr->tcl_DeleteFileHandler)(fd);
}

/* Slot 2 */
int
Tcl_GetOpenFile(interp, string, write, checkUsage, filePtr)
    Tcl_Interp * interp;
    char * string;
    int write;
    int checkUsage;
    ClientData * filePtr;
{
    return (tclPlatStubsPtr->tcl_GetOpenFile)(interp, string, write, checkUsage, filePtr);
}

#endif /* UNIX */

/* !END!: Do not edit above this line. */
