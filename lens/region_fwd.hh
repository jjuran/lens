/*
	lens/region_fwd.hh
	------------------
*/

#ifndef LENS_REGIONFWD_HH
#define LENS_REGIONFWD_HH

#if defined( __APPLE__ ) || TARGET_API_MAC_CARBON || OPAQUE_TOOLBOX_STRUCTS
#define REGION_TYPE struct OpaqueRgnHandle
#else
#define REGION_TYPE struct MacRegion*
#endif

// Mac OS
#ifndef __QUICKDRAW__
//#include <Quickdraw.h>
typedef REGION_TYPE* RgnHandle;
#endif

#undef REGION_TYPE

#endif

