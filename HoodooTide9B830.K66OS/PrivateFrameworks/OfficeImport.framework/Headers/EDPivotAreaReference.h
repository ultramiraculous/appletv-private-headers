/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject {
@private
	bool mByPosition;	// 4 = 0x4
	bool mRelative;	// 5 = 0x5
	bool mSelected;	// 6 = 0x6
	unsigned mFieldId;	// 8 = 0x8
	unsigned mCount;	// 12 = 0xc
}
@property(assign) bool byPosition;	// G=0x31335791; S=0x313357a1; converted property
@property(assign) unsigned count;	// G=0x31335811; S=0x31335821; converted property
@property(assign) unsigned fieldId;	// G=0x313357f1; S=0x31335801; converted property
@property(assign) bool relative;	// G=0x313357b1; S=0x313357c1; converted property
@property(assign) bool selected;	// G=0x313357d1; S=0x313357e1; converted property
+ (id)pivotAreaReference;	// 0x31335a21
- (id)init;	// 0x313359a9
// converted property getter: - (bool)byPosition;	// 0x31335791
// converted property getter: - (unsigned)count;	// 0x31335811
// converted property getter: - (unsigned)fieldId;	// 0x313357f1
// converted property getter: - (bool)relative;	// 0x313357b1
// converted property getter: - (bool)selected;	// 0x313357d1
// converted property setter: - (void)setByPosition:(bool)position;	// 0x313357a1
// converted property setter: - (void)setCount:(unsigned)count;	// 0x31335821
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x31335801
// converted property setter: - (void)setRelative:(bool)relative;	// 0x313357c1
// converted property setter: - (void)setSelected:(bool)selected;	// 0x313357e1
@end

