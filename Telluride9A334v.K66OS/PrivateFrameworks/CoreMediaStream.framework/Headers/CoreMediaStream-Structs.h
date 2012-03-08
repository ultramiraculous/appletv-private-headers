/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

typedef struct _NSZone NSZone;

typedef struct __CFString *CFStringRef;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct CFURLConnectionClient_V1 *CFURLConnectionClient_V1Ref;

typedef struct _CFURLConnection *CFURLConnectionRef;

typedef struct __CFData *CFDataRef;

typedef struct __CFHTTPMessage *CFHTTPMessageRef;

typedef struct __CFError *CFErrorRef;

typedef struct __MSSPCContext {
	void *owner;
	CFStringRef personID;
	CFStringRef authToken;
	CFDictionaryRef deviceInfo;
	double connectionTimeout;
	/*function-pointer*/ void *__didReceiveDataCallback;
	/*function-pointer*/ void *__didFinishCallback;
	/*function-pointer*/ void *__didFailAuthenticationCallback;
	/*function-pointer*/ void *__didReceiveServerSideConfigVersionCallback;
	/*function-pointer*/ void *__didReceiveRetryAfterCallback;
	CFURLConnectionClient_V1Ref __client;
	CFURLConnectionRef __connection;
	CFDataRef __responseData;
	CFHTTPMessageRef __response;
	CFErrorRef __error;
} MSSPCContext;

typedef struct __MSPSPCContext {
	MSSPCContext _super;
	/*function-pointer*/ void *finishedCallback;
	/*function-pointer*/ void *authFailedCallback;
	/*function-pointer*/ void *didReceiveServerSideConfigurationVersionCallback;
	/*function-pointer*/ void *didReceiveRetryAfterCallback;
} MSPSPCContext;

typedef struct __MSPSPCUCContext {
	MSSPCContext _super;
	/*function-pointer*/ void *finishedCallback;
	/*function-pointer*/ void *authFailedCallback;
	/*function-pointer*/ void *didReceiveServerSideConfigurationVersionCallback;
} MSPSPCUCContext;

typedef struct __MSSSPCContext {
	MSSPCContext _super;
	/*function-pointer*/ void *finishedCallback;
	/*function-pointer*/ void *gotDataChunkCallback;
	/*function-pointer*/ void *authFailedCallback;
	/*function-pointer*/ void *didReceiveServerSideConfigurationVersionCallback;
	/*function-pointer*/ void *didReceiveRetryAfterCallback;
	double connectionTimeout;
	int __state;
	CFDataRef __chunkLengthData;
	CFDataRef __currentChunkData;
	int __chunkBytesRemaining;
} MSSSPCContext;

typedef struct __CFURL *CFURLRef;

typedef struct __MSSSPCChunkParsingContext {
	void *_field1;
	/*function-pointer*/ void *_field2;
	/*function-pointer*/ void *_field3;
	/*function-pointer*/ void *_field4;
	/*function-pointer*/ void *_field5;
	/*function-pointer*/ void *_field6;
	/*function-pointer*/ void *_field7;
	CFStringRef _field8;
	CFURLRef _field9;
	CFStringRef _field10;
	CFStringRef _field11;
	int _field12;
} MSSSPCChunkParsingContext;

typedef struct __MMCSEngine *MMCSEngineRef;

typedef struct __MSShPCContext {
	MSSPCContext _super;
	/*function-pointer*/ void *didFindShareStateCallback;
	/*function-pointer*/ void *didFinishTransactionCallback;
	/*function-pointer*/ void *didFailAuthenticationCallback;
	/*function-pointer*/ void *didReceiveServerSideConfigurationVersionCallback;
	int __contextType;
} MSShPCContext;

typedef struct __MSSSCPCContext {
	MSSPCContext _super;
	/*function-pointer*/ void *didFinishCallback;
	/*function-pointer*/ void *didFailAuthenticationCallback;
} MSSSCPCContext;

typedef struct __MSRSPCContext {
	MSSPCContext _super;
	/*function-pointer*/ void *finishedCallback;
	/*function-pointer*/ void *authFailedCallback;
	/*function-pointer*/ void *didReceiveServerSideConfigurationVersionCallback;
} MSRSPCContext;

typedef struct __MSRPCContext {
	MSSPCContext _super;
	/*function-pointer*/ void *finishedCallback;
	/*function-pointer*/ void *authFailedCallback;
	/*function-pointer*/ void *didReceiveRetryAfterCallback;
	/*function-pointer*/ void *didReceiveServerSideConfigurationVersionCallback;
} MSRPCContext;

typedef struct sqlite3 sqlite3;

typedef struct sqlite3_stmt sqlite3_stmt;

