/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMUSymbolOwner;

@interface VMULinkedListEntry : NSObject {
	VMULinkedListEntry *_prev;	// 4 = 0x4
	VMULinkedListEntry *_next;	// 8 = 0x8
	unsigned _size;	// 12 = 0xc
	VMUSymbolOwner *_symbolOwner;	// 16 = 0x10
}
@property(retain) VMULinkedListEntry *next;	// G=0x35785d89; S=0x35785da9; converted property
@property(retain) VMULinkedListEntry *prev;	// G=0x35785d79; S=0x35785d99; converted property
@property(readonly, assign) unsigned size;	// G=0x35785d59; converted property
@property(readonly, retain) VMUSymbolOwner *symbolOwner;	// G=0x35785d69; converted property
+ (id)linkedListEntryWithSymbolOwner:(id)symbolOwner;	// 0x35785ca9
- (id)initWithSymbolOwner:(id)symbolOwner;	// 0x35785ce5
- (void)dealloc;	// 0x35785e49
- (id)description;	// 0x35785db9
// converted property getter: - (id)next;	// 0x35785d89
// converted property getter: - (id)prev;	// 0x35785d79
// converted property setter: - (void)setNext:(id)next;	// 0x35785da9
// converted property setter: - (void)setPrev:(id)prev;	// 0x35785d99
// converted property getter: - (unsigned)size;	// 0x35785d59
// converted property getter: - (id)symbolOwner;	// 0x35785d69
@end
