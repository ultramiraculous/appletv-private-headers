/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIKeyboardOperation.h"

@class NSString;

@interface TIKeyboardOperationInsertTextAfterSelection : TIKeyboardOperation {
	NSString *_textInsertion;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *textInsertion;	// G=0x32a16611; @synthesize=_textInsertion
+ (id)operationWithTextInsertion:(id)textInsertion;	// 0x32a163f9
+ (BOOL)supportsSecureCoding;	// 0x32a163f5
- (id)initWithCoder:(id)coder;	// 0x32a164e1
- (id)initWithTextInsertion:(id)textInsertion;	// 0x32a16441
- (void)dealloc;	// 0x32a16495
- (void)encodeWithCoder:(id)coder;	// 0x32a16571
- (id)propertiesForDescription;	// 0x32a165d1
// declared property getter: - (id)textInsertion;	// 0x32a16611
@end

