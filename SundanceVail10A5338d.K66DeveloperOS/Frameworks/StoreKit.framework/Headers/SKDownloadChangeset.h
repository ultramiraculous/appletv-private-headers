/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSError, NSURL, NSNumber;

@interface SKDownloadChangeset : NSObject <NSCopying> {
	NSNumber *_contentLength;	// 4 = 0x4
	NSURL *_contentURL;	// 8 = 0x8
	NSNumber *_downloadID;	// 12 = 0xc
	NSNumber *_downloadState;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	NSNumber *_progress;	// 24 = 0x18
	NSNumber *_timeRemaining;	// 28 = 0x1c
}
@property(copy, nonatomic) NSNumber *contentLength;	// G=0x337efff9; S=0x337f000d; @synthesize=_contentLength
@property(copy, nonatomic) NSURL *contentURL;	// G=0x337f001d; S=0x337f0031; @synthesize=_contentURL
@property(copy, nonatomic) NSNumber *downloadID;	// G=0x337f0041; S=0x337f0055; @synthesize=_downloadID
@property(copy, nonatomic) NSNumber *downloadState;	// G=0x337f0065; S=0x337f0079; @synthesize=_downloadState
@property(copy, nonatomic) NSError *error;	// G=0x337f0089; S=0x337f009d; @synthesize=_error
@property(copy, nonatomic) NSNumber *progress;	// G=0x337f00ad; S=0x337f00c1; @synthesize=_progress
@property(copy, nonatomic) NSNumber *timeRemaining;	// G=0x337f00d1; S=0x337f00e5; @synthesize=_timeRemaining
+ (id)changesetWithDownloadID:(id)downloadID state:(int)state;	// 0x337efb35
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x337efbc9
// declared property getter: - (id)contentLength;	// 0x337efff9
// declared property getter: - (id)contentURL;	// 0x337f001d
- (id)copyWithZone:(NSZone *)zone;	// 0x337efeed
- (id)copyXPCEncoding;	// 0x337efded
- (void)dealloc;	// 0x337efa6d
// declared property getter: - (id)downloadID;	// 0x337f0041
// declared property getter: - (id)downloadState;	// 0x337f0065
// declared property getter: - (id)error;	// 0x337f0089
// declared property getter: - (id)progress;	// 0x337f00ad
// declared property setter: - (void)setContentLength:(id)length;	// 0x337f000d
// declared property setter: - (void)setContentURL:(id)url;	// 0x337f0031
// declared property setter: - (void)setDownloadID:(id)anId;	// 0x337f0055
// declared property setter: - (void)setDownloadState:(id)state;	// 0x337f0079
// declared property setter: - (void)setError:(id)error;	// 0x337f009d
// declared property setter: - (void)setProgress:(id)progress;	// 0x337f00c1
// declared property setter: - (void)setTimeRemaining:(id)remaining;	// 0x337f00e5
// declared property getter: - (id)timeRemaining;	// 0x337f00d1
@end

