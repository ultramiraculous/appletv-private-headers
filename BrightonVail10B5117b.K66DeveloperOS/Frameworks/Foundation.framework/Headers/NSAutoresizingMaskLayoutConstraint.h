/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSLayoutConstraint.h"


@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint {
}
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier constant:(float)constant;	// 0x31aa0da9
+ (id)constraintsWithAutoresizingMask:(unsigned)autoresizingMask subitem:(id)subitem frame:(CGRect)frame superitem:(id)superitem bounds:(CGRect)bounds;	// 0x31aa0115
- (int)_constraintType;	// 0x31aa0f4d
- (id)_viewForAutoresizingMask;	// 0x31aa0cad
- (id)descriptionAccessory;	// 0x31aa0cfd
@end

