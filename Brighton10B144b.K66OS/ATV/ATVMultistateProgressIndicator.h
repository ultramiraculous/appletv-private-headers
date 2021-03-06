/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVMultistateProgressIndicator : BRControl {
	id _currentStateID;	// 84 = 0x54
	NSMutableDictionary *_states;	// 88 = 0x58
	float _value;	// 92 = 0x5c
}
@property(retain) id state;	// G=0x149e15; S=0x149d15; converted property
@property(assign) float value;	// G=0x149e91; S=0x149e4d; converted property
- (id)init;	// 0x149b69
- (void)dealloc;	// 0x149be5
- (void)drawRect:(CGRect)rect;	// 0x149ea1
- (void)setProgressIndicatorImageBatch:(id)batch forState:(id)state;	// 0x149c49
// converted property setter: - (void)setState:(id)state;	// 0x149d15
// converted property setter: - (void)setValue:(float)value;	// 0x149e4d
// converted property getter: - (id)state;	// 0x149e15
// converted property getter: - (float)value;	// 0x149e91
@end

