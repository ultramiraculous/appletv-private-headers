/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"


@interface XPCMachSendRight : NSObject <NSCoding> {
	unsigned _sendRight;	// 4 = 0x4
}
@property(readonly, assign) unsigned sendRight;	// G=0x36c90961; converted property
+ (id)wrapSendRight:(unsigned)right;	// 0x36c90871
- (id)initWithCoder:(id)coder;	// 0x36c90a45
- (void)dealloc;	// 0x36c90911
- (void)encodeWithCoder:(id)coder;	// 0x36c90971
// converted property getter: - (unsigned)sendRight;	// 0x36c90961
@end

