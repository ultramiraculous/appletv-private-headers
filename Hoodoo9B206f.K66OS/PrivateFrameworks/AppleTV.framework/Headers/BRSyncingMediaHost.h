/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRRemoteMediaHost.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRSyncingMediaHost : BRRemoteMediaHost {
@private
	NSString *_hostID;	// 48 = 0x30
}
@property(readonly, retain) NSString *hostID;	// G=0x3673a189; converted property
+ (id)syncingMediaHostWithHostInfo:(id)hostInfo;	// 0x36739fdd
- (id)init;	// 0x3673a01d
- (id)initWithCoder:(id)coder;	// 0x3673a09d
- (id)initWithHostInfo:(id)hostInfo;	// 0x3673a05d
- (void)dealloc;	// 0x3673a13d
// converted property getter: - (id)hostID;	// 0x3673a189
- (id)hostname;	// 0x3673a1c9
- (void)setState:(id)state;	// 0x3673a221
@end

