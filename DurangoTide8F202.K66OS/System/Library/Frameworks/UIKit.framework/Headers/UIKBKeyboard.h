/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKBShape.h"
#import "UIKit-Structs.h"
#import "UIKBCacheKey.h"

@class NSMutableArray, NSDictionary, NSMutableDictionary, NSArray, NSString;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey> {
	NSString *m_name;	// 60 = 0x3c
	NSString *m_visualStyle;	// 64 = 0x40
	NSString *m_layout;	// 68 = 0x44
	NSMutableArray *m_keyplanes;	// 72 = 0x48
	NSMutableDictionary *m_keyCache;	// 76 = 0x4c
	NSMutableDictionary *m_keysetCache;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x3081d0f5; 
@property(retain, nonatomic) NSDictionary *keyCache;	// G=0x30598011; S=0x306701a9; @synthesize=m_keyCache
@property(retain, nonatomic) NSArray *keyplanes;	// G=0x3059f2f1; S=0x306700f5; @synthesize=m_keyplanes
@property(retain, nonatomic) NSMutableDictionary *keysetCache;	// G=0x3081d0e5; S=0x3081dd35; @synthesize=m_keysetCache
@property(readonly, assign, nonatomic) NSString *layoutName;	// G=0x3067345d; 
@property(retain, nonatomic) NSString *name;	// G=0x305b82ed; S=0x3066f971; @synthesize=m_name
@property(retain, nonatomic) NSString *visualStyle;	// G=0x305b7691; S=0x3066f999; @synthesize=m_visualStyle
+ (id)keyboard;	// 0x3081d5d5
- (id)init;	// 0x3066f831
- (id)initWithCoder:(id)coder;	// 0x3081d615
- (void)addKeyplane:(id)keyplane;	// 0x3081d205
// declared property getter: - (id)cacheKey;	// 0x3081d0f5
- (void)cacheKey:(id)key onKeyplane:(id)keyplane;	// 0x3081d3a9
- (id)cachedKeysByKeyName:(id)name onKeyplane:(id)keyplane;	// 0x30670959
- (id)currentKeyplanes;	// 0x3081d0d5
- (void)dealloc;	// 0x3081d531
- (id)description;	// 0x3081d15d
- (void)encodeWithCoder:(id)coder;	// 0x3081d31d
// declared property getter: - (id)keyCache;	// 0x30598011
- (id)keyplaneForKey:(id)key;	// 0x3081dbb9
- (id)keyplaneWithName:(id)name;	// 0x3067069d
// declared property getter: - (id)keyplanes;	// 0x3059f2f1
// declared property getter: - (id)keysetCache;	// 0x3081d0e5
- (void)layout;	// 0x3081da29
// declared property getter: - (id)layoutName;	// 0x3067345d
- (void)makeLikeOther:(id)other;	// 0x3081d225
// declared property getter: - (id)name;	// 0x305b82ed
// declared property setter: - (void)setKeyCache:(id)cache;	// 0x306701a9
// declared property setter: - (void)setKeyplanes:(id)keyplanes;	// 0x306700f5
// declared property setter: - (void)setKeysetCache:(id)cache;	// 0x3081dd35
// declared property setter: - (void)setName:(id)name;	// 0x3066f971
// declared property setter: - (void)setVisualStyle:(id)style;	// 0x3066f999
// declared property getter: - (id)visualStyle;	// 0x305b7691
@end
