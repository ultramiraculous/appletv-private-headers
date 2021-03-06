/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"

@class CPListItem;

@interface CPParagraph : CPRegion {
	BOOL noIndentation;	// 68 = 0x44
	BOOL below;	// 69 = 0x45
	unsigned alignment;	// 72 = 0x48
	BOOL hasDropCap;	// 76 = 0x4c
	id flowProperties;	// 80 = 0x50
	CPListItem *listItem;	// 84 = 0x54
	float preformatWidth;	// 88 = 0x58
}
@property(assign) unsigned alignment;	// G=0x3383697d; S=0x3383698d; converted property
@property(assign) BOOL below;	// G=0x3383696d; S=0x3383695d; converted property
@property(retain) id flowProperties;	// G=0x33836539; S=0x33836549; converted property
@property(assign) BOOL hasDropCap;	// G=0x3383670d; S=0x3383671d; converted property
@property(assign) BOOL isImageRegion;	// G=0x338366e5; S=0x33836669; converted property
@property(assign) BOOL isTextRegion;	// G=0x338365dd; S=0x338365e1; converted property
@property(retain, nonatomic) CPListItem *listItem;	// G=0x33836c0d; S=0x33836c1d; @synthesize
@property(assign) BOOL noIndentation;	// G=0x338366fd; S=0x338366ed; converted property
- (id)init;	// 0x3383644d
- (void)accept:(id)accept;	// 0x33836559
// converted property getter: - (unsigned)alignment;	// 0x3383697d
// converted property getter: - (BOOL)below;	// 0x3383696d
- (id)copyWithZone:(NSZone *)zone;	// 0x338364fd
- (void)dealloc;	// 0x338364b1
- (void)explode;	// 0x3383672d
// converted property getter: - (id)flowProperties;	// 0x33836539
// converted property getter: - (BOOL)hasDropCap;	// 0x3383670d
- (unsigned)index;	// 0x338365a1
- (BOOL)isBoxRegion;	// 0x3383665d
- (BOOL)isGraphicalRegion;	// 0x33836661
// converted property getter: - (BOOL)isImageRegion;	// 0x338366e5
- (BOOL)isListItemRegion;	// 0x33836589
- (BOOL)isParagraphRegion;	// 0x33836571
- (BOOL)isPreformattedWithUnitWidth:(float *)unitWidth;	// 0x3383699d
- (BOOL)isRowRegion;	// 0x33836665
- (BOOL)isShapeRegion;	// 0x338366e9
// converted property getter: - (BOOL)isTextRegion;	// 0x338365dd
// declared property getter: - (id)listItem;	// 0x33836c0d
// converted property getter: - (BOOL)noIndentation;	// 0x338366fd
- (CGRect)reducedBounds;	// 0x33836875
- (float)selectionBottom;	// 0x338368f9
// converted property setter: - (void)setAlignment:(unsigned)alignment;	// 0x3383698d
// converted property setter: - (void)setBelow:(BOOL)below;	// 0x3383695d
// converted property setter: - (void)setFlowProperties:(id)properties;	// 0x33836549
// converted property setter: - (void)setHasDropCap:(BOOL)cap;	// 0x3383671d
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x33836669
// converted property setter: - (void)setIsTextRegion:(BOOL)region;	// 0x338365e1
// declared property setter: - (void)setListItem:(id)item;	// 0x33836c1d
// converted property setter: - (void)setNoIndentation:(BOOL)indentation;	// 0x338366ed
@end

