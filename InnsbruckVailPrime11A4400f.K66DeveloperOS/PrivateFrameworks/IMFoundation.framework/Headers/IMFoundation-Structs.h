/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

typedef struct _NSZone NSZone;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct __SCDynamicStore *SCDynamicStoreRef;

typedef struct _TidyDoc {
	int _field1;
} TidyDoc;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct __CFUserNotification *CFUserNotificationRef;

typedef struct __SCNetworkReachability *SCNetworkReachabilityRef;

typedef struct __SCPreferences *SCPreferencesRef;

typedef struct __CTServerConnection *CTServerConnectionRef;

typedef struct __SecIdentity SecIdentity;

typedef struct in_addr {
	unsigned _field1;
} in_addr;

typedef struct sockaddr_in {
	unsigned char _field1;
	unsigned char _field2;
	unsigned short _field3;
	in_addr _field4;
	BOOL _field5[8];
} sockaddr_in;

typedef struct timeval {
	int tv_sec;
	int tv_usec;
} timeval;


