/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBJsonStreamParserAdapterDelegate.h"


@interface SBJsonStreamParserAccumulator : XXUnknownSuperclass <SBJsonStreamParserAdapterDelegate> {
	id value;	// 4 = 0x4
}
@property(readonly, assign) id value;	// G=0x460315; @synthesize
- (void)dealloc;	// 0x460279
- (void)parser:(id)parser foundArray:(id)array;	// 0x4602c5
- (void)parser:(id)parser foundObject:(id)object;	// 0x4602ed
// declared property getter: - (id)value;	// 0x460315
@end

