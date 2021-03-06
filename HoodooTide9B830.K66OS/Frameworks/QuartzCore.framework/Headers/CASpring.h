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

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString *_name;	// 4 = 0x4
	CALayer *_layerA;	// 8 = 0x8
	CALayer *_layerB;	// 12 = 0xc
	CGPoint _attachmentPointA;	// 16 = 0x10
	CGPoint _attachmentPointB;	// 24 = 0x18
	CAValueFunction *_function;	// 32 = 0x20
	float _stiffness;	// 36 = 0x24
	float _damping;	// 40 = 0x28
	float _restLength;	// 44 = 0x2c
	BOOL _enabled;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	void *_priv;	// 56 = 0x38
}
@property(assign) CGPoint attachmentPointA;	// G=0x36cd5f01; S=0x36cd5f19; 
@property(assign) CGPoint attachmentPointB;	// G=0x36cd5f2d; S=0x36cd5f45; 
@property(assign) float damping;	// G=0x36cd5f79; S=0x36cd5f89; 
@property(assign) id delegate;	// G=0x36cd5fc9; S=0x36cd5fd9; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x36cd5eb5; S=0x36cd5ec5; 
@property(retain) CAValueFunction *function;	// G=0x36cd5fb9; S=0x36cd60c1; 
@property(retain) CALayer *layerA;	// G=0x36cd5ee1; S=0x36cd6031; 
@property(retain) CALayer *layerB;	// G=0x36cd5ef1; S=0x36cd6079; 
@property(copy) NSString *name;	// G=0x36cd5ea5; S=0x36cd5fe9; 
@property(assign) float restLength;	// G=0x36cd5f99; S=0x36cd5fa9; 
@property(assign) float stiffness;	// G=0x36cd5f59; S=0x36cd5f69; 
+ (id)defaultValueForKey:(id)key;	// 0x36cd5ea1
+ (id)spring;	// 0x36cd64e1
- (id)init;	// 0x36cd6519
- (id)initWithCoder:(id)coder;	// 0x36cd65dd
- (Object *)CA_copyRenderValue;	// 0x36cd68ed
// declared property getter: - (CGPoint)attachmentPointA;	// 0x36cd5f01
// declared property getter: - (CGPoint)attachmentPointB;	// 0x36cd5f2d
- (id)copyWithZone:(NSZone *)zone;	// 0x36cd6109
// declared property getter: - (float)damping;	// 0x36cd5f79
- (void)dealloc;	// 0x36cd6a91
// declared property getter: - (id)delegate;	// 0x36cd5fc9
- (void)encodeWithCoder:(id)coder;	// 0x36cd6279
// declared property getter: - (id)function;	// 0x36cd5fb9
// declared property getter: - (BOOL)isEnabled;	// 0x36cd5eb5
// declared property getter: - (id)layerA;	// 0x36cd5ee1
// declared property getter: - (id)layerB;	// 0x36cd5ef1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36cd6269
// declared property getter: - (id)name;	// 0x36cd5ea5
// declared property getter: - (float)restLength;	// 0x36cd5f99
// declared property setter: - (void)setAttachmentPointA:(CGPoint)a;	// 0x36cd5f19
// declared property setter: - (void)setAttachmentPointB:(CGPoint)b;	// 0x36cd5f45
// declared property setter: - (void)setDamping:(float)damping;	// 0x36cd5f89
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36cd5fd9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x36cd5ec5
// declared property setter: - (void)setFunction:(id)function;	// 0x36cd60c1
// declared property setter: - (void)setLayerA:(id)a;	// 0x36cd6031
// declared property setter: - (void)setLayerB:(id)b;	// 0x36cd6079
// declared property setter: - (void)setName:(id)name;	// 0x36cd5fe9
// declared property setter: - (void)setRestLength:(float)length;	// 0x36cd5fa9
// declared property setter: - (void)setStiffness:(float)stiffness;	// 0x36cd5f69
- (void)setValue:(id)value forKey:(id)key;	// 0x36cd6881
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x36cd686d
// declared property getter: - (float)stiffness;	// 0x36cd5f59
- (id)valueForKey:(id)key;	// 0x36cd68b9
- (id)valueForKeyPath:(id)keyPath;	// 0x36cd6879
@end

