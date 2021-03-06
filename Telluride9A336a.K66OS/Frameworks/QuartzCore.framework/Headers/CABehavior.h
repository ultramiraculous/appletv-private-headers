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

@class NSString, NSDictionary;

@interface CABehavior : NSObject <NSCoding, NSCopying> {
@private
	void *_attr;	// 4 = 0x4
	unsigned _refcount;	// 8 = 0x8
	unsigned _uid;	// 12 = 0xc
	void *_priv;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x36166b39; S=0x36166b21; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x36166b69; S=0x36166b51; 
@property(copy) NSString *name;	// G=0x36166b99; S=0x36166b81; 
@property(copy) NSDictionary *style;	// G=0x36166b09; S=0x36166af1; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x36166a45
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x361668b1
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x361660e9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36166a75
+ (id)behavior;	// 0x36166ab9
+ (id)defaultValueForKey:(id)key;	// 0x36166a95
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x36166a39
- (id)init;	// 0x361668c5
- (id)initWithCoder:(id)coder;	// 0x36166e29
- (void)_setCARenderBehavior:(Behavior *)behavior;	// 0x36166e71
- (BOOL)allowsWeakReference;	// 0x361660d1
- (id)copyWithZone:(NSZone *)zone;	// 0x36166c61
- (void)dealloc;	// 0x36166f3d
- (id)debugDescription;	// 0x36166bb1
// declared property getter: - (id)delegate;	// 0x36166b39
- (void)encodeWithCoder:(id)coder;	// 0x36166e21
// declared property getter: - (BOOL)isEnabled;	// 0x36166b69
// declared property getter: - (id)name;	// 0x36166b99
- (void)release;	// 0x36166f95
- (id)retain;	// 0x36167105
- (unsigned)retainCount;	// 0x361660c1
- (BOOL)retainWeakReference;	// 0x361670c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36166b21
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x36166b51
// declared property setter: - (void)setName:(id)name;	// 0x36166b81
// declared property setter: - (void)setStyle:(id)style;	// 0x36166af1
- (void)setValue:(id)value forKey:(id)key;	// 0x36166db5
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x36166cdd
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x36166cf1
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x36166e31
// declared property getter: - (id)style;	// 0x36166b09
- (id)valueForKey:(id)key;	// 0x36166ded
- (id)valueForKeyPath:(id)keyPath;	// 0x36166ce9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x36166d6d
@end

