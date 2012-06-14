/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKBShape.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIKBCacheKey.h"
#import "NSCopying.h"

@class NSArray, UIKBAttributeList, NSString;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey> {
	NSString *m_name;	// 64 = 0x40
	NSString *m_representedString;	// 68 = 0x44
	NSString *m_displayString;	// 72 = 0x48
	NSString *m_displayType;	// 76 = 0x4c
	NSString *m_interactionType;	// 80 = 0x50
	NSString *m_variantType;	// 84 = 0x54
	UIKBAttributeList *m_attributes;	// 88 = 0x58
	unsigned m_displayTypeHint;	// 92 = 0x5c
	NSString *m_displayRowHint;	// 96 = 0x60
	NSArray *m_variantKeys;	// 100 = 0x64
	NSString *m_overrideDisplayString;	// 104 = 0x68
	NSString *m_clientVariantRepresentedString;	// 108 = 0x6c
	NSString *m_clientVariantActionName;	// 112 = 0x70
	BOOL m_visible;	// 116 = 0x74
	BOOL m_ghost;	// 117 = 0x75
	int m_splitMode;	// 120 = 0x78
	NSArray *m_flicks;	// 124 = 0x7c
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x3037905d; S=0x30378845; @synthesize=m_attributes
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x30378e2d; 
@property(copy, nonatomic) NSString *clientVariantActionName;	// G=0x3037915d; S=0x30379171; @synthesize=m_clientVariantActionName
@property(copy, nonatomic) NSString *clientVariantRepresentedString;	// G=0x30379139; S=0x3037914d; @synthesize=m_clientVariantRepresentedString
@property(assign, nonatomic) BOOL disabled;	// G=0x30378ad9; S=0x30378b25; 
@property(retain, nonatomic) NSString *displayRowHint;	// G=0x303790d1; S=0x303790e1; @synthesize=m_displayRowHint
@property(copy, nonatomic) NSString *displayString;	// G=0x30378fcd; S=0x30378fe1; @synthesize=m_displayString
@property(copy, nonatomic) NSString *displayType;	// G=0x30378ff1; S=0x30379005; @synthesize=m_displayType
@property(assign, nonatomic) unsigned displayTypeHint;	// G=0x303790b1; S=0x303790c1; @synthesize=m_displayTypeHint
@property(retain, nonatomic) NSArray *flicks;	// G=0x30379181; S=0x30379191; @synthesize=m_flicks
@property(assign, nonatomic) BOOL hidden;	// G=0x30378801; S=0x30378825; 
@property(copy, nonatomic) NSString *interactionType;	// G=0x30379015; S=0x30379029; @synthesize=m_interactionType
@property(readonly, assign, nonatomic) BOOL isClientVariantOverride;	// G=0x30378da5; 
@property(assign, nonatomic) BOOL isGhost;	// G=0x30379091; S=0x303790a1; @synthesize=m_ghost
@property(copy, nonatomic) NSString *name;	// G=0x30378f85; S=0x30378f99; @synthesize=m_name
@property(copy, nonatomic) NSString *overrideDisplayString;	// G=0x30379115; S=0x30379129; @synthesize=m_overrideDisplayString
@property(copy, nonatomic) NSString *rendering;	// G=0x30378c19; S=0x30378c45; 
@property(copy, nonatomic) NSString *representedString;	// G=0x30378fa9; S=0x30378fbd; @synthesize=m_representedString
@property(assign, nonatomic) int splitMode;	// G=0x303791a1; S=0x303791b1; @synthesize=m_splitMode
@property(assign) int textAlignment;	// G=0x30378cc1; S=0x30378d29; converted property
@property(copy, nonatomic) NSString *tint;	// G=0x30378b71; S=0x30378b9d; 
@property(copy, nonatomic) NSArray *variantKeys;	// G=0x303790f1; S=0x30379105; @synthesize=m_variantKeys
@property(retain) id variantPopupBias;	// G=0x30378aad; S=0x30378a31; converted property
@property(copy, nonatomic) NSString *variantType;	// G=0x30379039; S=0x3037904d; @synthesize=m_variantType
@property(assign, nonatomic) BOOL visible;	// G=0x30379071; S=0x30379081; @synthesize=m_visible
+ (id)key;	// 0x30377de5
+ (id)keyWithKey:(id)key;	// 0x30377e2d
- (id)init;	// 0x30378175
- (id)initWithCoder:(id)coder;	// 0x303784d5
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10;	// 0x303781c9
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10 ghost:(BOOL)ghost;	// 0x30378241
// declared property getter: - (id)attributes;	// 0x3037905d
- (BOOL)behavesAsShiftKey;	// 0x30378f31
// declared property getter: - (id)cacheKey;	// 0x30378e2d
// declared property getter: - (id)clientVariantActionName;	// 0x3037915d
// declared property getter: - (id)clientVariantRepresentedString;	// 0x30379139
- (id)copyWithZone:(NSZone *)zone;	// 0x3037878d
- (void)dealloc;	// 0x303783a9
- (id)description;	// 0x3037879d
// declared property getter: - (BOOL)disabled;	// 0x30378ad9
// declared property getter: - (id)displayRowHint;	// 0x303790d1
// declared property getter: - (id)displayString;	// 0x30378fcd
// declared property getter: - (id)displayType;	// 0x30378ff1
// declared property getter: - (unsigned)displayTypeHint;	// 0x303790b1
- (void)encodeWithCoder:(id)coder;	// 0x30378671
// declared property getter: - (id)flicks;	// 0x30379181
// declared property getter: - (BOOL)hidden;	// 0x30378801
// declared property getter: - (id)interactionType;	// 0x30379015
// declared property getter: - (BOOL)isClientVariantOverride;	// 0x30378da5
// declared property getter: - (BOOL)isGhost;	// 0x30379091
- (void)mergeAttributes:(id)attributes;	// 0x30378885
// declared property getter: - (id)name;	// 0x30378f85
// declared property getter: - (id)overrideDisplayString;	// 0x30379115
- (void)removeClientVariantActionInfo;	// 0x30378df9
// declared property getter: - (id)rendering;	// 0x30378c19
// declared property getter: - (id)representedString;	// 0x30378fa9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x30378845
// declared property setter: - (void)setClientVariantActionName:(id)name;	// 0x30379171
// declared property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x3037914d
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x30378b25
// declared property setter: - (void)setDisplayRowHint:(id)hint;	// 0x303790e1
// declared property setter: - (void)setDisplayString:(id)string;	// 0x30378fe1
// declared property setter: - (void)setDisplayType:(id)type;	// 0x30379005
// declared property setter: - (void)setDisplayTypeHint:(unsigned)hint;	// 0x303790c1
// declared property setter: - (void)setFlicks:(id)flicks;	// 0x30379191
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x30378825
// declared property setter: - (void)setInteractionType:(id)type;	// 0x30379029
// declared property setter: - (void)setIsGhost:(BOOL)ghost;	// 0x303790a1
// declared property setter: - (void)setName:(id)name;	// 0x30378f99
// declared property setter: - (void)setOverrideDisplayString:(id)string;	// 0x30379129
// declared property setter: - (void)setRendering:(id)rendering;	// 0x30378c45
// declared property setter: - (void)setRepresentedString:(id)string;	// 0x30378fbd
// declared property setter: - (void)setSplitMode:(int)mode;	// 0x303791b1
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x30378d29
// declared property setter: - (void)setTint:(id)tint;	// 0x30378b9d
// declared property setter: - (void)setVariantKeys:(id)keys;	// 0x30379105
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x30378a31
// declared property setter: - (void)setVariantType:(id)type;	// 0x3037904d
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x30379081
// declared property getter: - (int)splitMode;	// 0x303791a1
// converted property getter: - (int)textAlignment;	// 0x30378cc1
// declared property getter: - (id)tint;	// 0x30378b71
- (id)variantDisplayString;	// 0x303788cd
// declared property getter: - (id)variantKeys;	// 0x303790f1
// converted property getter: - (id)variantPopupBias;	// 0x30378aad
// declared property getter: - (id)variantType;	// 0x30379039
// declared property getter: - (BOOL)visible;	// 0x30379071
@end
