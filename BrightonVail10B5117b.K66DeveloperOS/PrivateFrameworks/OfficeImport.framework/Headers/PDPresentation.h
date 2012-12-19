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
@property(assign) BOOL isAutoPlay;	// G=0x34c62089; S=0x349e0d85; converted property
@property(assign) BOOL isCommentsVisible;	// G=0x34c62099; S=0x349f4019; converted property
@property(assign) BOOL isKiosk;	// G=0x34c620b9; S=0x34b87201; converted property
@property(assign) BOOL isLooping;	// G=0x34c620a9; S=0x34b111d1; converted property
@property(assign) CGSize notesSize;	// G=0x34c62071; S=0x349f4005; converted property
@property(assign) CGSize slideSize;	// G=0x34a4e471; S=0x349f3ff1; converted property
- (id)init;	// 0x349df745
- (id).cxx_construct;	// 0x349df741
- (unsigned long)addBulletBlip:(id)blip;	// 0x34b8b5dd
- (void)addNotesMaster:(id)master;	// 0x34b36e3d
- (void)addSlide:(id)slide;	// 0x34c61fe1
- (void)addSlideMaster:(id)master;	// 0x349f9b11
- (id)bulletBlipAtIndex:(long)index;	// 0x34c62051
- (unsigned long)bulletBlipCount;	// 0x34b8b619
- (id)bulletBlips;	// 0x34b10f9d
- (id)commentAuthorForId:(unsigned)anId;	// 0x34c620c9
- (void)dealloc;	// 0x34a66161
- (id)defaultTextStyle;	// 0x349efcbd
- (void)flushUnusedMastersAndLayouts;	// 0x34c62111
- (unsigned)indexOfSlide:(id)slide;	// 0x34c62001
// converted property getter: - (BOOL)isAutoPlay;	// 0x34c62089
// converted property getter: - (BOOL)isCommentsVisible;	// 0x34c62099
// converted property getter: - (BOOL)isKiosk;	// 0x34c620b9
// converted property getter: - (BOOL)isLooping;	// 0x34c620a9
- (id)notesMasterAtIndex:(unsigned)index;	// 0x34c61f81
- (unsigned)notesMasterCount;	// 0x34c61f61
// converted property getter: - (CGSize)notesSize;	// 0x34c62071
- (void)setCommentAuthor:(id)author forId:(unsigned)anId;	// 0x34b8d079
// converted property setter: - (void)setIsAutoPlay:(BOOL)play;	// 0x349e0d85
// converted property setter: - (void)setIsCommentsVisible:(BOOL)visible;	// 0x349f4019
// converted property setter: - (void)setIsKiosk:(BOOL)kiosk;	// 0x34b87201
// converted property setter: - (void)setIsLooping:(BOOL)looping;	// 0x34b111d1
// converted property setter: - (void)setNotesSize:(CGSize)size;	// 0x349f4005
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x349f3ff1
- (id)slideAtIndex:(unsigned)index;	// 0x34c61fc1
- (unsigned)slideCount;	// 0x34c61fa1
- (id)slideMasterAtIndex:(unsigned)index;	// 0x34c61f41
- (unsigned)slideMasterCount;	// 0x34c61f21
// converted property getter: - (CGSize)slideSize;	// 0x34a4e471
@end
