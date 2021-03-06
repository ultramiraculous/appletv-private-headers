/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSMutableArray;

@interface ML3EntityReplacer : NSObject {
	CFDictionaryRef _propertyToIndexPair;	// 4 = 0x4
	NSMutableArray *_statements;	// 8 = 0x8
}
@property(readonly, assign, nonatomic, getter=isOpen) BOOL open;	// G=0x305e75d5; 
- (id)initWithEntityClass:(Class)entityClass properties:(id)properties databaseConnection:(id)connection;	// 0x305e6a49
- (void).cxx_destruct;	// 0x305e7929
- (void)bindDouble:(double)aDouble forProperty:(id)property;	// 0x305e7425
- (void)bindInt:(int)int forProperty:(id)property;	// 0x305e73f1
- (void)bindNullForProperty:(id)property;	// 0x305e73c1
- (void)bindPersistentID:(long long)anId;	// 0x305e75ed
- (void)clearBindings;	// 0x305e7761
- (void)close;	// 0x305e7831
- (void)dealloc;	// 0x305e6a09
// declared property getter: - (BOOL)isOpen;	// 0x305e75d5
- (BOOL)perform;	// 0x305e745d
- (void)statementForProperty:(id)property usingBlock:(id)block;	// 0x305e717d
@end

