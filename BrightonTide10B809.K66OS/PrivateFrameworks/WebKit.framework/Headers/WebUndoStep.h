/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"


@interface WebUndoStep : NSObject {
	RefPtr<WebCore::UndoStep> m_step;	// 4 = 0x4
}
+ (void)initialize;	// 0x365c0a2d
+ (id)stepWithUndoStep:(PassRefPtr<WebCore::UndoStep>)undoStep;	// 0x365c0b15
- (id)initWithUndoStep:(PassRefPtr<WebCore::UndoStep>)undoStep;	// 0x365c0a31
- (id).cxx_construct;	// 0x365c0c8d
- (void).cxx_destruct;	// 0x365c0c61
- (void)dealloc;	// 0x365c0a95
- (void)finalize;	// 0x365c0ae9
- (UndoStep *)step;	// 0x365c0c51
@end
