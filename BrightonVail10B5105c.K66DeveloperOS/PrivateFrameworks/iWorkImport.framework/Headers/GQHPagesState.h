/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQHState.h"
#import "iWorkImport-Structs.h"
#import "GQWrapPointGenerator.h"

@class GQHStyle, GQDWPContainerHint, GQDSStyle, GQWrapPointSet;

@interface GQHPagesState : GQHState <GQWrapPointGenerator> {
	CFDictionaryRef mFloatingDrawables;	// 108 = 0x6c
	int mMode;	// 112 = 0x70
	CFDictionaryRef mHeaders;	// 116 = 0x74
	CFDictionaryRef mFooters;	// 120 = 0x78
	CFArrayRef mSectionStyles;	// 124 = 0x7c
	CFDictionaryRef mPageWrapPointsMap;	// 128 = 0x80
	int mCurrentPageIndex;	// 132 = 0x84
	int mStartPageAt;	// 136 = 0x88
	int mStartPageAtValueChangedAtPageIndex;	// 140 = 0x8c
	GQHStyle *mCurrentLayoutStyle;	// 144 = 0x90
	GQHStyle *mCurrentParagraphStyle;	// 148 = 0x94
	GQDSStyle *mCurrentBaseParagraphStyle;	// 152 = 0x98
	CFStringRef mCurrentCachedParagraphClass;	// 156 = 0x9c
	GQHStyle *mCurrentSpanStyle;	// 160 = 0xa0
	GQDSStyle *mCurrentBaseSpanStyle;	// 164 = 0xa4
	CFStringRef mCurrentCachedSpanClass;	// 168 = 0xa8
	GQWrapPointSet *mCurrentWrapPointSet;	// 172 = 0xac
	CGRect mLastFrame;	// 176 = 0xb0
	BOOL mMappingFloatingDrawables;	// 192 = 0xc0
	BOOL mStartedPage;	// 193 = 0xc1
	BOOL mStartedSection;	// 194 = 0xc2
	BOOL mDidInsertPageHeader;	// 195 = 0xc3
	BOOL mDidFindContainerHint;	// 196 = 0xc4
	GQDWPContainerHint *mLastInsertedContainerHint;	// 200 = 0xc8
	CFArrayRef mAttachmentPositions;	// 204 = 0xcc
	long mAttachmentIdCounter;	// 208 = 0xd0
	long mFirstAttachmentId;	// 212 = 0xd4
	BOOL mSplitNextAttachment;	// 216 = 0xd8
	GQDSStyle *mCurrentSectionStyle;	// 220 = 0xdc
	BOOL mHasLayoutDrawables;	// 224 = 0xe0
	int mCurrentHintPageIndex;	// 228 = 0xe4
	int mCurrentHintColumnIndex;	// 232 = 0xe8
	BOOL mIsMappingHeadersFooters;	// 236 = 0xec
	int mHeaderFooterPageNumber;	// 240 = 0xf0
	CFDictionaryRef mDrawablePagesOrderToCssZOrderClassMap;	// 244 = 0xf4
	CGSize mPageSize;	// 248 = 0xf8
	CFArrayRef mTocHrefStack;	// 256 = 0x100
	BOOL mCurrentFrameHasSandbagFloats;	// 260 = 0x104
	int mProgressiveIndex;	// 264 = 0x108
}
@property(assign) int currentPageIndex;	// G=0x32cfd175; S=0x32cfd185; converted property
@property(assign) BOOL hasLayoutDrawables;	// G=0x32cfe759; S=0x32cfe749; converted property
@property(assign) BOOL isMappingHeadersFooters;	// G=0x32cfe779; S=0x32cfe769; converted property
@property(assign) int mode;	// G=0x32cfcd6d; S=0x32cfcd7d; converted property
@property(assign) CGSize pageSize;	// G=0x32cfe955; S=0x32cfe96d; converted property
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x32cfc921
- (id).cxx_construct;	// 0x32cfeb55
- (void)addAttachmentPosition:(double)position;	// 0x32cfd54d
- (void)addFloatingDrawable:(id)drawable;	// 0x32cfcba5
- (void)addSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages;	// 0x32cfcf0d
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x32cfe821
- (void)addWrapPoint:(id)point;	// 0x32cfe16d
- (BOOL)allowInlineWrap;	// 0x32cfeb3d
- (void)beginWrapPointSet;	// 0x32cfe099
- (void)clearFloatingDrawables;	// 0x32cfcc8d
- (void)clearWrapPoints;	// 0x32cfe4b9
- (void)closeStateLayoutElementsAndStyles;	// 0x32cfee95
- (vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;	// 0x32cfe27d
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x32cfe881
- (CFStringRef)cssZOrderClassForDrawablePagesOrder:(int)drawablePagesOrder;	// 0x32cfe8b1
- (long)currentAttachmentId;	// 0x32cfd62d
- (double)currentAttachmentPosition;	// 0x32cfd591
// converted property getter: - (int)currentPageIndex;	// 0x32cfd175
- (void)dealloc;	// 0x32cfca4d
- (id)drawableAtIndex:(int)index;	// 0x32cfcc55
- (void)endSection;	// 0x32cfea1d
- (void)endWrapPointSet;	// 0x32cfe0dd
- (void)finishedWithSplitAttachment;	// 0x32cfd521
- (long)firstAttachmentId;	// 0x32cfd655
- (int)floatingDrawablesCount;	// 0x32cfcb71
- (id)footerForName:(CFStringRef)name;	// 0x32cfce4d
- (void)handleContainerHint:(id)hint;	// 0x32cfd70d
// converted property getter: - (BOOL)hasLayoutDrawables;	// 0x32cfe759
- (id)headerForName:(CFStringRef)name;	// 0x32cfcd8d
- (void)inContent;	// 0x32cfe4bd
- (void)insertAttachmentPlaceholder;	// 0x32cfd665
// converted property getter: - (BOOL)isMappingHeadersFooters;	// 0x32cfe779
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned)index;	// 0x32cfd3ad
// converted property getter: - (int)mode;	// 0x32cfcd6d
- (double)moveToNextAttachmentPosition;	// 0x32cfd5f1
- (BOOL)needAbsolutelyPositionedTables;	// 0x32cfeb21
- (long)nextAttachmentId;	// 0x32cfd63d
- (void)openStateLayoutElementsAndStyles;	// 0x32cff019
- (void)overrideSectionStyle:(id)style;	// 0x32cfd145
- (CFArrayRef)pageDrawables:(int)drawables;	// 0x32cfcd09
- (int)pageNumberForHeaderOrFooter;	// 0x32cfe789
// converted property getter: - (CGSize)pageSize;	// 0x32cfe955
- (CFDictionaryRef)pagesOrderToCssZOrderClassMapDictionary;	// 0x32cfe945
- (void)popTocHref;	// 0x32cfe9e5
- (void)pushTocHref:(CFStringRef)href;	// 0x32cfe99d
- (XXStruct_ny2fMB)rangeForSectionStyleAtPageIndex:(int)pageIndex;	// 0x32cfd0dd
- (void)resolveHeaderName:(const CFStringRef *)name footerName:(const CFStringRef *)name2;	// 0x32cfdc9d
- (id)sectionStyleForPageIndex:(int)pageIndex;	// 0x32cfd055
- (id)sectionStyleRunForRunBeforePageIndex:(int)runBeforePageIndex;	// 0x32cff2c1
- (void)setCurrentLayoutStyle:(id)style;	// 0x32cfd195
// converted property setter: - (void)setCurrentPageIndex:(int)index;	// 0x32cfd185
- (void)setCurrentParagraphStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x32cfd1e5
- (void)setCurrentSpanStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x32cfd2b9
- (void)setDidFindContainerHint:(BOOL)findContainerHint;	// 0x32cfd39d
- (void)setDidInsertPageHeader:(BOOL)insertPageHeader;	// 0x32cfd38d
- (void)setFooters:(CFArrayRef)footers;	// 0x32cfce71
// converted property setter: - (void)setHasLayoutDrawables:(BOOL)drawables;	// 0x32cfe749
- (void)setHeaders:(CFArrayRef)headers;	// 0x32cfcdb1
// converted property setter: - (void)setIsMappingHeadersFooters:(BOOL)footers;	// 0x32cfe769
// converted property setter: - (void)setMode:(int)mode;	// 0x32cfcd7d
- (void)setOutlineLevel:(int)level;	// 0x32cfe7d1
- (void)setOutlineStyleType:(int)type;	// 0x32cfe7f9
// converted property setter: - (void)setPageSize:(CGSize)size;	// 0x32cfe96d
- (bool)splitNextAttachment;	// 0x32cfd509
- (void)startLayout;	// 0x32cfecad
- (void)startSection;	// 0x32cfebbd
- (unsigned)tocDepth;	// 0x32cfe981
- (BOOL)useOutline;	// 0x32cfe7b9
- (id)wrapPointSetForPage:(int)page;	// 0x32cfeb59
- (const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > *)wrapPoints;	// 0x32cfe241
@end
