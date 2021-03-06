/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;
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
@property(assign) id<SBJsonStreamParserAdapterDelegate> delegate;	// G=0x452469; S=0x452479; @synthesize
@property(assign) unsigned levelsToSkip;	// G=0x452489; S=0x452499; @synthesize
- (id)init;	// 0x451e4d
- (void)dealloc;	// 0x451ef5
// declared property getter: - (id)delegate;	// 0x452469
// declared property getter: - (unsigned)levelsToSkip;	// 0x452489
- (void)parser:(id)parser found:(id)found;	// 0x452045
- (void)parser:(id)parser foundBoolean:(BOOL)boolean;	// 0x4523c9
- (void)parser:(id)parser foundNumber:(id)number;	// 0x452449
- (void)parser:(id)parser foundObjectKey:(id)key;	// 0x4521f5
- (void)parser:(id)parser foundString:(id)string;	// 0x452459
- (void)parserFoundArrayEnd:(id)end;	// 0x45233d
- (void)parserFoundArrayStart:(id)start;	// 0x4522a1
- (void)parserFoundNull:(id)null;	// 0x452409
- (void)parserFoundObjectEnd:(id)end;	// 0x452215
- (void)parserFoundObjectStart:(id)start;	// 0x452159
- (void)pop;	// 0x451f55
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x452479
// declared property setter: - (void)setLevelsToSkip:(unsigned)skip;	// 0x452499
@end

