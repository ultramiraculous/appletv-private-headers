/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSURL, NSNumber, NSString, ISOperation, SSURLBagContext, SSAuthenticationContext;

@interface ISDataProvider : NSObject <NSCopying> {
	SSAuthenticationContext *_authenticationContext;	// 4 = 0x4
	NSNumber *_authenticatedAccountDSID;	// 8 = 0x8
	SSURLBagContext *_bagContext;	// 12 = 0xc
	long long _contentLength;	// 16 = 0x10
	NSString *_contentType;	// 24 = 0x18
	id _output;	// 28 = 0x1c
	ISOperation *_parentOperation;	// 32 = 0x20
	NSURL *_redirectURL;	// 36 = 0x24
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x3553885d; S=0x35538871; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x35538825; S=0x35538839; @synthesize=_authenticationContext
@property(retain) SSURLBagContext *bagContext;	// G=0x35538895; S=0x355388a9; @synthesize=_bagContext
@property(assign) long long contentLength;	// G=0x355388cd; S=0x35538901; @synthesize=_contentLength
@property(retain) NSString *contentType;	// G=0x35538935; S=0x35538949; @synthesize=_contentType
@property(retain) id output;	// G=0x3553896d; S=0x35538981; @synthesize=_output
@property(assign) ISOperation *parentOperation;	// G=0x355389a5; S=0x355389b5; @synthesize=_parentOperation
@property(retain) NSURL *redirectURL;	// G=0x355389c5; S=0x355389d9; @synthesize=_redirectURL
+ (id)provider;	// 0x355386b1
// declared property getter: - (id)authenticatedAccountDSID;	// 0x3553885d
// declared property getter: - (id)authenticationContext;	// 0x35538825
// declared property getter: - (id)bagContext;	// 0x35538895
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x355386f9
- (void)closeStream;	// 0x35538709
- (void)configureFromProvider:(id)provider;	// 0x3553870d
// declared property getter: - (long long)contentLength;	// 0x355388cd
// declared property getter: - (id)contentType;	// 0x35538935
- (id)copyWithZone:(NSZone *)zone;	// 0x35538619
- (void)dealloc;	// 0x35538539
- (BOOL)isStream;	// 0x35538765
- (void)migrateOutputFromSubProvider:(id)subProvider;	// 0x35538769
// declared property getter: - (id)output;	// 0x3553896d
// declared property getter: - (id)parentOperation;	// 0x355389a5
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x355387cd
// declared property getter: - (id)redirectURL;	// 0x355389c5
- (void)resetStream;	// 0x355387c1
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x35538871
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x35538839
// declared property setter: - (void)setBagContext:(id)context;	// 0x355388a9
// declared property setter: - (void)setContentLength:(long long)length;	// 0x35538901
// declared property setter: - (void)setContentType:(id)type;	// 0x35538949
// declared property setter: - (void)setOutput:(id)output;	// 0x35538981
// declared property setter: - (void)setParentOperation:(id)operation;	// 0x355389b5
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x355389d9
- (void)setup;	// 0x355387f1
- (long long)streamedBytes;	// 0x355387c5
@end

