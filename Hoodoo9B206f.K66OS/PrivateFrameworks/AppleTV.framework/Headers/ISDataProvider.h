/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSNumber, SSURLBagContext, SSAuthenticationContext, NSString;

__attribute__((visibility("hidden")))
@interface ISDataProvider : NSObject <NSCopying> {
@private
	SSAuthenticationContext *_authenticationContext;	// 4 = 0x4
	NSNumber *_authenticatedAccountDSID;	// 8 = 0x8
	SSURLBagContext *_bagContext;	// 12 = 0xc
	long long _contentLength;	// 16 = 0x10
	NSString *_contentType;	// 24 = 0x18
	id _output;	// 28 = 0x1c
	NSURL *_redirectURL;	// 32 = 0x20
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x36816291; S=0x368162a5; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x36816259; S=0x3681626d; @synthesize=_authenticationContext
@property(retain) SSURLBagContext *bagContext;	// G=0x368162c9; S=0x368162dd; @synthesize=_bagContext
@property(assign) long long contentLength;	// G=0x36816301; S=0x36816335; @synthesize=_contentLength
@property(retain) NSString *contentType;	// G=0x36816369; S=0x3681637d; @synthesize=_contentType
@property(retain) id output;	// G=0x368163a1; S=0x368163b5; @synthesize=_output
@property(retain) NSURL *redirectURL;	// G=0x368163d9; S=0x368163ed; @synthesize=_redirectURL
+ (id)provider;	// 0x368160e5
// declared property getter: - (id)authenticatedAccountDSID;	// 0x36816291
// declared property getter: - (id)authenticationContext;	// 0x36816259
// declared property getter: - (id)bagContext;	// 0x368162c9
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x3681612d
- (void)closeStream;	// 0x3681613d
- (void)configureFromProvider:(id)provider;	// 0x36816141
// declared property getter: - (long long)contentLength;	// 0x36816301
// declared property getter: - (id)contentType;	// 0x36816369
- (id)copyWithZone:(NSZone *)zone;	// 0x3681604d
- (void)dealloc;	// 0x36815f6d
- (BOOL)isStream;	// 0x36816199
- (void)migrateOutputFromSubProvider:(id)subProvider;	// 0x3681619d
// declared property getter: - (id)output;	// 0x368163a1
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x36816201
// declared property getter: - (id)redirectURL;	// 0x368163d9
- (void)resetStream;	// 0x368161f5
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x368162a5
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3681626d
// declared property setter: - (void)setBagContext:(id)context;	// 0x368162dd
// declared property setter: - (void)setContentLength:(long long)length;	// 0x36816335
// declared property setter: - (void)setContentType:(id)type;	// 0x3681637d
// declared property setter: - (void)setOutput:(id)output;	// 0x368163b5
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x368163ed
- (void)setup;	// 0x36816225
- (long long)streamedBytes;	// 0x368161f9
@end

