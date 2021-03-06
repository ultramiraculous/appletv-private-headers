/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebPolicyDecisionListener.h"
#import "WebFormSubmissionListener.h"
#import <NSObject.h> // Unknown library


@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
	Frame *m_frame;	// 4 = 0x4
}
+ (void)initialize;	// 0x350450b5
- (id)initWithWebCoreFrame:(Frame *)webCoreFrame;	// 0x350450b9
- (void)continue;	// 0x35081ae1
- (void)dealloc;	// 0x3504616d
- (void)download;	// 0x35081acd
- (void)finalize;	// 0x350819cd
- (void)ignore;	// 0x3504b209
- (void)invalidate;	// 0x350818ed
- (void)receivedPolicyDecision:(int)decision;	// 0x3504527d
- (void)use;	// 0x35045269
@end

