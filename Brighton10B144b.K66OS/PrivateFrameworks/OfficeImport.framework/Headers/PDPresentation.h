/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"
#import "OfficeImport-Structs.h"

@class OADTextListStyle, NSMutableArray, NSMutableDictionary;

@interface PDPresentation : OCDDocument {
	NSMutableArray *mSlideMasters;	// 20 = 0x14
	NSMutableArray *mNotesMasters;	// 24 = 0x18
	NSMutableArray *mSlides;	// 28 = 0x1c
	NSMutableArray *mBulletBlips;	// 32 = 0x20
	CGSize mSlideSize;	// 36 = 0x24
	CGSize mNotesSize;	// 44 = 0x2c
	BOOL mIsAutoPlay;	// 52 = 0x34
	BOOL mIsCommentsVisible;	// 53 = 0x35
	BOOL mIsLooping;	// 54 = 0x36
	BOOL mIsKiosk;	// 55 = 0x37
	NSMutableDictionary *mCommentAuthors;	// 56 = 0x38
	OADTextListStyle *mDefaultTextStyle;	// 60 = 0x3c
}
@property(assign) BOOL isAutoPlay;	// G=0x34a86089; S=0x34804d85; converted property
@property(assign) BOOL isCommentsVisible;	// G=0x34a86099; S=0x34818019; converted property
@property(assign) BOOL isKiosk;	// G=0x34a860b9; S=0x349ab201; converted property
@property(assign) BOOL isLooping;	// G=0x34a860a9; S=0x349351d1; converted property
@property(assign) CGSize notesSize;	// G=0x34a86071; S=0x34818005; converted property
@property(assign) CGSize slideSize;	// G=0x34872471; S=0x34817ff1; converted property
- (id)init;	// 0x34803745
- (id).cxx_construct;	// 0x34803741
- (unsigned long)addBulletBlip:(id)blip;	// 0x349af5dd
- (void)addNotesMaster:(id)master;	// 0x3495ae3d
- (void)addSlide:(id)slide;	// 0x34a85fe1
- (void)addSlideMaster:(id)master;	// 0x3481db11
- (id)bulletBlipAtIndex:(long)index;	// 0x34a86051
- (unsigned long)bulletBlipCount;	// 0x349af619
- (id)bulletBlips;	// 0x34934f9d
- (id)commentAuthorForId:(unsigned)anId;	// 0x34a860c9
- (void)dealloc;	// 0x3488a161
- (id)defaultTextStyle;	// 0x34813cbd
- (void)flushUnusedMastersAndLayouts;	// 0x34a86111
- (unsigned)indexOfSlide:(id)slide;	// 0x34a86001
// converted property getter: - (BOOL)isAutoPlay;	// 0x34a86089
// converted property getter: - (BOOL)isCommentsVisible;	// 0x34a86099
// converted property getter: - (BOOL)isKiosk;	// 0x34a860b9
// converted property getter: - (BOOL)isLooping;	// 0x34a860a9
- (id)notesMasterAtIndex:(unsigned)index;	// 0x34a85f81
- (unsigned)notesMasterCount;	// 0x34a85f61
// converted property getter: - (CGSize)notesSize;	// 0x34a86071
- (void)setCommentAuthor:(id)author forId:(unsigned)anId;	// 0x349b1079
// converted property setter: - (void)setIsAutoPlay:(BOOL)play;	// 0x34804d85
// converted property setter: - (void)setIsCommentsVisible:(BOOL)visible;	// 0x34818019
// converted property setter: - (void)setIsKiosk:(BOOL)kiosk;	// 0x349ab201
// converted property setter: - (void)setIsLooping:(BOOL)looping;	// 0x349351d1
// converted property setter: - (void)setNotesSize:(CGSize)size;	// 0x34818005
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x34817ff1
- (id)slideAtIndex:(unsigned)index;	// 0x34a85fc1
- (unsigned)slideCount;	// 0x34a85fa1
- (id)slideMasterAtIndex:(unsigned)index;	// 0x34a85f41
- (unsigned)slideMasterCount;	// 0x34a85f21
// converted property getter: - (CGSize)slideSize;	// 0x34872471
@end

