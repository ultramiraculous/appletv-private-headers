/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation {
	id _badgeValue;	// 60 = 0x3c
	NSString *_bundleIdentifier;	// 64 = 0x40
}
@property(retain) id badgeValue;	// G=0x3272a63d; S=0x3272a651; @synthesize=_badgeValue
@property(retain) NSString *bundleIdentifier;	// G=0x3272a675; S=0x3272a689; @synthesize=_bundleIdentifier
// declared property getter: - (id)badgeValue;	// 0x3272a63d
// declared property getter: - (id)bundleIdentifier;	// 0x3272a675
- (void)dealloc;	// 0x3272a475
- (void)run;	// 0x3272a4d5
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x3272a651
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x3272a689
- (id)uniqueKey;	// 0x3272a631
@end

