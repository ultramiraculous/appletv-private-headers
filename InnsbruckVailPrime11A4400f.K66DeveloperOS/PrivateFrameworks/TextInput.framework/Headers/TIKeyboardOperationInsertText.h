/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIKeyboardOperation.h"

@class NSString;

@interface TIKeyboardOperationInsertText : TIKeyboardOperation {
	NSString *_textInsertion;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *textInsertion;	// G=0x32a15745; @synthesize=_textInsertion
+ (id)operationWithTextInsertion:(id)textInsertion;	// 0x32a1552d
+ (BOOL)supportsSecureCoding;	// 0x32a15529
- (id)initWithCoder:(id)coder;	// 0x32a15615
- (id)initWithTextInsertion:(id)textInsertion;	// 0x32a155c1
- (void)dealloc;	// 0x32a15575
- (void)encodeWithCoder:(id)coder;	// 0x32a156a5
- (id)propertiesForDescription;	// 0x32a15705
// declared property getter: - (id)textInsertion;	// 0x32a15745
@end

