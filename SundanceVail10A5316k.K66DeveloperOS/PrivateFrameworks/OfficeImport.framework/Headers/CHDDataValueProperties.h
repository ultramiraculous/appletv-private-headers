/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class OADGraphicProperties, CHDDataLabel, CHDMarker;

__attribute__((visibility("hidden")))
@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
@private
	CHDDataLabel *mDataLabel;	// 4 = 0x4
	CHDMarker *mMarker;	// 8 = 0x8
	unsigned mDataValueIndex;	// 12 = 0xc
	OADGraphicProperties *mGraphicProperties;	// 16 = 0x10
}
@property(retain) id dataLabel;	// G=0x311f72b9; S=0x31187271; converted property
@property(assign) unsigned dataValueIndex;	// G=0x3118508d; S=0x31179a59; converted property
@property(retain) id graphicProperties;	// G=0x3117a665; S=0x31179bbd; converted property
@property(retain) id marker;	// G=0x311f72c9; S=0x3117a069; converted property
+ (id)dataValueProperties;	// 0x31187229
- (id)init;	// 0x31179a15
// converted property getter: - (id)dataLabel;	// 0x311f72b9
// converted property getter: - (unsigned)dataValueIndex;	// 0x3118508d
- (void)dealloc;	// 0x31187605
// converted property getter: - (id)graphicProperties;	// 0x3117a665
- (int)key;	// 0x3117a0ad
// converted property getter: - (id)marker;	// 0x311f72c9
// converted property setter: - (void)setDataLabel:(id)label;	// 0x31187271
// converted property setter: - (void)setDataValueIndex:(unsigned)index;	// 0x31179a59
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x31179bbd
// converted property setter: - (void)setMarker:(id)marker;	// 0x3117a069
- (id)shallowCopyWithIndex:(int)index;	// 0x3118717d
@end

