/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDLayoutObject.h"

@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
	int mType;	// 4 = 0x4
	int mPresetType;	// 8 = 0x8
	NSMutableArray *mAdjustments;	// 12 = 0xc
}
@property(assign) int presetType;	// G=0x37140e59; S=0x37140e69; converted property
@property(assign) int type;	// G=0x37140e39; S=0x37140e49; converted property
- (id)init;	// 0x37140d89
- (void)addAdjustment:(id)adjustment;	// 0x37140e89
- (id)adjustments;	// 0x37140e79
- (void)dealloc;	// 0x37140ded
// converted property getter: - (int)presetType;	// 0x37140e59
// converted property setter: - (void)setPresetType:(int)type;	// 0x37140e69
// converted property setter: - (void)setType:(int)type;	// 0x37140e49
// converted property getter: - (int)type;	// 0x37140e39
@end
