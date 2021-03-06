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
+ (id)sharedFormDelegate;	// 0x367942c1
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x3679431d
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x36794315
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x36794311
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x36794319
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x36794309
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x3679430d
@end

