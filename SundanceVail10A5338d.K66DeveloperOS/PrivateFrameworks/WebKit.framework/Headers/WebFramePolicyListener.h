/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebPolicyDecisionListener.h"
#import "WebFormSubmissionListener.h"


@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
	Frame *m_frame;	// 4 = 0x4
}
+ (void)initialize;	// 0x3165eac1
- (id)initWithWebCoreFrame:(Frame *)webCoreFrame;	// 0x3165eac5
- (void)continue;	// 0x316a30c1
- (void)dealloc;	// 0x316607a1
- (void)download;	// 0x316a30ad
- (void)finalize;	// 0x316a2f99
- (void)ignore;	// 0x316a3099
- (void)invalidate;	// 0x316a2eb9
- (void)receivedPolicyDecision:(int)decision;	// 0x3165ec11
- (void)use;	// 0x3165ebfd
@end
