/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library

@class SCRCArgumentHolderPrivate;

__attribute__((visibility("hidden")))
@interface SCRCArgumentHolder : NSObject {
@private
	SCRCArgumentHolderPrivate *_private;	// 4 = 0x4
}
@property(assign) SEL action;	// G=0x315c2c29; S=0x315bb071; converted property
@property(retain) id argument;	// G=0x315bbc31; S=0x315baff5; converted property
@property(retain) id argumentDescription;	// G=0x315c2c45; S=0x315bb08d; converted property
@property(assign) BOOL isRequired;	// G=0x315bbcd9; S=0x315bb0ed; converted property
@property(retain) id option;	// G=0x315bb15d; S=0x315bafa1; converted property
@property(retain) id target;	// G=0x315c2c0d; S=0x315bb055; converted property
- (id)init;	// 0x315baed5
// converted property getter: - (SEL)action;	// 0x315c2c29
// converted property getter: - (id)argument;	// 0x315bbc31
// converted property getter: - (id)argumentDescription;	// 0x315c2c45
- (int)compare:(id)compare;	// 0x315c2c61
- (void)dealloc;	// 0x315bbc4d
- (unsigned)hash;	// 0x315c2cbd
- (BOOL)isEqual:(id)equal;	// 0x315bb109
// converted property getter: - (BOOL)isRequired;	// 0x315bbcd9
// converted property getter: - (id)option;	// 0x315bb15d
- (BOOL)process;	// 0x315bbcf5
// converted property setter: - (void)setAction:(SEL)action;	// 0x315bb071
// converted property setter: - (void)setArgument:(id)argument;	// 0x315baff5
// converted property setter: - (void)setArgumentDescription:(id)description;	// 0x315bb08d
// converted property setter: - (void)setIsRequired:(BOOL)required;	// 0x315bb0ed
// converted property setter: - (void)setOption:(id)option;	// 0x315bafa1
// converted property setter: - (void)setTarget:(id)target;	// 0x315bb055
// converted property getter: - (id)target;	// 0x315c2c0d
@end

