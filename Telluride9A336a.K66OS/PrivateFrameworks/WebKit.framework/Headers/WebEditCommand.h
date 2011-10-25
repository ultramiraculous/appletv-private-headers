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
+ (id)commandWithEditCommand:(PassRefPtr<WebCore::EditCommand>)editCommand;	// 0x364a23d1
+ (void)initialize;	// 0x364a23cd
- (id)initWithEditCommand:(PassRefPtr<WebCore::EditCommand>)editCommand;	// 0x364a251d
- (id).cxx_construct;	// 0x364a2509
- (void).cxx_destruct;	// 0x364a3029
- (EditCommand *)command;	// 0x364b3551
- (void)dealloc;	// 0x364a2d85
- (void)finalize;	// 0x364b3561
@end

