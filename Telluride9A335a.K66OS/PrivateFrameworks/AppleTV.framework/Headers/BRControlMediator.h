/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, BRControl;

@interface BRControlMediator : NSObject {
@private
	NSString *_identifier;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	BRControl *_preview;	// 12 = 0xc
	BOOL _active;	// 16 = 0x10
}
@property(assign) BOOL active;	// G=0x34265915; S=0x342658b9; converted property
@property(retain) BRControl *control;	// G=0x342659a9; S=0x34265925; converted property
@property(retain) NSString *identifier;	// G=0x342658a9; S=0x34265869; converted property
@property(retain) id previewControl;	// G=0x34265a3d; S=0x342659b9; converted property
+ (id)mediator;	// 0x34265755
+ (id)mediatorWithControl:(id)control identifier:(id)identifier;	// 0x3426579d
- (id)init;	// 0x34265711
// converted property getter: - (BOOL)active;	// 0x34265915
// converted property getter: - (id)control;	// 0x342659a9
- (void)dealloc;	// 0x342657f5
// converted property getter: - (id)identifier;	// 0x342658a9
// converted property getter: - (id)previewControl;	// 0x34265a3d
// converted property setter: - (void)setActive:(BOOL)active;	// 0x342658b9
// converted property setter: - (void)setControl:(id)control;	// 0x34265925
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x34265869
// converted property setter: - (void)setPreviewControl:(id)control;	// 0x342659b9
@end
