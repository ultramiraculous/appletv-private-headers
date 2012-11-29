/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
	int mHorizontalAlignment;	// 4 = 0x4
	int mVerticalAlignment;	// 8 = 0x8
	int mIndent;	// 12 = 0xc
	int mTextRotation;	// 16 = 0x10
	bool mTextWrapped;	// 20 = 0x14
	bool mHorizontalAlignOverridden;	// 21 = 0x15
	bool mVerticalAlignOverridden;	// 22 = 0x16
	bool mIndentOverridden;	// 23 = 0x17
	bool mTextWrappedOveridden;	// 24 = 0x18
	bool mDoNotModify;	// 25 = 0x19
}
@property(assign) int horizontalAlignment;	// G=0x33a0ffc5; S=0x339ed6d1; converted property
@property(assign) int indent;	// G=0x33a113a5; S=0x339ed74d; converted property
@property(assign) int textRotation;	// G=0x33a119b9; S=0x339ed7bd; converted property
@property(assign, getter=isTextWrapped) bool textWrapped;	// G=0x33a113b5; S=0x339ed785; converted property
@property(assign) int verticalAlignment;	// G=0x33a11355; S=0x339ed715; converted property
+ (id)alignmentInfo;	// 0x339ed5b9
- (id)init;	// 0x339ed601
- (id)copyWithZone:(NSZone *)zone;	// 0x33b7a551
- (unsigned)hash;	// 0x33b7a575
// converted property getter: - (int)horizontalAlignment;	// 0x33a0ffc5
// converted property getter: - (int)indent;	// 0x33a113a5
- (BOOL)isEqual:(id)equal;	// 0x339ee679
- (BOOL)isEqualToAlignmentInfo:(id)alignmentInfo;	// 0x339ee6d5
- (bool)isHorizontalAlignOverridden;	// 0x33a0ffb1
- (bool)isIndentOverridden;	// 0x33a1b09d
// converted property getter: - (bool)isTextWrapped;	// 0x33a113b5
- (bool)isTextWrappedOverridden;	// 0x33a11ae1
- (bool)isVerticalAlignOverridden;	// 0x33a11341
- (void)setDoNotModify:(bool)modify;	// 0x339ed865
// converted property setter: - (void)setHorizontalAlignment:(int)alignment;	// 0x339ed6d1
// converted property setter: - (void)setIndent:(int)indent;	// 0x339ed74d
// converted property setter: - (void)setTextRotation:(int)rotation;	// 0x339ed7bd
// converted property setter: - (void)setTextWrapped:(bool)wrapped;	// 0x339ed785
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x339ed715
// converted property getter: - (int)textRotation;	// 0x33a119b9
// converted property getter: - (int)verticalAlignment;	// 0x33a11355
@end
