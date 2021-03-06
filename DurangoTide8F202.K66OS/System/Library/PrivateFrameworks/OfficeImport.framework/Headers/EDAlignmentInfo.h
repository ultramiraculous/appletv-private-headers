/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
@private
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
@property(assign) int horizontalAlignment;	// G=0x318eb9ed; S=0x319dfe59; converted property
@property(assign) int indent;	// G=0x318eb9fd; S=0x319dfed5; converted property
@property(assign) int textRotation;	// G=0x318ece1d; S=0x319dff2d; converted property
@property(assign, getter=isTextWrapped) bool textWrapped;	// G=0x318eba0d; S=0x319dff01; converted property
@property(assign) int verticalAlignment;	// G=0x318eb991; S=0x319dfea9; converted property
+ (id)alignmentInfo;	// 0x319dfd39
- (id)init;	// 0x319dfd79
- (id)copyWithZone:(NSZone *)zone;	// 0x31ace6b9
- (unsigned)hash;	// 0x31ace68d
// converted property getter: - (int)horizontalAlignment;	// 0x318eb9ed
// converted property getter: - (int)indent;	// 0x318eb9fd
- (BOOL)isEqual:(id)equal;	// 0x319e0915
- (BOOL)isEqualToAlignmentInfo:(id)alignmentInfo;	// 0x319e0969
- (bool)isHorizontalAlignOverridden;	// 0x318eb9dd
- (bool)isIndentOverridden;	// 0x318eddc5
// converted property getter: - (bool)isTextWrapped;	// 0x318eba0d
- (bool)isTextWrappedOverridden;	// 0x318ecfa5
- (bool)isVerticalAlignOverridden;	// 0x318eb981
- (void)setDoNotModify:(bool)modify;	// 0x319dffa5
// converted property setter: - (void)setHorizontalAlignment:(int)alignment;	// 0x319dfe59
// converted property setter: - (void)setIndent:(int)indent;	// 0x319dfed5
// converted property setter: - (void)setTextRotation:(int)rotation;	// 0x319dff2d
// converted property setter: - (void)setTextWrapped:(bool)wrapped;	// 0x319dff01
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x319dfea9
// converted property getter: - (int)textRotation;	// 0x318ece1d
// converted property getter: - (int)verticalAlignment;	// 0x318eb991
@end

