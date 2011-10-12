/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

typedef struct _NSZone NSZone;

typedef struct {
	unsigned long _field1;
	id *_field2;
	unsigned long *_field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct {
	unsigned _field1;
	id _field2[4];
} XXStruct_1UKQIB;

typedef struct {
	id _field1;
	id _field2;
} XXStruct_OzJQfB;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct __CFString *CFStringRef;

typedef struct dispatch_semaphore_s dispatch_semaphore_s;

typedef struct _xpc_connection_s xpc_connection_s;

typedef struct {
	float m11;
	float m12;
	float m21;
	float m22;
	float tX;
	float tY;
} XXStruct_DOQIoC;

typedef struct CGSize {
	float _field1;
	float _field2;
} CGSize;

typedef struct CGPoint {
	float _field1;
	float _field2;
} CGPoint;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct __CFBundle *CFBundleRef;

typedef struct __CFCharacterSet *CFCharacterSetRef;

typedef struct CGRect {
	CGPoint _field1;
	CGSize _field2;
} CGRect;

typedef struct __CFAllocator *CFAllocatorRef;

typedef struct timespec {
	int tv_sec;
	long tv_nsec;
} timespec;

typedef struct dispatch_data_s dispatch_data_s;

typedef struct dispatch_source_s dispatch_source_s;

typedef struct __CFRunLoopSource *CFRunLoopSourceRef;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct dispatch_source_type_s dispatch_source_type_s;

typedef struct stat {
	int st_dev;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned long long st_ino;
	unsigned st_uid;
	unsigned st_gid;
	int st_rdev;
	timespec st_atimespec;
	timespec st_mtimespec;
	timespec st_ctimespec;
	timespec st_birthtimespec;
	long long st_size;
	long long st_blocks;
	int st_blksize;
	unsigned st_flags;
	unsigned st_gen;
	int st_lspare;
	long long st_qspare[2];
} stat;

typedef struct _fields {
	unsigned extensionHidden : 1;
	unsigned creationDate : 1;
	unsigned reserved : 30;
} fields;

typedef struct __CFURLEnumerator *CFURLEnumeratorRef;

typedef struct _ftsent {
	struct ftsent *_field1;
	struct ftsent *_field2;
	struct ftsent *_field3;
	long _field4;
	void *_field5;
	char *_field6;
	char *_field7;
	int _field8;
	int _field9;
	unsigned short _field10;
	unsigned short _field11;
	unsigned long long _field12;
	int _field13;
	unsigned short _field14;
	short _field15;
	unsigned short _field16;
	unsigned short _field17;
	unsigned short _field18;
	stat *_field19;
	BOOL _field20[1];
} ftsent;

@class NSWeakCallback;
typedef struct NSSlice {
	void **items;
	BOOL wantsStrong;
	BOOL wantsWeak;
	BOOL shouldCopyIn;
	BOOL usesStrong;
	BOOL usesWeak;
	BOOL usesSentinel;
	BOOL pointerPersonality;
	BOOL integerPersonality;
	BOOL simpleReadClear;
	NSWeakCallback *callback;
	/*function-pointer*/ void *sizeFunction;
	/*function-pointer*/ void *hashFunction;
	/*function-pointer*/ void *isEqualFunction;
	/*function-pointer*/ void *describeFunction;
	/*function-pointer*/ void *acquireFunction;
	/*function-pointer*/ void *relinquishFunction;
	/*function-pointer*/ void *allocateFunction;
	/*function-pointer*/ void *freeFunction;
	/*function-pointer*/ void *readAt;
	/*function-pointer*/ void *clearAt;
	/*function-pointer*/ void *storeAt;
} NSSlice;

typedef struct __CFBasicHash *CFBasicHashRef;

typedef struct objc_method objc_method;

typedef struct objc_ivar objc_ivar;

typedef struct __CFSet *CFSetRef;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct {
	Class _field1;
	Class _field2;
	CFSetRef _field3;
	CFDictionaryRef _field4;
} XXStruct_MCKcIA;

typedef struct __CFReadStream *CFReadStreamRef;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
	long __sig;
	BOOL __opaque[24];
} opaque_pthread_cond_t;

typedef struct {
	unsigned _field1 : 8;
	unsigned _field2 : 4;
	unsigned _field3 : 1;
	unsigned _field4 : 1;
	unsigned _field5 : 18;
	unsigned short _field6[8];
} XXStruct_9isexA;

typedef struct {
	int _field1;
	void *_field2;
	/*function-pointer*/ void *_field3;
	/*function-pointer*/ void *_field4;
	/*function-pointer*/ void *_field5;
} XXStruct_K1psTC;

typedef struct _opaque_pthread_attr_t {
	long __sig;
	BOOL __opaque[36];
} opaque_pthread_attr_t;

typedef struct __darwin_pthread_handler_rec darwin_pthread_handler_rec;

typedef struct _opaque_pthread_t {
	long _field1;
	darwin_pthread_handler_rec *_field2;
	BOOL _field3[596];
} opaque_pthread_t;

typedef struct _xmlSAXHandler {
	/*function-pointer*/ void *_field1;
	/*function-pointer*/ void *_field2;
	/*function-pointer*/ void *_field3;
	/*function-pointer*/ void *_field4;
	/*function-pointer*/ void *_field5;
	/*function-pointer*/ void *_field6;
	/*function-pointer*/ void *_field7;
	/*function-pointer*/ void *_field8;
	/*function-pointer*/ void *_field9;
	/*function-pointer*/ void *_field10;
	/*function-pointer*/ void *_field11;
	/*function-pointer*/ void *_field12;
	/*function-pointer*/ void *_field13;
	/*function-pointer*/ void *_field14;
	/*function-pointer*/ void *_field15;
	/*function-pointer*/ void *_field16;
	/*function-pointer*/ void *_field17;
	/*function-pointer*/ void *_field18;
	/*function-pointer*/ void *_field19;
	/*function-pointer*/ void *_field20;
	/*function-pointer*/ void *_field21;
	/*function-pointer*/ void *_field22;
	/*function-pointer*/ void *_field23;
	/*function-pointer*/ void *_field24;
	/*function-pointer*/ void *_field25;
	/*function-pointer*/ void *_field26;
	/*function-pointer*/ void *_field27;
	unsigned _field28;
	void *_field29;
	/*function-pointer*/ void *_field30;
	/*function-pointer*/ void *_field31;
	/*function-pointer*/ void *_field32;
} xmlSAXHandler;

typedef struct _xmlDoc xmlDoc;

typedef struct _xmlParserInput xmlParserInput;

typedef struct _xmlNode xmlNode;

typedef struct _xmlParserNodeInfo xmlParserNodeInfo;

typedef struct _xmlParserNodeInfoSeq {
	unsigned long _field1;
	unsigned long _field2;
	xmlParserNodeInfo *_field3;
} xmlParserNodeInfoSeq;

typedef struct _xmlValidState xmlValidState;

typedef struct _xmlAutomata xmlAutomata;

typedef struct _xmlAutomataState xmlAutomataState;

typedef struct _xmlValidCtxt {
	void *_field1;
	/*function-pointer*/ void *_field2;
	/*function-pointer*/ void *_field3;
	xmlNode *_field4;
	int _field5;
	int _field6;
	xmlNode **_field7;
	unsigned _field8;
	xmlDoc *_field9;
	int _field10;
	xmlValidState *_field11;
	int _field12;
	int _field13;
	xmlValidState *_field14;
	xmlAutomata *_field15;
	xmlAutomataState *_field16;
} xmlValidCtxt;

typedef struct _xmlDict xmlDict;

typedef struct _xmlHashTable xmlHashTable;

typedef struct _xmlAttr xmlAttr;

typedef struct _xmlError {
	int _field1;
	int _field2;
	char *_field3;
	int _field4;
	char *_field5;
	int _field6;
	char *_field7;
	char *_field8;
	char *_field9;
	int _field10;
	int _field11;
	void *_field12;
	void *_field13;
} xmlError;

typedef struct _xmlParserCtxt {
	xmlSAXHandler *_field1;
	void *_field2;
	xmlDoc *_field3;
	int _field4;
	int _field5;
	char *_field6;
	char *_field7;
	int _field8;
	int _field9;
	xmlParserInput *_field10;
	int _field11;
	int _field12;
	xmlParserInput **_field13;
	xmlNode *_field14;
	int _field15;
	int _field16;
	xmlNode **_field17;
	int _field18;
	xmlParserNodeInfoSeq _field19;
	int _field20;
	int _field21;
	int _field22;
	int _field23;
	int _field24;
	int _field25;
	xmlValidCtxt _field26;
	int _field27;
	int _field28;
	char *_field29;
	char *_field30;
	int _field31;
	int _field32;
	char **_field33;
	long _field34;
	long _field35;
	int _field36;
	int _field37;
	int _field38;
	char *_field39;
	char *_field40;
	char *_field41;
	int *_field42;
	int _field43;
	int _field44;
	int *_field45;
	int _field46;
	xmlParserInput *_field47;
	int _field48;
	int _field49;
	int _field50;
	int _field51;
	void *_field52;
	int _field53;
	int _field54;
	void *_field55;
	int _field56;
	int _field57;
	xmlDict *_field58;
	char **_field59;
	int _field60;
	int _field61;
	char *_field62;
	char *_field63;
	char *_field64;
	int _field65;
	int _field66;
	int _field67;
	char **_field68;
	int *_field69;
	void **_field70;
	xmlHashTable *_field71;
	xmlHashTable *_field72;
	int _field73;
	int _field74;
	int _field75;
	int _field76;
	xmlNode *_field77;
	int _field78;
	xmlAttr *_field79;
	xmlError _field80;
	int _field81;
	unsigned long _field82;
	unsigned long _field83;
} xmlParserCtxt;

typedef struct sockaddr sockaddr;

typedef struct addrinfo {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
	unsigned _field5;
	char *_field6;
	sockaddr *_field7;
	struct addrinfo *_field8;
} addrinfo;

typedef struct objc_method_description {
	SEL _field1;
	char *_field2;
} objc_method_description;

typedef struct __CFNumberFormatter *CFNumberFormatterRef;

typedef struct _CFURLProtocol *CFURLProtocolRef;

typedef struct _CFURLAuthChallenge *CFURLAuthChallengeRef;

typedef struct _CFURLRequest *CFURLRequestRef;

typedef struct _CFURLCredential *CFURLCredentialRef;

typedef struct OpaqueCFHTTPCookie OpaqueCFHTTPCookie;

typedef struct __CFArray *CFArrayRef;

typedef struct OpaqueCFHTTPCookieStorage OpaqueCFHTTPCookieStorage;

typedef struct __SCDynamicStore *SCDynamicStoreRef;

typedef struct _CFCachedURLResponse *CFCachedURLResponseRef;

typedef struct NSLRUFileList NSLRUFileList;

typedef struct _CFURLCache *CFURLCacheRef;

typedef struct {
	int _field1;
	int _field2;
} XXStruct_K5nmsA;

typedef struct InternalInit {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
	BOOL _field5;
	long long _field6;
} InternalInit;

typedef struct _CFURLConnection *CFURLConnectionRef;

typedef struct __SecIdentity SecIdentity;

typedef struct __SecTrust SecTrust;

typedef struct _CFURLProtectionSpace *CFURLProtectionSpaceRef;

typedef struct _CFURLResponse *CFURLResponseRef;

typedef struct _CFURLDownload *CFURLDownloadRef;

typedef struct __CFURL *CFURLRef;

typedef struct __CFError *CFErrorRef;

typedef struct internal_state internal_state;

typedef struct z_stream_s {
	char *next_in;
	unsigned avail_in;
	unsigned total_in;
	char *next_out;
	unsigned avail_out;
	unsigned total_out;
	char *msg;
	internal_state *state;
	/*function-pointer*/ void *zalloc;
	/*function-pointer*/ void *zfree;
	void *opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

typedef struct __CFNetService *CFNetServiceRef;

typedef struct __CFNetServiceBrowser *CFNetServiceBrowserRef;

typedef struct __CFLocale *CFLocaleRef;

typedef struct {
	id _field1;
	void *_field2;
} XXStruct_WqRe1B;

typedef struct _NSRunArrayItem {
	unsigned _field1;
	id _field2;
} NSRunArrayItem;

typedef struct _NSRefCountedRunArray {
	void *_field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned _field7;
	NSRunArrayItem _field8[0];
} NSRefCountedRunArray;

typedef struct _NSSimpleAttributeDictionaryElement {
	unsigned hash;
	id key;
	id value;
} NSSimpleAttributeDictionaryElement;

typedef struct {
	unsigned _field1;
	id _field2;
	id _field3;
	id _field4;
	id _field5;
} XXStruct_xhVQEB;

typedef struct __CFDateFormatter *CFDateFormatterRef;

typedef struct _NSLTToken {
	unsigned short _field1;
	unsigned char _field2;
	unsigned char _field3;
	unsigned _field4;
	union {
		void *_field1;
		struct {
			unsigned char _field1;
			unsigned char _field2;
		} _field2;
	} _field5;
} NSLTToken;

typedef struct __FSEventStream *FSEventStreamRef;

typedef struct {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
	int _field5;
	id _field6;
	id _field7;
	id _field8;
} XXStruct_9l2rVA;


