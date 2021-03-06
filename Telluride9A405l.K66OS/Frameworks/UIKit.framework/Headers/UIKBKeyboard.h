/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBShape.h"
#import "UIKBCacheKey.h"
#import "NSCoding.h"

@class NSArray, NSString, NSMutableArray, NSDictionary, NSMutableDictionary;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey> {
	NSString *m_name;	// 60 = 0x3c
	NSString *m_visualStyle;	// 64 = 0x40
	NSString *m_layout;	// 68 = 0x44
	NSMutableArray *m_keyplanes;	// 72 = 0x48
	NSMutableDictionary *m_keyCache;	// 76 = 0x4c
	NSMutableDictionary *m_keysetCache;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x32f7d0b5; 
@property(retain, nonatomic) NSDictionary *keyCache;	// G=0x32f7d335; S=0x32f7d345; @synthesize=m_keyCache
@property(retain, nonatomic) NSArray *keyplanes;	// G=0x32f7d301; S=0x32f7d311; @synthesize=m_keyplanes
@property(retain, nonatomic) NSMutableDictionary *keysetCache;	// G=0x32f7d369; S=0x32f7d379; @synthesize=m_keysetCache
@property(readonly, assign, nonatomic) NSString *layoutName;	// G=0x32f7c3b5; 
@property(retain, nonatomic) NSString *name;	// G=0x32f7d299; S=0x32f7d2a9; @synthesize=m_name
@property(retain, nonatomic) NSString *visualStyle;	// G=0x32f7d2cd; S=0x32f7d2dd; @synthesize=m_visualStyle
+ (id)keyboard;	// 0x32f7c211
- (id)init;	// 0x32f7c259
- (id)initWithCoder:(id)coder;	// 0x32f7c6b9
- (void)addKeyplane:(id)keyplane;	// 0x32f7ce45
// declared property getter: - (id)cacheKey;	// 0x32f7d0b5
- (void)cacheKey:(id)key onKeyplane:(id)keyplane;	// 0x32f7c3fd
- (id)cachedKeysByKeyName:(id)name onKeyplane:(id)keyplane;	// 0x32f7c5a5
- (id)currentKeyplanes;	// 0x32f7d115
- (void)dealloc;	// 0x32f7c301
- (id)description;	// 0x32f7ce65
- (void)encodeWithCoder:(id)coder;	// 0x32f7cb39
- (BOOL)isEqual:(id)equal;	// 0x32f7cbd5
// declared property getter: - (id)keyCache;	// 0x32f7d335
- (id)keyplaneForKey:(id)key;	// 0x32f7d125
- (id)keyplaneWithName:(id)name;	// 0x32f7cd7d
// declared property getter: - (id)keyplanes;	// 0x32f7d301
// declared property getter: - (id)keysetCache;	// 0x32f7d369
- (void)layout;	// 0x32f7cf11
// declared property getter: - (id)layoutName;	// 0x32f7c3b5
- (void)makeLikeOther:(id)other;	// 0x32f7cc81
// declared property getter: - (id)name;	// 0x32f7d299
// declared property setter: - (void)setKeyCache:(id)cache;	// 0x32f7d345
// declared property setter: - (void)setKeyplanes:(id)keyplanes;	// 0x32f7d311
// declared property setter: - (void)setKeysetCache:(id)cache;	// 0x32f7d379
// declared property setter: - (void)setName:(id)name;	// 0x32f7d2a9
// declared property setter: - (void)setVisualStyle:(id)style;	// 0x32f7d2dd
// declared property getter: - (id)visualStyle;	// 0x32f7d2cd
@end

