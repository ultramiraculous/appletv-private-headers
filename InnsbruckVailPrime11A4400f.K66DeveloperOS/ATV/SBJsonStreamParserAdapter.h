/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;
@protocol SBJsonStreamParserAdapterDelegate;

@interface SBJsonStreamParserAdapter : XXUnknownSuperclass <SBJsonStreamParserDelegate> {
	id<SBJsonStreamParserAdapterDelegate> delegate;	// 4 = 0x4
	unsigned levelsToSkip;	// 8 = 0x8
	unsigned depth;	// 12 = 0xc
	NSMutableArray *array;	// 16 = 0x10
	NSMutableDictionary *dict;	// 20 = 0x14
	NSMutableArray *keyStack;	// 24 = 0x18
	NSMutableArray *stack;	// 28 = 0x1c
	int currentType;	// 32 = 0x20
}
@property(assign) id<SBJsonStreamParserAdapterDelegate> delegate;	// G=0x518af1; S=0x518b05; @synthesize
@property(assign) unsigned levelsToSkip;	// G=0x518b1d; S=0x518b31; @synthesize
- (id)init;	// 0x5184cd
- (void)dealloc;	// 0x518579
// declared property getter: - (id)delegate;	// 0x518af1
// declared property getter: - (unsigned)levelsToSkip;	// 0x518b1d
- (void)parser:(id)parser found:(id)found;	// 0x5186c9
- (void)parser:(id)parser foundBoolean:(BOOL)boolean;	// 0x518a51
- (void)parser:(id)parser foundNumber:(id)number;	// 0x518ad1
- (void)parser:(id)parser foundObjectKey:(id)key;	// 0x518881
- (void)parser:(id)parser foundString:(id)string;	// 0x518ae1
- (void)parserFoundArrayEnd:(id)end;	// 0x5189c5
- (void)parserFoundArrayStart:(id)start;	// 0x51892d
- (void)parserFoundNull:(id)null;	// 0x518a91
- (void)parserFoundObjectEnd:(id)end;	// 0x5188a1
- (void)parserFoundObjectStart:(id)start;	// 0x5187e9
- (void)pop;	// 0x5185dd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x518b05
// declared property setter: - (void)setLevelsToSkip:(unsigned)skip;	// 0x518b31
@end

