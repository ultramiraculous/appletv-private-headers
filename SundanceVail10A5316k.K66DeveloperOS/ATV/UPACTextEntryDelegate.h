/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRTextFieldDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UPACTextEntryDelegate : XXUnknownSuperclass <BRTextFieldDelegate> {
	id _completionHandler;	// 4 = 0x4
	NSString *_text;	// 8 = 0x8
}
@property(copy, nonatomic) id completionHandler;	// G=0x25b71d; S=0x25b731; @synthesize=_completionHandler
@property(retain, nonatomic) NSString *text;	// G=0x25b741; S=0x25b751; @synthesize=_text
// declared property getter: - (id)completionHandler;	// 0x25b71d
- (void)dealloc;	// 0x25b601
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x25b731
// declared property setter: - (void)setText:(id)text;	// 0x25b751
// declared property getter: - (id)text;	// 0x25b741
- (void)textDidChange:(id)text;	// 0x25b661
- (void)textDidEndEditing:(id)text;	// 0x25b665
@end

