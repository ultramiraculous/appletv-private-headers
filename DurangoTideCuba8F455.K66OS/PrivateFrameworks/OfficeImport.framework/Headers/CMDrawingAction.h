/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CMDrawingAction : NSObject {
@private
	int _type;	// 4 = 0x4
	id _value;	// 8 = 0x8
	float _floatValue;	// 12 = 0xc
}
@property(readonly, assign) float floatValue;	// G=0x32b9fd05; converted property
@property(readonly, assign) int type;	// G=0x32b81545; converted property
@property(readonly, retain) id value;	// G=0x32b81555; converted property
- (id)initWithType:(int)type andFloatValue:(float)value;	// 0x32b9f991
- (id)initWithType:(int)type andValue:(id)value;	// 0x32b175b5
- (void)dealloc;	// 0x32b81a55
- (id)description;	// 0x32cc5fad
// converted property getter: - (float)floatValue;	// 0x32b9fd05
// converted property getter: - (int)type;	// 0x32b81545
// converted property getter: - (id)value;	// 0x32b81555
@end

