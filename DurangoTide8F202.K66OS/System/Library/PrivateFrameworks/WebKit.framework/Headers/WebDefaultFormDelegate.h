/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebFormDelegate.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultFormDelegate : NSObject <WebFormDelegate> {
}
+ (id)sharedFormDelegate;	// 0x32c424e5
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x32c424cd
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x32c424c1
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x32c424bd
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x32c424c5
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x32c424b5
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x32c424b9
@end

