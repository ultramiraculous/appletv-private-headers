/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library
#import "AYGroup.h"
#import "DAVKit-Structs.h"

@class NSMutableSet, NSString, NSMutableDictionary, AYAddress, NSLock, NSMutableArray, NSHTTPCookieStorage;
@protocol DAVAuthStore;

@interface DAVSession : NSObject <AYGroup> {
	NSString *_scheme;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	AYAddress *_address;	// 12 = 0xc
	int _port;	// 16 = 0x10
	BOOL _bypassProxies;	// 20 = 0x14
	BOOL _builtinRedirect;	// 21 = 0x15
	NSMutableDictionary *_permanentRedirects;	// 24 = 0x18
	NSString *_userAgent;	// 28 = 0x1c
	NSString *_acceptEncoding;	// 32 = 0x20
	NSString *_username;	// 36 = 0x24
	NSString *_password;	// 40 = 0x28
	id _passwordDelegate;	// 44 = 0x2c
	unsigned _readTimeOut;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	NSMutableDictionary *_privateInfos;	// 56 = 0x38
	NSMutableSet *_adapters;	// 60 = 0x3c
	int _bufferSize;	// 64 = 0x40
	NSLock *_sessionLock;	// 68 = 0x44
	int _numWorkerThread;	// 72 = 0x48
	id<DAVAuthStore> _authStore;	// 76 = 0x4c
	id _simpleAuthStore;	// 80 = 0x50
	void *_davReserved;	// 84 = 0x54
	BOOL _useKerberos;	// 88 = 0x58
	BOOL _supportsDigest;	// 89 = 0x59
	BOOL _useAuth;	// 90 = 0x5a
	NSMutableArray *_trustedCerts;	// 92 = 0x5c
	NSLock *_certUILock;	// 96 = 0x60
	BOOL _bypassCheckingServerTrust;	// 100 = 0x64
	id _certificateDelegate;	// 104 = 0x68
	NSHTTPCookieStorage *_cookieStorage;	// 108 = 0x6c
}
@property(readonly, retain) NSString *acceptEncoding;	// G=0x3008acf9; converted property
@property(assign, getter=isBuiltinRedirect) BOOL builtinRedirect;	// G=0x3008ac39; S=0x3008ac29; converted property
@property(assign) BOOL bypassCheckingServerTrust;	// G=0x3008ad5d; S=0x3008ad6d; converted property
@property(assign, getter=isBypassProxies) BOOL bypassProxies;	// G=0x3008ad19; S=0x3008ad09; converted property
@property(assign) id certificateDelegate;	// G=0x3008ad8d; S=0x3008ad7d; converted property
@property(retain) NSHTTPCookieStorage *cookieStorage;	// G=0x3008ad9d; S=0x3008b0a1; converted property
@property(readonly, retain) NSString *host;	// G=0x3008ac09; converted property
@property(assign) BOOL keepAlive;	// G=0x3008ad39; S=0x3008ad29; converted property
@property(retain) id lockOwner;	// G=0x3008b1ed; S=0x3008b20d; converted property
@property(readonly, retain) NSString *password;	// G=0x3008b281; converted property
@property(readonly, assign) int port;	// G=0x3008ac19; converted property
@property(assign) unsigned readTimeOut;	// G=0x3008acd9; S=0x3008acc9; converted property
@property(readonly, retain) NSString *scheme;	// G=0x3008abf9; converted property
@property(assign) BOOL supportsDigest;	// G=0x3008aded; S=0x3008addd; converted property
@property(retain) NSMutableArray *trustedCerts;	// G=0x3008ae1d; S=0x3008d3f1; converted property
@property(assign) BOOL useAuth;	// G=0x3008ae0d; S=0x3008adfd; converted property
@property(assign) BOOL useKerberos;	// G=0x3008adcd; S=0x3008adbd; converted property
@property(retain) NSString *userAgent;	// G=0x3008ace9; S=0x3008b1b1; converted property
@property(readonly, retain) NSString *username;	// G=0x3008ac85; converted property
+ (id)defaultAcceptEncoding;	// 0x3008c2a1
+ (id)defaultUserAgent;	// 0x3008c405
+ (void)initialize;	// 0x3008b751
+ (id)sessionWithScheme:(id)scheme host:(id)host port:(int)port;	// 0x3008b705
+ (id)sessionWithURL:(id)url;	// 0x3008b619
+ (void)setDefaultAcceptEncoding:(id)encoding;	// 0x3008c34d
+ (void)setDefaultUserAgent:(id)agent;	// 0x3008c551
+ (void)setMaxRedirection:(int)redirection;	// 0x3008aca5
+ (void)setMaxWorkerThreadsPerSession:(int)session;	// 0x3008acb1
+ (void)setProxiesDelegate:(id)delegate;	// 0x3008acbd
- (id)initWithScheme:(id)scheme host:(id)host port:(int)port;	// 0x3008bdf5
- (id)initWithURL:(id)url;	// 0x3008b561
- (id)URLToURI:(id)uri;	// 0x3008b46d
// converted property getter: - (id)acceptEncoding;	// 0x3008acf9
- (void)addAdapter:(id)adapter;	// 0x3008b429
- (long)bufferSize;	// 0x3008adad
// converted property getter: - (BOOL)bypassCheckingServerTrust;	// 0x3008ad5d
// converted property getter: - (id)certificateDelegate;	// 0x3008ad8d
- (void)clearAuthChallenge;	// 0x3008b449
// converted property getter: - (id)cookieStorage;	// 0x3008ad9d
- (void)correctBufferSizeWithSize:(long)size;	// 0x3008af7d
- (void)dealloc;	// 0x3008c149
- (id)description;	// 0x3008b50d
- (void)finalize;	// 0x3008c0fd
- (id)getNewRequestMessage:(CFHTTPMessageRef *)message andStream:(CFReadStreamRef *)stream forRequest:(id)request;	// 0x3008c609
- (BOOL)hasCredentials;	// 0x3008b22d
// converted property getter: - (id)host;	// 0x3008ac09
- (id)infoForKey:(id)key;	// 0x3008b381
// converted property getter: - (BOOL)isBuiltinRedirect;	// 0x3008ac39
// converted property getter: - (BOOL)isBypassProxies;	// 0x3008ad19
// converted property getter: - (BOOL)keepAlive;	// 0x3008ad39
- (id)lock;	// 0x3008ac95
// converted property getter: - (id)lockOwner;	// 0x3008b1ed
- (void)notifyAdaptersRequestCreated:(id)created;	// 0x3008b045
- (void)notifyAdaptersRequestDestroyed:(id)destroyed;	// 0x3008afe9
- (void)operationHasEnded:(id)ended;	// 0x3008b0dd
- (BOOL)operationShouldBeLaunchedNow:(id)operation;	// 0x3008b13d
// converted property getter: - (id)password;	// 0x3008b281
// converted property getter: - (int)port;	// 0x3008ac19
// converted property getter: - (unsigned)readTimeOut;	// 0x3008acd9
- (void)removeTrustedCerts;	// 0x3008bb39
// converted property getter: - (id)scheme;	// 0x3008abf9
- (void)setAuthStore:(id)store;	// 0x3008ac49
// converted property setter: - (void)setBuiltinRedirect:(BOOL)redirect;	// 0x3008ac29
// converted property setter: - (void)setBypassCheckingServerTrust:(BOOL)trust;	// 0x3008ad6d
// converted property setter: - (void)setBypassProxies:(BOOL)proxies;	// 0x3008ad09
// converted property setter: - (void)setCertificateDelegate:(id)delegate;	// 0x3008ad7d
// converted property setter: - (void)setCookieStorage:(id)storage;	// 0x3008b0a1
- (void)setDelegate:(id)delegate;	// 0x3008ac75
- (void)setInfo:(id)info forKey:(id)key;	// 0x3008b3a5
// converted property setter: - (void)setKeepAlive:(BOOL)alive;	// 0x3008ad29
// converted property setter: - (void)setLockOwner:(id)owner;	// 0x3008b20d
// converted property setter: - (void)setReadTimeOut:(unsigned)anOut;	// 0x3008acc9
// converted property setter: - (void)setSupportsDigest:(BOOL)digest;	// 0x3008addd
// converted property setter: - (void)setTrustedCerts:(id)certs;	// 0x3008d3f1
// converted property setter: - (void)setUseAuth:(BOOL)auth;	// 0x3008adfd
// converted property setter: - (void)setUseKerberos:(BOOL)kerberos;	// 0x3008adbd
// converted property setter: - (void)setUserAgent:(id)agent;	// 0x3008b1b1
- (void)setUsername:(id)username andPassword:(id)password;	// 0x3008b309
- (void)setUsername:(id)username andPasswordDelegate:(id)delegate;	// 0x3008b2b5
// converted property getter: - (BOOL)supportsDigest;	// 0x3008aded
// converted property getter: - (id)trustedCerts;	// 0x3008ae1d
// converted property getter: - (BOOL)useAuth;	// 0x3008ae0d
// converted property getter: - (BOOL)useKerberos;	// 0x3008adcd
// converted property getter: - (id)userAgent;	// 0x3008ace9
// converted property getter: - (id)username;	// 0x3008ac85
- (int)workerThreadsCount;	// 0x3008ad4d
@end

