/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UPACTextEntryDelegate : XXUnknownSuperclass <BRTextFieldDelegate> {
	id _completionHandler;	// 4 = 0x4
	NSString *_text;	// 8 = 0x8
}
@property(copy, nonatomic) id completionHandler;	// G=0x28889d; S=0x2888b1; @synthesize=_completionHandler
@property(retain, nonatomic) NSString *text;	// G=0x2888c1; S=0x2888d1; @synthesize=_text
// declared property getter: - (id)completionHandler;	// 0x28889d
- (void)dealloc;	// 0x288781
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x2888b1
// declared property setter: - (void)setText:(id)text;	// 0x2888d1
// declared property getter: - (id)text;	// 0x2888c1
- (void)textDidChange:(id)text;	// 0x2887e1
- (void)textDidEndEditing:(id)text;	// 0x2887e5
@end
