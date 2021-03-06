/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDComment : NSObject {
@private
	CGPoint mPosition;	// 4 = 0x4
	NSString *mText;	// 12 = 0xc
	unsigned mAuthorId;	// 16 = 0x10
	NSString *mDate;	// 20 = 0x14
	unsigned mIndex;	// 24 = 0x18
}
@property(assign) unsigned authorId;	// G=0x345cc091; S=0x345cc0a1; converted property
@property(retain) id date;	// G=0x345cc0b1; S=0x345cc129; converted property
@property(assign) unsigned index;	// G=0x345cc0c1; S=0x345cc0d1; converted property
@property(assign) CGPoint position;	// G=0x345cc051; S=0x345cc069; converted property
@property(retain) id text;	// G=0x345cc081; S=0x345cc161; converted property
- (id)init;	// 0x345cc0e1
// converted property getter: - (unsigned)authorId;	// 0x345cc091
// converted property getter: - (id)date;	// 0x345cc0b1
- (void)dealloc;	// 0x345cc199
// converted property getter: - (unsigned)index;	// 0x345cc0c1
// converted property getter: - (CGPoint)position;	// 0x345cc051
// converted property setter: - (void)setAuthorId:(unsigned)anId;	// 0x345cc0a1
// converted property setter: - (void)setDate:(id)date;	// 0x345cc129
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x345cc0d1
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x345cc069
// converted property setter: - (void)setText:(id)text;	// 0x345cc161
// converted property getter: - (id)text;	// 0x345cc081
@end

