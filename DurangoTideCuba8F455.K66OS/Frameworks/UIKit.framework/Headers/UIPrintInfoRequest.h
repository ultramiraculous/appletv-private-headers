/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrintInfoRequest : NSObject {
@private
	PKPrinter *_printer;	// 4 = 0x4
	int _requestState;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
}
@property(copy, nonatomic) id completionHandler;	// G=0x30348f5d; S=0x30349ba9; @synthesize=_completionHandler
@property(assign, nonatomic) int requestState;	// G=0x30348f6d; S=0x30348f7d; @synthesize=_requestState
+ (id)requestInfoForPrinter:(id)printer;	// 0x303491cd
// declared property getter: - (id)completionHandler;	// 0x30348f5d
- (void)dealloc;	// 0x30349b4d
- (void)requestPrintInfo;	// 0x30349cd1
// declared property getter: - (int)requestState;	// 0x30348f6d
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x30349ba9
// declared property setter: - (void)setRequestState:(int)state;	// 0x30348f7d
@end
