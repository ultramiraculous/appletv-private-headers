/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

@interface PDComment : NSObject {
	CGPoint mPosition;	// 4 = 0x4
	NSString *mText;	// 12 = 0xc
	unsigned mAuthorId;	// 16 = 0x10
	NSString *mDate;	// 20 = 0x14
	unsigned mIndex;	// 24 = 0x18
}
@property(assign) unsigned authorId;	// G=0x34c61929; S=0x34c61939; converted property
@property(retain) id date;	// G=0x34c61949; S=0x34c61959; converted property
@property(assign) unsigned index;	// G=0x34c61995; S=0x34c619a5; converted property
@property(assign) CGPoint position;	// G=0x34c618ad; S=0x34c618c5; converted property
@property(retain) id text;	// G=0x34c618d9; S=0x34c618e9; converted property
- (id)init;	// 0x34c617f9
- (id).cxx_construct;	// 0x34c619b5
// converted property getter: - (unsigned)authorId;	// 0x34c61929
// converted property getter: - (id)date;	// 0x34c61949
- (void)dealloc;	// 0x34c61849
// converted property getter: - (unsigned)index;	// 0x34c61995
// converted property getter: - (CGPoint)position;	// 0x34c618ad
// converted property setter: - (void)setAuthorId:(unsigned)anId;	// 0x34c61939
// converted property setter: - (void)setDate:(id)date;	// 0x34c61959
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x34c619a5
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x34c618c5
// converted property setter: - (void)setText:(id)text;	// 0x34c618e9
// converted property getter: - (id)text;	// 0x34c618d9
@end

