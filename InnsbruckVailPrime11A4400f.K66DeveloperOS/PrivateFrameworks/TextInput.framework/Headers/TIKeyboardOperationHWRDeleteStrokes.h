/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIKeyboardOperation.h"

@class NSIndexSet;

@interface TIKeyboardOperationHWRDeleteStrokes : TIKeyboardOperation {
	NSIndexSet *_strokes;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSIndexSet *strokes;	// G=0x32a16999; @synthesize=_strokes
+ (id)operationWithStrokes:(id)strokes;	// 0x32a16625
+ (BOOL)supportsSecureCoding;	// 0x32a16621
- (id)initWithCoder:(id)coder;	// 0x32a16701
- (id)initWithStrokes:(id)strokes;	// 0x32a16661
- (void)dealloc;	// 0x32a166b5
- (void)encodeWithCoder:(id)coder;	// 0x32a1685d
- (id)propertiesForDescription;	// 0x32a16959
// declared property getter: - (id)strokes;	// 0x32a16999
@end

