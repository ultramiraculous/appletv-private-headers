/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class TSUNoCopyDictionary, PBOfficeArtReaderState, NSMutableArray, OADTheme, NSMutableDictionary, PBOutlineBulletDictionary, ESDContainer, ESDObject, ESDRoot, PBSlideState, PDPresentation, PDSlideBase;
@protocol OCCancelDelegate;

@interface PBPresentationReaderState : NSObject {
	PptBinaryReader *mPptBinaryReader;	// 4 = 0x4
	PDPresentation *mTgtPresentation;	// 8 = 0x8
	ESDRoot *mDocumentRoot;	// 12 = 0xc
	ESDContainer *mSrcSlideListHolder;	// 16 = 0x10
	ChVector<int> *mCurrentSlideTextBlockStartIndexVector;	// 20 = 0x14
	unsigned long mSrcSlideId;	// 24 = 0x18
	NSMutableArray *mSlideIndexes;	// 28 = 0x1c
	TSUNoCopyDictionary *mSlideMasterToMasterStyles;	// 32 = 0x20
	CFDictionaryRef mHyperlinkMap;	// 36 = 0x24
	PBOfficeArtReaderState *mOfficeArtState;	// 40 = 0x28
	NSMutableArray *mFontEntities;	// 44 = 0x2c
	PDSlideBase *mTgtSlide;	// 48 = 0x30
	unsigned mTextLength;	// 52 = 0x34
	BOOL mHasCharacterPropertyBulletIndex;	// 56 = 0x38
	unsigned mBulletIndex;	// 60 = 0x3c
	PBOutlineBulletDictionary *mPlaceholderBulletStyles;	// 64 = 0x40
	PBOutlineBulletDictionary *mPlaceholderMacCharStyles;	// 68 = 0x44
	ESDObject *mCurrentBulletStyle;	// 72 = 0x48
	ESDObject *mCurrentMacCharStyle;	// 76 = 0x4c
	ChVector<PBReaderMasterStyleInfo> *mSrcDocMasterStyleInfoVector;	// 80 = 0x50
	ChVector<PBReaderMasterStyleInfo> *mSrcCurrentMasterStyleInfoVector;	// 84 = 0x54
	OADTheme *mDefaultTheme;	// 88 = 0x58
	PBSlideState *mSlideState;	// 92 = 0x5c
	id<OCCancelDelegate> mCancel;	// 96 = 0x60
	BOOL mHasSlideNumberPlaceholder;	// 100 = 0x64
	NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;	// 104 = 0x68
}
@property(assign) unsigned bulletIndex;	// G=0x34c53639; S=0x349f0db9; converted property
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x34b32d35; S=0x349e1a7d; @synthesize=mCancel
@property(retain) id defaultTheme;	// G=0x349f9145; S=0x349f6301; converted property
@property(retain) id documentRoot;	// G=0x349f3425; S=0x349ef6e5; converted property
@property(assign) BOOL hasCharacterPropertyBulletIndex;	// G=0x349f0da9; S=0x34a462cd; converted property
@property(assign) BOOL hasSlideNumberPlaceholder;	// G=0x34a526f9; S=0x34a5240d; @synthesize=mHasSlideNumberPlaceholder
@property(assign) ESDContainer *sourceSlideListHolder;	// G=0x34a51c21; S=0x34a4f295; @synthesize=mSrcSlideListHolder
@property(assign) unsigned textLength;	// G=0x349ebbe1; S=0x349eba69; converted property
@property(retain) id tgtSlide;	// G=0x34a463a9; S=0x349fcd9d; converted property
- (id)initWithReader:(PptBinaryReader *)reader tgtPresentation:(id)presentation;	// 0x349e1521
- (void)addFontEntity:(id)entity charSet:(int)set type:(int)type family:(int)family;	// 0x349efa91
- (void)addSlideIndex:(int)index;	// 0x34c53589
- (id)baseTextListStyle;	// 0x349fcdad
// converted property getter: - (unsigned)bulletIndex;	// 0x34c53639
// declared property getter: - (id)cancelDelegate;	// 0x34b32d35
- (id)currentBulletStyle;	// 0x34a45c01
- (id)currentMacCharStyle;	// 0x349f0d99
- (ChVector<int> *)currentSlideTextBlockStartIndexVector;	// 0x34a4f2ad
- (PBReaderMasterStyleInfo *)currentSourceMasterStyleInfoOfType:(int)type;	// 0x349f9c7d
- (void)dealloc;	// 0x34a633e5
// converted property getter: - (id)defaultTheme;	// 0x349f9145
- (PBReaderMasterStyleInfo *)docSourceMasterStyleInfoOfType:(int)type;	// 0x349efc99
// converted property getter: - (id)documentRoot;	// 0x349f3425
- (id)fontEntityAtIndex:(unsigned)index;	// 0x349f0e95
- (unsigned)fontEntityCount;	// 0x34c53619
- (int)getSlideIndexAt:(int)at;	// 0x34c535d1
// converted property getter: - (BOOL)hasCharacterPropertyBulletIndex;	// 0x349f0da9
- (BOOL)hasCurrentSourceMasterStyleInfoVector;	// 0x34a45be9
// declared property getter: - (BOOL)hasSlideNumberPlaceholder;	// 0x34a526f9
- (id)hyperlinkInfoWithId:(unsigned long)anId createIfAbsent:(BOOL)absent;	// 0x349f3435
- (BOOL)isCancelled;	// 0x349f921d
- (id)masterStyles:(id)styles;	// 0x34a4e4a9
- (int)numberOfSlideIndexes;	// 0x34a47295
- (id)officeArtState;	// 0x349f4029
- (PptBinaryReader *)reader;	// 0x349e21b1
- (void)resetSlideState;	// 0x34c53659
// converted property setter: - (void)setBulletIndex:(unsigned)index;	// 0x349f0db9
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x349e1a7d
- (void)setCurrentBulletStyle:(id)style macCharStyle:(id)style2;	// 0x34a44921
- (void)setCurrentSourceMasterStyleInfoVector:(ChVector<PBReaderMasterStyleInfo> *)vector;	// 0x349f9c6d
- (void)setCurrentTextType:(int)type placeholderIndex:(unsigned long)index;	// 0x34a51e69
// converted property setter: - (void)setDefaultTheme:(id)theme;	// 0x349f6301
// converted property setter: - (void)setDocumentRoot:(id)root;	// 0x349ef6e5
// converted property setter: - (void)setHasCharacterPropertyBulletIndex:(BOOL)index;	// 0x34a462cd
// declared property setter: - (void)setHasSlideNumberPlaceholder:(BOOL)placeholder;	// 0x34a5240d
- (void)setMasterStyles:(id)styles slideMaster:(id)master;	// 0x349fc0d5
- (void)setPlaceholderBulletStyles:(id)styles;	// 0x34b32531
- (void)setPlaceholderMacCharStyles:(id)styles;	// 0x34b9bb71
- (void)setSourceSlideId:(unsigned long)anId;	// 0x34a518a9
// declared property setter: - (void)setSourceSlideListHolder:(id)holder;	// 0x34a4f295
- (void)setSourceTextBoxContainerHolder:(id)holder forTargetShape:(id)targetShape;	// 0x34b326b5
// converted property setter: - (void)setTextLength:(unsigned)length;	// 0x349eba69
// converted property setter: - (void)setTgtSlide:(id)slide;	// 0x349fcd9d
- (id)slideIndexesRef;	// 0x34c53609
- (id)slideState;	// 0x34c53649
// declared property getter: - (id)sourceSlideListHolder;	// 0x34a51c21
- (id)sourceTextBoxContainerHolderForTargetShape:(id)targetShape;	// 0x34b32b51
// converted property getter: - (unsigned)textLength;	// 0x349ebbe1
- (id)tgtPresentation;	// 0x349efcad
// converted property getter: - (id)tgtSlide;	// 0x34a463a9
@end

