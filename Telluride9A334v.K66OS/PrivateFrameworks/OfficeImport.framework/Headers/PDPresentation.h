/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, OADTextListStyle, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PDPresentation : OCDDocument {
@private
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
@property(assign) BOOL isAutoPlay;	// G=0x356fa89d; S=0x3558ca81; converted property
@property(assign) BOOL isCommentsVisible;	// G=0x356fa8ad; S=0x3559e271; converted property
@property(assign) BOOL isKiosk;	// G=0x356fa8cd; S=0x3569fa85; converted property
@property(assign) BOOL isLooping;	// G=0x356fa8bd; S=0x3569fa75; converted property
@property(assign) CGSize notesSize;	// G=0x356fa885; S=0x3559e25d; converted property
@property(assign) CGSize slideSize;	// G=0x354e9a39; S=0x3559e249; converted property
- (id)init;	// 0x3558ba1d
- (unsigned long)addBulletBlip:(id)blip;	// 0x3565d8d5
- (void)addNotesMaster:(id)master;	// 0x356a6719
- (void)addSlide:(id)slide;	// 0x356fac0d
- (void)addSlideMaster:(id)master;	// 0x355a070d
- (id)bulletBlipAtIndex:(long)index;	// 0x356fab99
- (unsigned long)bulletBlipCount;	// 0x3565d911
- (id)bulletBlips;	// 0x3568bdc5
- (id)commentAuthorForId:(unsigned)anId;	// 0x356fab49
- (void)dealloc;	// 0x3557028d
- (id)defaultTextStyle;	// 0x3559b711
- (void)flushUnusedMastersAndLayouts;	// 0x356fa8dd
- (unsigned)indexOfSlide:(id)slide;	// 0x356fabbd
// converted property getter: - (BOOL)isAutoPlay;	// 0x356fa89d
// converted property getter: - (BOOL)isCommentsVisible;	// 0x356fa8ad
// converted property getter: - (BOOL)isKiosk;	// 0x356fa8cd
// converted property getter: - (BOOL)isLooping;	// 0x356fa8bd
- (id)notesMasterAtIndex:(unsigned)index;	// 0x356fac75
- (unsigned)notesMasterCount;	// 0x356fac99
// converted property getter: - (CGSize)notesSize;	// 0x356fa885
- (void)setCommentAuthor:(id)author forId:(unsigned)anId;	// 0x356b65a1
// converted property setter: - (void)setIsAutoPlay:(BOOL)play;	// 0x3558ca81
// converted property setter: - (void)setIsCommentsVisible:(BOOL)visible;	// 0x3559e271
// converted property setter: - (void)setIsKiosk:(BOOL)kiosk;	// 0x3569fa85
// converted property setter: - (void)setIsLooping:(BOOL)looping;	// 0x3569fa75
// converted property setter: - (void)setNotesSize:(CGSize)size;	// 0x3559e25d
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x3559e249
- (id)slideAtIndex:(unsigned)index;	// 0x356fac31
- (unsigned)slideCount;	// 0x356fac55
- (id)slideMasterAtIndex:(unsigned)index;	// 0x356facb9
- (unsigned)slideMasterCount;	// 0x356facdd
// converted property getter: - (CGSize)slideSize;	// 0x354e9a39
@end

