/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library


@interface SSWeakReference : NSObject {
	id _object;	// 4 = 0x4
	unsigned _objectAddress;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) id object;	// G=0x378489ed; 
+ (id)weakReferenceWithObject:(id)object;	// 0x3784898d
- (void)dealloc;	// 0x37848949
- (unsigned)hash;	// 0x37848a01
- (BOOL)isEqual:(id)equal;	// 0x37848a11
// declared property getter: - (id)object;	// 0x378489ed
@end

