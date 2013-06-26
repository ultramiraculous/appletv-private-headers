/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, NSMutableDictionary;

@interface PDPresentation : OCDDocument {
	NSMutableArray *mSlideMasters;	// 32 = 0x20
	NSMutableArray *mNotesMasters;	// 36 = 0x24
	NSMutableArray *mSlides;	// 40 = 0x28
	NSMutableArray *mBulletBlips;	// 44 = 0x2c
	CGSize mSlideSize;	// 48 = 0x30
	CGSize mNotesSize;	// 56 = 0x38
	BOOL mIsAutoPlay;	// 64 = 0x40
	BOOL mIsCommentsVisible;	// 65 = 0x41
	BOOL mIsLooping;	// 66 = 0x42
	BOOL mIsKiosk;	// 67 = 0x43
	NSMutableDictionary *mCommentAuthors;	// 68 = 0x44
}
@property(assign) BOOL isAutoPlay;	// G=0x319235fd; S=0x316b1f25; converted property
@property(assign) BOOL isCommentsVisible;	// G=0x3192360d; S=0x316c4d0d; converted property
@property(assign) BOOL isKiosk;	// G=0x3192362d; S=0x317e31c9; converted property
@property(assign) BOOL isLooping;	// G=0x3192361d; S=0x317e31b9; converted property
@property(assign) CGSize notesSize;	// G=0x319235e5; S=0x316c4cf9; converted property
@property(assign) CGSize slideSize;	// G=0x316ddf19; S=0x316c4ce5; converted property
- (id)init;	// 0x316b05c5
- (id).cxx_construct;	// 0x316b05c1
- (unsigned long)addBulletBlip:(id)blip;	// 0x317db781
- (void)addNotesMaster:(id)master;	// 0x318457e1
- (void)addSlide:(id)slide;	// 0x31923555
- (void)addSlideMaster:(id)master;	// 0x316c63c9
- (id)bulletBlipAtIndex:(long)index;	// 0x319235c5
- (unsigned long)bulletBlipCount;	// 0x317db82d
- (id)bulletBlips;	// 0x31831f45
- (void)cacheGraphicStyleForDrawable:(id)drawable colorContext:(id)context;	// 0x316dbdfd
- (void)cacheGraphicStylesForSlideBase:(id)slideBase;	// 0x316dbbe5
- (id)commentAuthorForId:(unsigned)anId;	// 0x3192363d
- (void)dealloc;	// 0x31721c09
- (void)ensureDefaultLayoutsForMasters;	// 0x319238f5
- (void)flushUnusedMastersAndLayouts;	// 0x31923689
- (unsigned)indexOfSlide:(id)slide;	// 0x31923575
// converted property getter: - (BOOL)isAutoPlay;	// 0x319235fd
// converted property getter: - (BOOL)isCommentsVisible;	// 0x3192360d
// converted property getter: - (BOOL)isKiosk;	// 0x3192362d
// converted property getter: - (BOOL)isLooping;	// 0x3192361d
- (id)notesMasterAtIndex:(unsigned)index;	// 0x319234cd
- (unsigned)notesMasterCount;	// 0x319234ad
// converted property getter: - (CGSize)notesSize;	// 0x319235e5
- (void)setCommentAuthor:(id)author forId:(unsigned)anId;	// 0x3185f919
// converted property setter: - (void)setIsAutoPlay:(BOOL)play;	// 0x316b1f25
// converted property setter: - (void)setIsCommentsVisible:(BOOL)visible;	// 0x316c4d0d
// converted property setter: - (void)setIsKiosk:(BOOL)kiosk;	// 0x317e31c9
// converted property setter: - (void)setIsLooping:(BOOL)looping;	// 0x317e31b9
// converted property setter: - (void)setNotesSize:(CGSize)size;	// 0x316c4cf9
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x316c4ce5
- (id)slideAtIndex:(unsigned)index;	// 0x31923535
- (unsigned)slideCount;	// 0x31923515
- (id)slideMasterAtIndex:(unsigned)index;	// 0x3192348d
- (unsigned)slideMasterCount;	// 0x3192346d
// converted property getter: - (CGSize)slideSize;	// 0x316ddf19
@end
