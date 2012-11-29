/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection, EDReference;

@interface EDPivotArea : NSObject {
	bool mGrandCol;	// 4 = 0x4
	bool mGrandRow;	// 5 = 0x5
	bool mOutline;	// 6 = 0x6
	int mType;	// 8 = 0x8
	EDCollection *mReferences;	// 12 = 0xc
	EDReference *mOffset;	// 16 = 0x10
}
@property(assign) bool grandCol;	// G=0x36bf516d; S=0x36bf5181; converted property
@property(assign) bool grandRow;	// G=0x36bf5149; S=0x36bf515d; converted property
@property(retain) id offset;	// G=0x36bf51d5; S=0x36bf51e5; converted property
@property(assign) bool outline;	// G=0x36bf5191; S=0x36bf51a5; converted property
@property(assign) int type;	// G=0x36bf51b5; S=0x36bf51c5; converted property
+ (id)pivotArea;	// 0x36bf5101
- (id)init;	// 0x36bf4ffd
- (void)dealloc;	// 0x36bf509d
// converted property getter: - (bool)grandCol;	// 0x36bf516d
// converted property getter: - (bool)grandRow;	// 0x36bf5149
// converted property getter: - (id)offset;	// 0x36bf51d5
// converted property getter: - (bool)outline;	// 0x36bf5191
- (id)references;	// 0x36bf5229
// converted property setter: - (void)setGrandCol:(bool)col;	// 0x36bf5181
// converted property setter: - (void)setGrandRow:(bool)row;	// 0x36bf515d
// converted property setter: - (void)setOffset:(id)offset;	// 0x36bf51e5
// converted property setter: - (void)setOutline:(bool)outline;	// 0x36bf51a5
// converted property setter: - (void)setType:(int)type;	// 0x36bf51c5
// converted property getter: - (int)type;	// 0x36bf51b5
@end
