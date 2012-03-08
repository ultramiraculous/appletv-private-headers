/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, CALayer, CAValueFunction;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString *_name;	// 4 = 0x4
	CALayer *_layer;	// 8 = 0x8
	CAValueFunction *_function;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
	void *_priv;	// 20 = 0x14
}
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x31b39a35; S=0x31b39a45; 
@property(retain) CAValueFunction *function;	// G=0x31b39a71; S=0x31b39f55; 
@property(retain) CALayer *layer;	// G=0x31b39a61; S=0x31b39f9d; 
@property(copy) NSString *name;	// G=0x31b39a25; S=0x31b39fe5; 
+ (id)defaultValueForKey:(id)key;	// 0x31b39a21
+ (id)forceField;	// 0x31b39ac1
- (id)init;	// 0x31b39a81
- (id)initWithCoder:(id)coder;	// 0x31b39af9
- (Object *)CA_copyRenderValue;	// 0x31b39e31
- (id)copyWithZone:(NSZone *)zone;	// 0x31b39d09
- (void)dealloc;	// 0x31b39ee1
- (void)encodeWithCoder:(id)coder;	// 0x31b39c25
// declared property getter: - (id)function;	// 0x31b39a71
// declared property getter: - (BOOL)isEnabled;	// 0x31b39a35
// declared property getter: - (id)layer;	// 0x31b39a61
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31b39cf9
// declared property getter: - (id)name;	// 0x31b39a25
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x31b39a45
// declared property setter: - (void)setFunction:(id)function;	// 0x31b39f55
// declared property setter: - (void)setLayer:(id)layer;	// 0x31b39f9d
// declared property setter: - (void)setName:(id)name;	// 0x31b39fe5
- (void)setValue:(id)value forKey:(id)key;	// 0x31b39dc5
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x31b39db1
- (id)valueForKey:(id)key;	// 0x31b39dfd
- (id)valueForKeyPath:(id)keyPath;	// 0x31b39dbd
@end
