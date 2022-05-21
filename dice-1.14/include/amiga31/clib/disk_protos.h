#ifndef  CLIB_DISK_PROTOS_H
#define  CLIB_DISK_PROTOS_H

/*
**	$VER: disk_protos.h 36.1 (19.2.91)
**	Includes Release 40.15
**
**	C prototypes. For use with 32 bit integers only.
**
**	(C) Copyright 1990-1999 Amiga, Inc.
**	    All Rights Reserved
*/

#ifndef  RESOURCES_DISK_H
#include <resources/disk.h>
#endif
BOOL AllocUnit( long unitNum );
void FreeUnit( long unitNum );
struct DiskResourceUnit *GetUnit( struct DiskResourceUnit *unitPointer );
void GiveUnit( void );
LONG GetUnitID( long unitNum );
/*------ new for V37 ------*/
LONG ReadUnitID( long unitNum );
#endif	 /* CLIB_DISK_PROTOS_H */
