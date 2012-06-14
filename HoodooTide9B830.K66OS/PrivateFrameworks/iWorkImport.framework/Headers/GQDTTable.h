/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDTTableModel, GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDTTable : GQDGraphic <GQDNameMappable> {
@private
	GQDTTableModel *mModel;	// 40 = 0x28
	GQDSStyle *mStyle;	// 44 = 0x2c
	BOOL mIsStreamed;	// 48 = 0x30
}
@property(retain) id model;	// G=0x317b6e15; S=0x317b6e45; converted property
@property(retain) id tableStyle;	// G=0x317b6e25; S=0x317b6e85; converted property
+ (const StateSpec *)stateForReading;	// 0x317b6e09
- (void)dealloc;	// 0x317b7111
- (id)defaultVectorStyleForVectorType:(int)vectorType;	// 0x317b6ec5
- (BOOL)isStreamed;	// 0x317b6e35
// converted property getter: - (id)model;	// 0x317b6e15
// converted property setter: - (void)setModel:(id)model;	// 0x317b6e45
// converted property setter: - (void)setTableStyle:(id)style;	// 0x317b6e85
// converted property getter: - (id)tableStyle;	// 0x317b6e25
- (int)walkTableWithGenerator:(Class)generator state:(id)state;	// 0x317b7009
@end
