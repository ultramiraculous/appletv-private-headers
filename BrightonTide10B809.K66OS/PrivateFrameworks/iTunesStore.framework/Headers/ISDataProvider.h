/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSNumber, SSURLBagContext, SSAuthenticationContext, ISOperation, NSURL, NSString;

@interface ISDataProvider : NSObject <NSCopying> {
	SSAuthenticationContext *_authenticationContext;	// 4 = 0x4
	NSNumber *_authenticatedAccountDSID;	// 8 = 0x8
	SSURLBagContext *_bagContext;	// 12 = 0xc
	long long _contentLength;	// 16 = 0x10
	NSString *_contentType;	// 24 = 0x18
	id _output;	// 28 = 0x1c
	ISOperation *_parentOperation;	// 32 = 0x20
	NSURL *_redirectURL;	// 36 = 0x24
	int _errorHandlerResponseType;	// 40 = 0x28
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x3687e32d; S=0x3687e341; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x3687e309; S=0x3687e31d; @synthesize=_authenticationContext
@property(retain) SSURLBagContext *bagContext;	// G=0x3687e351; S=0x3687e365; @synthesize=_bagContext
@property(assign) long long contentLength;	// G=0x3687e375; S=0x3687e3a9; @synthesize=_contentLength
@property(retain) NSString *contentType;	// G=0x3687e3dd; S=0x3687e3f1; @synthesize=_contentType
@property(assign) int errorHandlerResponseType;	// G=0x3687e401; S=0x3687e415; @synthesize=_errorHandlerResponseType
@property(retain) id output;	// G=0x3687e42d; S=0x3687e441; @synthesize=_output
@property(assign) ISOperation *parentOperation;	// G=0x3687e451; S=0x3687e465; @synthesize=_parentOperation
@property(retain) NSURL *redirectURL;	// G=0x3687e47d; S=0x3687e491; @synthesize=_redirectURL
+ (id)provider;	// 0x3687dfe5
// declared property getter: - (id)authenticatedAccountDSID;	// 0x3687e32d
// declared property getter: - (id)authenticationContext;	// 0x3687e309
// declared property getter: - (id)bagContext;	// 0x3687e351
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x3687e02d
- (void)closeStream;	// 0x3687e03d
- (void)configureFromProvider:(id)provider;	// 0x3687e041
// declared property getter: - (long long)contentLength;	// 0x3687e375
// declared property getter: - (id)contentType;	// 0x3687e3dd
- (id)copyWithZone:(NSZone *)zone;	// 0x3687df4d
- (void)dealloc;	// 0x3687de75
// declared property getter: - (int)errorHandlerResponseType;	// 0x3687e401
- (BOOL)isStream;	// 0x3687e099
- (void)migrateOutputFromSubProvider:(id)subProvider;	// 0x3687e09d
// declared property getter: - (id)output;	// 0x3687e42d
// declared property getter: - (id)parentOperation;	// 0x3687e451
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x3687e101
// declared property getter: - (id)redirectURL;	// 0x3687e47d
- (void)resetStream;	// 0x3687e0f5
- (BOOL)runAuthorizationDialog:(id)dialog error:(id *)error;	// 0x3687e159
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x3687e341
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3687e31d
// declared property setter: - (void)setBagContext:(id)context;	// 0x3687e365
// declared property setter: - (void)setContentLength:(long long)length;	// 0x3687e3a9
// declared property setter: - (void)setContentType:(id)type;	// 0x3687e3f1
// declared property setter: - (void)setErrorHandlerResponseType:(int)type;	// 0x3687e415
// declared property setter: - (void)setOutput:(id)output;	// 0x3687e441
// declared property setter: - (void)setParentOperation:(id)operation;	// 0x3687e465
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x3687e491
- (void)setup;	// 0x3687e125
- (long long)streamedBytes;	// 0x3687e0f9
@end

