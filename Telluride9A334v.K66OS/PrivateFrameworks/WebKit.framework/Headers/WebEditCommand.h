/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebEditCommand : NSObject {
@private
	RefPtr<WebCore::EditCommand> m_command;	// 4 = 0x4
}
+ (id)commandWithEditCommand:(PassRefPtr<WebCore::EditCommand>)editCommand;	// 0x339c43d1
+ (void)initialize;	// 0x339c43cd
- (id)initWithEditCommand:(PassRefPtr<WebCore::EditCommand>)editCommand;	// 0x339c451d
- (id).cxx_construct;	// 0x339c4509
- (void).cxx_destruct;	// 0x339c5029
- (EditCommand *)command;	// 0x339d5551
- (void)dealloc;	// 0x339c4d85
- (void)finalize;	// 0x339d5561
@end

