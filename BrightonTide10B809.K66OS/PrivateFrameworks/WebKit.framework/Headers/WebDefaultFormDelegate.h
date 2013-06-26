/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebFormDelegate.h"


@interface WebDefaultFormDelegate : NSObject <WebFormDelegate> {
}
+ (id)sharedFormDelegate;	// 0x365bb2c1
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x365bb31d
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x365bb315
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x365bb311
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x365bb319
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x365bb309
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x365bb30d
@end
