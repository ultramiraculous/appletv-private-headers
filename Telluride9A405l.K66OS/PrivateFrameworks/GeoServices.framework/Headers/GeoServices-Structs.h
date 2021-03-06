/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

typedef struct {
	unsigned long _field1;
	id *_field2;
	unsigned long *_field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct _NSZone NSZone;

typedef struct _GEOTileKey {
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned type : 6;
	unsigned pixelSize : 8;
	unsigned textScale : 8;
	unsigned provider : 8;
	unsigned expires : 1;
	unsigned reserved1 : 7;
	unsigned char reserved2[4];
} GEOTileKey;

typedef struct _ExpEntry {
	GEOTileKey _field1;
	double _field2;
	struct ExpEntry *_field3;
	struct ExpEntry *_field4;
} ExpEntry;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct sqlite3 sqlite3;

typedef struct sqlite3_stmt sqlite3_stmt;

typedef struct {
	double latitude;
	double longitude;
} XXStruct_zYrK5D;

typedef struct {
	XXStruct_zYrK5D _field1;
	double _field2;
	double _field3;
} XXStruct_SnKRpD;

typedef struct {
	long long *list;
	unsigned count;
	unsigned size;
} XXStruct_19EQxD;

typedef struct CGImage *CGImageRef;

typedef struct {
	int _field1;
	int _field2;
} XXStruct_K5nmsA;

typedef struct _xpc_connection_s xpc_connection_s;

typedef struct __CFRunLoop *CFRunLoopRef;


