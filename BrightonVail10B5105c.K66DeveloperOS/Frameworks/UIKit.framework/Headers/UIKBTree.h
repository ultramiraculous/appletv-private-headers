/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray, NSMutableDictionary;

@interface UIKBTree : NSObject <NSCopying> {
	int type;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	NSMutableDictionary *properties;	// 12 = 0xc
	NSMutableArray *subtrees;	// 16 = 0x10
	NSMutableDictionary *cache;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL acceptsShiftLock;	// G=0x348035a1; 
@property(retain, nonatomic) NSMutableDictionary *cache;	// G=0x3463dfe9; S=0x3463d579; @synthesize
@property(retain) id clientVariantActionName;	// G=0x34669a2d; S=0x34642619; converted property
@property(retain) id clientVariantRepresentedString;	// G=0x34669a01; S=0x346425c5; converted property
@property(assign) int clipCorners;	// G=0x348ccd6d; S=0x34650a19; converted property
@property(assign) BOOL disabled;	// G=0x3464161d; S=0x348ccc6d; converted property
@property(assign) int displayRowHint;	// G=0x3464b461; S=0x34641555; converted property
@property(retain) id displayString;	// G=0x3463f965; S=0x3463f671; converted property
@property(assign) int displayType;	// G=0x346415d5; S=0x348cc8e1; converted property
@property(assign) int displayTypeHint;	// G=0x3463f62d; S=0x3463f579; converted property
@property(assign) CGRect frame;	// G=0x3463d44d; S=0x348cb431; converted property
@property(retain) id geometry;	// G=0x348cb35d; S=0x348cb3c5; converted property
@property(assign) BOOL ghost;	// G=0x34641dbd; S=0x348ccb99; converted property
@property(assign) int highlightedVariantIndex;	// G=0x348cc9f1; S=0x348cca35; converted property
@property(assign) int interactionType;	// G=0x3463e161; S=0x348cc93d; converted property
@property(assign) BOOL isClientVariantOverride;	// G=0x34643f65; S=0x348ccb41; converted property
@property(assign) BOOL isGenerated;	// G=0x348cc50d; S=0x348cc52d; converted property
@property(readonly, assign, nonatomic) BOOL modifiesKeyplane;	// G=0x34803561; 
@property(retain, nonatomic) NSString *name;	// G=0x3463c809; S=0x348cd1c9; @synthesize
@property(retain) id overrideDisplayString;	// G=0x34642831; S=0x3464253d; converted property
@property(assign) CGRect paddedFrame;	// G=0x34642b05; S=0x348cb4a9; converted property
@property(retain, nonatomic) NSMutableDictionary *properties;	// G=0x3463c7f9; S=0x3463d531; @synthesize
@property(assign) int rendering;	// G=0x346438c1; S=0x348ccae9; converted property
@property(retain) id representedString;	// G=0x34644e35; S=0x346e1eed; converted property
@property(retain) id shape;	// G=0x3463d4e1; S=0x3463d545; converted property
@property(assign) BOOL shouldSkipCandidateSelection;	// G=0x346439c5; S=0x348cc489; converted property
@property(assign) int splitMode;	// G=0x348cccd1; S=0x348ccd15; converted property
@property(retain, nonatomic) NSMutableArray *subtrees;	// G=0x3463c631; S=0x348cd1d9; @synthesize
@property(assign) int textAlignment;	// G=0x3464b4ad; S=0x348cca91; converted property
@property(assign, nonatomic) int type;	// G=0x3463c7e9; S=0x348cd1b9; @synthesize
@property(retain) id variantPopupBias;	// G=0x348ccc41; S=0x348ccbf1; converted property
@property(assign) int variantType;	// G=0x34664da5; S=0x348cc995; converted property
@property(assign) BOOL visible;	// G=0x34641b29; S=0x3463ea5d; converted property
@property(assign) int visualStyle;	// G=0x3463c1f1; S=0x3463c4cd; converted property
+ (id)key;	// 0x348cd0d9
+ (id)keyboard;	// 0x348cd149
+ (id)mergeStringForKeyName:(id)keyName;	// 0x348cc7f5
+ (id)shapesForControlKeyShapes:(id)controlKeyShapes options:(int)options;	// 0x3463e1a5
+ (BOOL)shouldSkipCacheString:(id)string;	// 0x34640599
+ (id)stringForType:(int)type;	// 0x348caed9
+ (id)treeOfType:(int)type;	// 0x348ca4fd
+ (id)uniqueName;	// 0x348ca181
- (id)initWithType:(int)type;	// 0x348ca411
- (id)initWithType:(int)type withName:(id)name withProperties:(id)properties withSubtrees:(id)subtrees withCache:(id)cache;	// 0x3463ae55
- (id)_cacheRootNameForKey:(id)key;	// 0x348cb591
- (BOOL)_needsScaling;	// 0x3463cfd5
- (int)_variantType;	// 0x34664de1
// declared property getter: - (BOOL)acceptsShiftLock;	// 0x348035a1
- (id)alternateKeyplaneName;	// 0x34700b89
- (id)attributeSet:(BOOL)set;	// 0x3463d2b9
- (id)autolocalizedKeyCacheIterator;	// 0x346403e5
- (BOOL)avoidsLanguageIndicator;	// 0x348ccdb5
- (BOOL)behavesAsShiftKey;	// 0x34642755
- (BOOL)boolForProperty:(id)property;	// 0x3463c83d
// declared property getter: - (id)cache;	// 0x3463dfe9
- (id)cacheDisplayString;	// 0x346508d5
- (void)cacheKey:(id)key;	// 0x348cb635
- (id)cachedKeysByKeyName:(id)name;	// 0x3463f485
- (void)clearTransientCaches;	// 0x348cbf49
// converted property getter: - (id)clientVariantActionName;	// 0x34669a2d
// converted property getter: - (id)clientVariantRepresentedString;	// 0x34669a01
// converted property getter: - (int)clipCorners;	// 0x348ccd6d
- (id)componentName;	// 0x3466f959
- (id)copyWithZone:(NSZone *)zone;	// 0x348ca5d1
- (void)dealloc;	// 0x348ca545
- (id)description;	// 0x348cace5
// converted property getter: - (BOOL)disabled;	// 0x3464161d
// converted property getter: - (int)displayRowHint;	// 0x3464b461
// converted property getter: - (id)displayString;	// 0x3463f965
// converted property getter: - (int)displayType;	// 0x346415d5
// converted property getter: - (int)displayTypeHint;	// 0x3463f62d
- (id)findLeftMoreKey;	// 0x3463dffd
- (id)firstCachedKeyWithName:(id)name;	// 0x3463dfa9
// converted property getter: - (CGRect)frame;	// 0x3463d44d
- (id)geometries;	// 0x348cbb71
- (id)geometriesOrderedByPosition;	// 0x348cc19d
// converted property getter: - (id)geometry;	// 0x348cb35d
- (id)geometrySet:(BOOL)set;	// 0x3463d129
// converted property getter: - (BOOL)ghost;	// 0x34641dbd
// converted property getter: - (int)highlightedVariantIndex;	// 0x348cc9f1
- (int)indexOfSubtree:(id)subtree;	// 0x348cb2c9
- (int)intForProperty:(id)property;	// 0x3463f519
// converted property getter: - (int)interactionType;	// 0x3463e161
// converted property getter: - (BOOL)isClientVariantOverride;	// 0x34643f65
- (BOOL)isDuplicateOfTree:(id)tree;	// 0x348cab6d
- (BOOL)isEqualToTree:(id)tree;	// 0x348cab11
// converted property getter: - (BOOL)isGenerated;	// 0x348cc50d
- (BOOL)isHashed;	// 0x3466ed75
- (BOOL)isLeafType;	// 0x348cb325
- (BOOL)isLetters;	// 0x34642051
- (BOOL)isSameAsTree:(id)tree;	// 0x348ca765
- (BOOL)isShiftKeyPlaneChooser;	// 0x34644f61
- (BOOL)isShiftKeyplane;	// 0x3463c819
- (id)keyAttributes;	// 0x348cbd5d
- (id)keyForString:(id)string;	// 0x348cb735
- (id)keySet;	// 0x3463d055
- (id)keyplaneForKey:(id)key;	// 0x348cb8c1
- (id)keys;	// 0x34641b79
- (id)keysByKeyName:(id)name;	// 0x348cc1d1
- (id)keysOrderedByPosition;	// 0x348cc18d
- (id)keysOrderedByPositionWithoutZip;	// 0x34644f89
- (id)keysWithString:(id)string;	// 0x348cc2fd
- (id)layoutName;	// 0x346484d9
- (id)localizationKey;	// 0x34640621
- (BOOL)looksLike:(id)like;	// 0x3466f8e5
- (BOOL)looksLikeShiftAlternate;	// 0x34640b0d
// declared property getter: - (BOOL)modifiesKeyplane;	// 0x34803561
// declared property getter: - (id)name;	// 0x3463c809
- (id)nameFromAttributes;	// 0x348ca1bd
- (BOOL)noLanguageIndicator;	// 0x348cc465
- (BOOL)notUseCandidateSelection;	// 0x34643ae1
- (id)numberForProperty:(id)property;	// 0x34641529
// converted property getter: - (id)overrideDisplayString;	// 0x34642831
// converted property getter: - (CGRect)paddedFrame;	// 0x34642b05
// declared property getter: - (id)properties;	// 0x3463c7f9
- (id)recursiveDescription;	// 0x348cadc9
- (void)removeClientVariantActionInfo;	// 0x34642591
- (BOOL)renderAsStringKey;	// 0x348cd0c1
- (BOOL)renderAsStringKeyExcludingPunctuation:(BOOL)punctuation;	// 0x34642141
// converted property getter: - (int)rendering;	// 0x346438c1
// converted property getter: - (id)representedString;	// 0x34644e35
- (void)setAttributes:(id)attributes;	// 0x348cba5d
// declared property setter: - (void)setCache:(id)cache;	// 0x3463d579
// converted property setter: - (void)setClientVariantActionName:(id)name;	// 0x34642619
// converted property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x346425c5
// converted property setter: - (void)setClipCorners:(int)corners;	// 0x34650a19
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x348ccc6d
// converted property setter: - (void)setDisplayRowHint:(int)hint;	// 0x34641555
// converted property setter: - (void)setDisplayString:(id)string;	// 0x3463f671
// converted property setter: - (void)setDisplayType:(int)type;	// 0x348cc8e1
// converted property setter: - (void)setDisplayTypeHint:(int)hint;	// 0x3463f579
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x348cb431
- (void)setFrameOnly:(CGRect)only;	// 0x348cb51d
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x348cb3c5
// converted property setter: - (void)setGhost:(BOOL)ghost;	// 0x348ccb99
// converted property setter: - (void)setHighlightedVariantIndex:(int)index;	// 0x348cca35
// converted property setter: - (void)setInteractionType:(int)type;	// 0x348cc93d
// converted property setter: - (void)setIsClientVariantOverride:(BOOL)override;	// 0x348ccb41
// converted property setter: - (void)setIsGenerated:(BOOL)generated;	// 0x348cc52d
// declared property setter: - (void)setName:(id)name;	// 0x348cd1c9
- (BOOL)setObject:(id)object forProperty:(id)property;	// 0x348cac91
// converted property setter: - (void)setOverrideDisplayString:(id)string;	// 0x3464253d
// converted property setter: - (void)setPaddedFrame:(CGRect)frame;	// 0x348cb4a9
// declared property setter: - (void)setProperties:(id)properties;	// 0x3463d531
// converted property setter: - (void)setRendering:(int)rendering;	// 0x348ccae9
// converted property setter: - (void)setRepresentedString:(id)string;	// 0x346e1eed
// converted property setter: - (void)setShape:(id)shape;	// 0x3463d545
// converted property setter: - (void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;	// 0x348cc489
// converted property setter: - (void)setSplitMode:(int)mode;	// 0x348ccd15
// declared property setter: - (void)setSubtrees:(id)subtrees;	// 0x348cd1d9
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x348cca91
// declared property setter: - (void)setType:(int)type;	// 0x348cd1b9
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x348ccbf1
// converted property setter: - (void)setVariantType:(int)type;	// 0x348cc995
// converted property setter: - (void)setVisible:(BOOL)visible;	// 0x3463ea5d
// converted property setter: - (void)setVisualStyle:(int)style;	// 0x3463c4cd
// converted property getter: - (id)shape;	// 0x3463d4e1
- (id)shiftAlternateKeyplaneName;	// 0x3463c8bd
- (BOOL)shouldCacheKey;	// 0x348ccf8d
// converted property getter: - (BOOL)shouldSkipCandidateSelection;	// 0x346439c5
// converted property getter: - (int)splitMode;	// 0x348cccd1
- (id)stringForProperty:(id)property;	// 0x3463c905
- (id)subtreeAtIndexPath:(id)indexPath withPosition:(int)position;	// 0x348cabd5
- (id)subtreeWithName:(id)name;	// 0x3463c931
- (id)subtreeWithName:(id)name rows:(id)rows;	// 0x348cb049
- (id)subtreeWithType:(int)type;	// 0x348caf75
// declared property getter: - (id)subtrees;	// 0x3463c631
- (BOOL)subtreesAreOrdered;	// 0x348cb341
- (id)subtreesWithProperty:(id)property value:(id)value;	// 0x348cb185
- (BOOL)supportsType:(int)type;	// 0x3463c645
// converted property getter: - (int)textAlignment;	// 0x3464b4ad
// declared property getter: - (int)type;	// 0x3463c7e9
- (id)unhashedName;	// 0x348ca3f1
- (void)updateDictationKeyOnNumberPads:(BOOL)pads;	// 0x348cc5a5
- (void)updateMoreAndInternationalKeysWithOptions:(int)options;	// 0x3463dcf1
- (void)updateVariantTypeForActions:(unsigned)actions;	// 0x348cc885
- (BOOL)usesAdaptiveKeys;	// 0x348cc4e5
- (BOOL)usesAutoShift;	// 0x348cc43d
- (BOOL)usesKeyCharging;	// 0x346458f9
- (id)variantDisplayString;	// 0x348cce29
// converted property getter: - (id)variantPopupBias;	// 0x348ccc41
// converted property getter: - (int)variantType;	// 0x34664da5
// converted property getter: - (BOOL)visible;	// 0x34641b29
// converted property getter: - (int)visualStyle;	// 0x3463c1f1
- (void)zipAttributes;	// 0x348cb311
- (void)zipGeometries:(BOOL)geometries attributes:(BOOL)attributes;	// 0x3463cab1
- (void)zipGeometrySet;	// 0x3463ca9d
@end

