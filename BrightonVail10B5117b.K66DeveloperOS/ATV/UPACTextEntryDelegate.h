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
@property(copy, nonatomic) id completionHandler;	// G=0x291245; S=0x291259; @synthesize=_completionHandler
@property(retain, nonatomic) NSString *text;	// G=0x291269; S=0x291279; @synthesize=_text
// declared property getter: - (id)completionHandler;	// 0x291245
- (void)dealloc;	// 0x291129
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x291259
// declared property setter: - (void)setText:(id)text;	// 0x291279
// declared property getter: - (id)text;	// 0x291269
- (void)textDidChange:(id)text;	// 0x291189
- (void)textDidEndEditing:(id)text;	// 0x29118d
@end

