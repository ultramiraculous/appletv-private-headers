/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UpdateBufferOnWebThreadDispatcher : NSObject {
@private
	RefPtr<WebCore::SharedBuffer> m_buffer;	// 4 = 0x4
}
- (id)initWithBuffer:(PassRefPtr<WebCore::SharedBuffer>)buffer;	// 0x3429db51
- (id).cxx_construct;	// 0x3429db11
- (void).cxx_destruct;	// 0x3429dbbd
- (void)runAndDispose;	// 0x3429dbed
@end

