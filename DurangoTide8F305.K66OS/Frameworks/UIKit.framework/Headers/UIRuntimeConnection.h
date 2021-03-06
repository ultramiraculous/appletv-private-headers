/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeConnection : NSObject <NSCoding> {
@private
	id source;	// 4 = 0x4
	id destination;	// 8 = 0x8
	NSString *label;	// 12 = 0xc
}
@property(retain) id destination;	// G=0x3217df0d; S=0x3217df71; converted property
@property(retain) NSString *label;	// G=0x3217df1d; S=0x3217df35; converted property
@property(retain) id source;	// G=0x3217defd; S=0x3217dfad; converted property
- (id)initWithCoder:(id)coder;	// 0x3217e065
- (void)connect;	// 0x3217df2d
- (void)connectForSimulator;	// 0x3217df31
- (void)dealloc;	// 0x3217e111
// converted property getter: - (id)destination;	// 0x3217df0d
- (void)encodeWithCoder:(id)coder;	// 0x3217dfe9
// converted property getter: - (id)label;	// 0x3217df1d
// converted property setter: - (void)setDestination:(id)destination;	// 0x3217df71
// converted property setter: - (void)setLabel:(id)label;	// 0x3217df35
// converted property setter: - (void)setSource:(id)source;	// 0x3217dfad
// converted property getter: - (id)source;	// 0x3217defd
@end

