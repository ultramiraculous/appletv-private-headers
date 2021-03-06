/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"

@class CAValueFunction, CALayer, NSString;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	NSString *_name;	// 4 = 0x4
	CALayer *_layer;	// 8 = 0x8
	CAValueFunction *_function;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
	void *_priv;	// 20 = 0x14
}
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32b9219d; S=0x32b921ad; 
@property(retain) CAValueFunction *function;	// G=0x32b92219; S=0x32b92229; 
@property(retain) CALayer *layer;	// G=0x32b921c5; S=0x32b921d5; 
@property(copy) NSString *name;	// G=0x32b92149; S=0x32b92159; 
+ (id)defaultValueForKey:(id)key;	// 0x32b92105
+ (id)forceField;	// 0x32b920cd
- (id)init;	// 0x32b92109
- (id)initWithCoder:(id)coder;	// 0x32b925a9
- (Object *)CA_copyRenderValue;	// 0x32b922e5
- (id)copyWithZone:(NSZone *)zone;	// 0x32b92421
- (void)dealloc;	// 0x32b9226d
- (void)encodeWithCoder:(id)coder;	// 0x32b924dd
// declared property getter: - (id)function;	// 0x32b92219
// declared property getter: - (BOOL)isEnabled;	// 0x32b9219d
// declared property getter: - (id)layer;	// 0x32b921c5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32b924cd
// declared property getter: - (id)name;	// 0x32b92149
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32b921ad
// declared property setter: - (void)setFunction:(id)function;	// 0x32b92229
// declared property setter: - (void)setLayer:(id)layer;	// 0x32b921d5
// declared property setter: - (void)setName:(id)name;	// 0x32b92159
- (void)setValue:(id)value forKey:(id)key;	// 0x32b923d5
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x32b92415
- (id)valueForKey:(id)key;	// 0x32b923a1
- (id)valueForKeyPath:(id)keyPath;	// 0x32b9240d
@end

