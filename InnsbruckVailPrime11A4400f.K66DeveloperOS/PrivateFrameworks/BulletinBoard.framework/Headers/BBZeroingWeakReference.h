/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import </libobjc.A.h>

@class NSString;

@interface BBZeroingWeakReference : NSObject {
	id _object;	// 4 = 0x4
	NSString *_debug;	// 8 = 0x8
}
@property(readonly, retain) id object;	// G=0x30240fed; converted property
+ (id)referenceWithObject:(id)object;	// 0x30240dc9
- (id)init;	// 0x30240eb1
- (id)initWithObject:(id)object;	// 0x30240e05
- (void)dealloc;	// 0x30240f8d
- (id)description;	// 0x30240ec5
- (unsigned)hash;	// 0x30240f65
- (BOOL)isEqual:(id)equal;	// 0x30240efd
// converted property getter: - (id)object;	// 0x30240fed
@end

