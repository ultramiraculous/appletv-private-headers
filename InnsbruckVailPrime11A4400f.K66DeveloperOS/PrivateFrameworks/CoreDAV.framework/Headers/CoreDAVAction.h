/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import </libobjc.A.h>


@interface CoreDAVAction : NSObject {
	int _action;	// 4 = 0x4
	id _context;	// 8 = 0x8
	id _changeContext;	// 12 = 0xc
}
@property(readonly, assign) int action;	// G=0x30473b01; @synthesize=_action
@property(retain) id changeContext;	// G=0x30473b29; S=0x30473b3d; @synthesize=_changeContext
@property(readonly, assign) id context;	// G=0x30473b15; @synthesize=_context
- (id)initWithAction:(int)action context:(id)context;	// 0x304739e9
// declared property getter: - (int)action;	// 0x30473b01
// declared property getter: - (id)changeContext;	// 0x30473b29
// declared property getter: - (id)context;	// 0x30473b15
- (void)dealloc;	// 0x30473985
- (id)description;	// 0x30473a4d
// declared property setter: - (void)setChangeContext:(id)context;	// 0x30473b3d
@end

