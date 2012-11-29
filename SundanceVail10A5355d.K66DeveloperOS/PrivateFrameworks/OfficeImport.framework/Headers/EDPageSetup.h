/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface EDPageSetup : NSObject {
	int mOrientation;	// 4 = 0x4
	int mPageOrder;	// 8 = 0x8
	bool mCustomFirstPageNumber;	// 12 = 0xc
	unsigned mFirstPageNumber;	// 16 = 0x10
	unsigned mCopies;	// 20 = 0x14
	unsigned mFitToHeight;	// 24 = 0x18
	unsigned mFitToWidth;	// 28 = 0x1c
	unsigned mScale;	// 32 = 0x20
	float mLeftMargin;	// 36 = 0x24
	float mRightMargin;	// 40 = 0x28
	float mTopMargin;	// 44 = 0x2c
	float mBottomMargin;	// 48 = 0x30
	float mHeaderMargin;	// 52 = 0x34
	float mFooterMargin;	// 56 = 0x38
}
@property(assign) float bottomMargin;	// G=0x31dadf75; S=0x31c2b6ad; converted property
@property(assign) bool customFirstPageNumber;	// G=0x31dadef1; S=0x31c2b64d; converted property
@property(assign) unsigned firstPageNumber;	// G=0x31dadf05; S=0x31c2b62d; converted property
@property(assign) unsigned fitToHeight;	// G=0x31dadf15; S=0x31c2b65d; converted property
@property(assign) unsigned fitToWidth;	// G=0x31dadf25; S=0x31c2b66d; converted property
@property(assign) float footerMargin;	// G=0x31dadf95; S=0x31c2b6cd; converted property
@property(assign) float headerMargin;	// G=0x31dadf85; S=0x31c2b6bd; converted property
@property(assign) float leftMargin;	// G=0x31dadf45; S=0x31c2b67d; converted property
@property(assign) int order;	// G=0x31dadee1; S=0x31c2b61d; converted property
@property(assign) int orientation;	// G=0x31daded1; S=0x31c2b60d; converted property
@property(assign) float rightMargin;	// G=0x31dadf55; S=0x31c2b68d; converted property
@property(assign) unsigned scale;	// G=0x31dadf35; S=0x31c2b6dd; converted property
@property(assign) float topMargin;	// G=0x31dadf65; S=0x31c2b69d; converted property
+ (id)pageSetup;	// 0x31c2b515
- (id)init;	// 0x31c2b55d
// converted property getter: - (float)bottomMargin;	// 0x31dadf75
// converted property getter: - (bool)customFirstPageNumber;	// 0x31dadef1
// converted property getter: - (unsigned)firstPageNumber;	// 0x31dadf05
// converted property getter: - (unsigned)fitToHeight;	// 0x31dadf15
// converted property getter: - (unsigned)fitToWidth;	// 0x31dadf25
// converted property getter: - (float)footerMargin;	// 0x31dadf95
// converted property getter: - (float)headerMargin;	// 0x31dadf85
// converted property getter: - (float)leftMargin;	// 0x31dadf45
// converted property getter: - (int)order;	// 0x31dadee1
// converted property getter: - (int)orientation;	// 0x31daded1
// converted property getter: - (float)rightMargin;	// 0x31dadf55
// converted property getter: - (unsigned)scale;	// 0x31dadf35
// converted property setter: - (void)setBottomMargin:(float)margin;	// 0x31c2b6ad
// converted property setter: - (void)setCustomFirstPageNumber:(bool)number;	// 0x31c2b64d
// converted property setter: - (void)setFirstPageNumber:(unsigned)number;	// 0x31c2b62d
// converted property setter: - (void)setFitToHeight:(unsigned)height;	// 0x31c2b65d
// converted property setter: - (void)setFitToWidth:(unsigned)width;	// 0x31c2b66d
// converted property setter: - (void)setFooterMargin:(float)margin;	// 0x31c2b6cd
// converted property setter: - (void)setHeaderMargin:(float)margin;	// 0x31c2b6bd
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x31c2b67d
// converted property setter: - (void)setOrder:(int)order;	// 0x31c2b61d
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x31c2b60d
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x31c2b68d
// converted property setter: - (void)setScale:(unsigned)scale;	// 0x31c2b6dd
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x31c2b69d
// converted property getter: - (float)topMargin;	// 0x31dadf65
@end
