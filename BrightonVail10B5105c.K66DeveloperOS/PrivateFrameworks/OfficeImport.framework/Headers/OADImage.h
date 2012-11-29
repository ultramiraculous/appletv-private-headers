/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADMovie, OADShapeGeometry, OADOle;

@interface OADImage : OADGraphic {
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADOle *mOle;	// 32 = 0x20
	OADMovie *mMovie;	// 36 = 0x24
}
@property(retain) id geometry;	// G=0x37af2985; S=0x37990dcd; converted property
@property(retain) id movie;	// G=0x3791e631; S=0x37a7059d; converted property
@property(retain) id ole;	// G=0x37991cf9; S=0x379ee85d; converted property
- (id)init;	// 0x378c661d
- (id)initWithBlipRef:(id)blipRef;	// 0x37af28b1
- (id)createImageFill;	// 0x37af2995
- (void)createPictureFramePresetGeometry;	// 0x37af2b09
- (void)dealloc;	// 0x3792df1d
// converted property getter: - (id)geometry;	// 0x37af2985
- (id)imageProperties;	// 0x3790b5d1
// converted property getter: - (id)movie;	// 0x3791e631
// converted property getter: - (id)ole;	// 0x37991cf9
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x37990dcd
// converted property setter: - (void)setMovie:(id)movie;	// 0x37a7059d
// converted property setter: - (void)setOle:(id)ole;	// 0x379ee85d
- (void)setParentTextListStyle:(id)style;	// 0x379108c5
@end
