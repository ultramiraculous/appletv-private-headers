/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "GQWrapPointGenerator.h"

@class GQSTable, GQDSStylesheet, GQZArchive, GQPProcessor, GQDRoot;
@protocol GQUOutputBundle;

__attribute__((visibility("hidden")))
@interface GQSDocument : NSObject <GQWrapPointGenerator> {
@private
	GQPProcessor *mProcessor;	// 4 = 0x4
	GQDRoot *mRoot;	// 8 = 0x8
	CFURLRef mBundleUrl;	// 12 = 0xc
	GQZArchive *mArchive;	// 16 = 0x10
	id<GQUOutputBundle> mOutputBundle;	// 20 = 0x14
	CFArrayRef mObjectStack;	// 24 = 0x18
	id mGeneratorState;	// 28 = 0x1c
	GQSTable *mTableState;	// 32 = 0x20
	Class mCurrentDrawablesGenerator;	// 36 = 0x24
	Class mCurrentTableGenerator;	// 40 = 0x28
	id<GQWrapPointGenerator> mCurrentWrapPointGenerator;	// 44 = 0x2c
	BOOL mMustRegisterDrawables;	// 48 = 0x30
	BOOL mGeneratorBeginWasCalled;	// 49 = 0x31
	BOOL mShouldStreamTables;	// 50 = 0x32
	BOOL mDoExternalTextWrap;	// 51 = 0x33
	BOOL mGeneratingThumbnail;	// 52 = 0x34
	BOOL mThumbnailGenerationDone;	// 53 = 0x35
	unsigned mTextScale;	// 56 = 0x38
	set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *mWrapPoints;	// 60 = 0x3c
	CFDictionaryRef mBundleResourceUriMap;	// 64 = 0x40
	GQDSStylesheet *mStylesheet;	// 68 = 0x44
	BOOL mIsReadingStorageAttachments;	// 72 = 0x48
	CFStringRef mFilename;	// 76 = 0x4c
}
@property(assign) Class currentDrawablesGenerator;	// G=0x33ffff25; S=0x33ffff35; converted property
@property(assign) Class currentTableGenerator;	// G=0x33ffff45; S=0x33ffff55; converted property
@property(retain) id currentWrapPointGenerator;	// G=0x34000039; S=0x34000049; converted property
@property(assign) BOOL doExternalTextWrap;	// G=0x33ffffa5; S=0x33ffffb5; converted property
@property(assign, getter=isGeneratingThumbnail) BOOL generatingThumbnail;	// G=0x33ffffe9; S=0x33fffff9; converted property
@property(retain) id generatorState;	// G=0x33ffff15; S=0x34000125; converted property
@property(assign) BOOL isReadingStorageAttachments;	// G=0x34000079; S=0x34000069; converted property
@property(assign) BOOL mustRegisterDrawables;	// G=0x33ffff65; S=0x33ffff75; converted property
@property(assign) BOOL shouldStreamTables;	// G=0x33ffff85; S=0x33ffff95; converted property
@property(retain) id stylesheet;	// G=0x34000059; S=0x34000165; converted property
@property(retain) id tableState;	// G=0x33ffff05; S=0x340000e5; converted property
@property(assign, getter=isThumbnailGenerationDone) BOOL thumbnailGenerationDone;	// G=0x34000009; S=0x34000019; converted property
- (id)initWithRoot:(id)root processor:(id)processor archive:(id)archive outputBundle:(id)bundle filename:(CFStringRef)filename;	// 0x34000099
- (id)initWithRoot:(id)root processor:(id)processor bundleUrl:(CFURLRef)url outputBundle:(id)bundle;	// 0x34000c09
- (id)initWithRoot:(id)root processor:(id)processor outputBundle:(id)bundle filename:(CFStringRef)filename;	// 0x340001a5
- (void)addWrapPoint:(id)point;	// 0x340006a1
- (void)clearWrapPoints;	// 0x340004f9
- (vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;	// 0x34000521
- (CFURLRef)createUriToDocumentBundleResource:(CFStringRef)documentBundleResource;	// 0x34000861
// converted property getter: - (Class)currentDrawablesGenerator;	// 0x33ffff25
// converted property getter: - (Class)currentTableGenerator;	// 0x33ffff45
// converted property getter: - (id)currentWrapPointGenerator;	// 0x34000039
- (void)dealloc;	// 0x34000ae5
// converted property getter: - (BOOL)doExternalTextWrap;	// 0x33ffffa5
- (CFStringRef)filename;	// 0x34000089
- (BOOL)generatorBeginWasCalled;	// 0x33ffffc5
// converted property getter: - (id)generatorState;	// 0x33ffff15
// converted property getter: - (BOOL)isGeneratingThumbnail;	// 0x33ffffe9
// converted property getter: - (BOOL)isReadingStorageAttachments;	// 0x34000079
// converted property getter: - (BOOL)isThumbnailGenerationDone;	// 0x34000009
// converted property getter: - (BOOL)mustRegisterDrawables;	// 0x33ffff65
- (int)objectStackDepth;	// 0x34000755
- (id)outputBundle;	// 0x33fffef5
- (id)peekObject;	// 0x34000831
- (id)popRetainedObject;	// 0x3400077d
- (id)processor;	// 0x33fffed5
- (void)pushObject:(id)object;	// 0x34000769
- (id)root;	// 0x33fffee5
// converted property setter: - (void)setCurrentDrawablesGenerator:(Class)generator;	// 0x33ffff35
// converted property setter: - (void)setCurrentTableGenerator:(Class)generator;	// 0x33ffff55
// converted property setter: - (void)setCurrentWrapPointGenerator:(id)generator;	// 0x34000049
// converted property setter: - (void)setDoExternalTextWrap:(BOOL)wrap;	// 0x33ffffb5
// converted property setter: - (void)setGeneratingThumbnail:(BOOL)thumbnail;	// 0x33fffff9
- (void)setGeneratorBeginWasCalled;	// 0x33ffffd5
// converted property setter: - (void)setGeneratorState:(id)state;	// 0x34000125
// converted property setter: - (void)setIsReadingStorageAttachments:(BOOL)attachments;	// 0x34000069
// converted property setter: - (void)setMustRegisterDrawables:(BOOL)drawables;	// 0x33ffff75
// converted property setter: - (void)setShouldStreamTables:(BOOL)streamTables;	// 0x33ffff95
// converted property setter: - (void)setStylesheet:(id)stylesheet;	// 0x34000165
// converted property setter: - (void)setTableState:(id)state;	// 0x340000e5
// converted property setter: - (void)setThumbnailGenerationDone:(BOOL)done;	// 0x34000019
// converted property getter: - (BOOL)shouldStreamTables;	// 0x33ffff85
// converted property getter: - (id)stylesheet;	// 0x34000059
// converted property getter: - (id)tableState;	// 0x33ffff05
- (id)topObjectOfClass:(Class)aClass;	// 0x340007d1
- (CFStringRef)uriForBundleResource:(CFStringRef)bundleResource ofType:(CFStringRef)type;	// 0x3400036d
- (const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)wrapPoints;	// 0x34000029
@end
