/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDPane : NSObject {
@private
	double mXSplitPosition;	// 4 = 0x4
	double mYSplitPosition;	// 12 = 0xc
	EDReference *mTopLeftCell;	// 20 = 0x14
	int mActivePane;	// 24 = 0x18
}
@property(assign) int activePane;	// G=0x32d02015; S=0x32afc4e1; converted property
@property(retain) id topLeftCell;	// G=0x32d02005; S=0x32afc519; converted property
@property(assign) double xSplitPosition;	// G=0x32d01fe5; S=0x32afc4f1; converted property
@property(assign) double ySplitPosition;	// G=0x32d01ff5; S=0x32afc505; converted property
+ (id)pane;	// 0x32afc441
- (id)init;	// 0x32afc481
// converted property getter: - (int)activePane;	// 0x32d02015
- (void)dealloc;	// 0x32b13b4d
// converted property setter: - (void)setActivePane:(int)pane;	// 0x32afc4e1
// converted property setter: - (void)setTopLeftCell:(id)cell;	// 0x32afc519
// converted property setter: - (void)setXSplitPosition:(double)position;	// 0x32afc4f1
// converted property setter: - (void)setYSplitPosition:(double)position;	// 0x32afc505
// converted property getter: - (id)topLeftCell;	// 0x32d02005
// converted property getter: - (double)xSplitPosition;	// 0x32d01fe5
// converted property getter: - (double)ySplitPosition;	// 0x32d01ff5
@end

