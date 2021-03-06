/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, OCPPackagePart, OAVState, OADStyleMatrix, OADColorMap, OADColorScheme, OAXClient, OADDrawingGroup, OAXTableStyleCache, OADFontScheme;

__attribute__((visibility("hidden")))
@interface OAXDrawingState : NSObject {
@private
	OAXClient *mClient;	// 4 = 0x4
	OCPPackagePart *mPackagePart;	// 8 = 0x8
	OADStyleMatrix *mStyleMatrix;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mShapeIdMap;	// 20 = 0x14
	id mDocumentState;	// 24 = 0x18
	OADDrawingGroup *mTgtDrawingGroup;	// 28 = 0x1c
	NSMutableDictionary *mSrcURLToTgtBlipIndexMap;	// 32 = 0x20
	NSMutableArray *mTgtBulletBlips;	// 36 = 0x24
	NSMutableDictionary *mSrcURLToTgtBulletBlipIndexMap;	// 40 = 0x28
	OAVState *mOavState;	// 44 = 0x2c
	OADColorScheme *mColorScheme;	// 48 = 0x30
	OADColorMap *mColorMap;	// 52 = 0x34
	OADFontScheme *mFontScheme;	// 56 = 0x38
}
@property(retain) id colorMap;	// G=0x31a7ec05; S=0x31a513d5; converted property
@property(retain) id colorScheme;	// G=0x31a7ebf5; S=0x31a31ad1; converted property
@property(retain) id documentState;	// G=0x31a68319; S=0x31a4f03d; converted property
@property(retain) id fontScheme;	// G=0x31a7ec15; S=0x31a5139d; converted property
@property(retain) id oavState;	// G=0x31a3c3e1; S=0x31a466e1; converted property
@property(retain) id packagePart;	// G=0x31a3adf1; S=0x31a2f4e5; converted property
@property(retain) id styleMatrix;	// G=0x31a51661; S=0x31a319b5; converted property
@property(retain) id tableStyleCache;	// G=0x31a53159; S=0x31a51335; converted property
@property(retain) id targetDrawingGroup;	// G=0x31a3cf0d; S=0x31a2eda1; converted property
- (id)init;	// 0x31aba2c1
- (id)initWithClient:(id)client;	// 0x31a2ecb9
- (id)blipRefForURL:(id)url;	// 0x31a3b319
- (id)blipRefWithURL:(id)url blipArray:(id)array blipURLtoIndexMap:(id)map;	// 0x31a3b3e9
- (id)bulletBlipRefForURL:(id)url;	// 0x31a601c1
- (void)clearDrawableForShapeIdMap;	// 0x31a55959
- (id)client;	// 0x31a3c31d
// converted property getter: - (id)colorMap;	// 0x31a7ec05
// converted property getter: - (id)colorScheme;	// 0x31a7ebf5
- (void)dealloc;	// 0x31a458d9
// converted property getter: - (id)documentState;	// 0x31a68319
- (id)drawableForShapeId:(unsigned long)shapeId;	// 0x31a63001
// converted property getter: - (id)fontScheme;	// 0x31a7ec15
// converted property getter: - (id)oavState;	// 0x31a3c3e1
// converted property getter: - (id)packagePart;	// 0x31a3adf1
// converted property setter: - (void)setColorMap:(id)map;	// 0x31a513d5
// converted property setter: - (void)setColorScheme:(id)scheme;	// 0x31a31ad1
// converted property setter: - (void)setDocumentState:(id)state;	// 0x31a4f03d
- (void)setDrawable:(id)drawable forShapeId:(unsigned long)shapeId;	// 0x31a3a741
// converted property setter: - (void)setFontScheme:(id)scheme;	// 0x31a5139d
// converted property setter: - (void)setOavState:(id)state;	// 0x31a466e1
// converted property setter: - (void)setPackagePart:(id)part;	// 0x31a2f4e5
// converted property setter: - (void)setStyleMatrix:(id)matrix;	// 0x31a319b5
// converted property setter: - (void)setTableStyleCache:(id)cache;	// 0x31a51335
- (void)setTargetBulletBlipArray:(id)array;	// 0x31a4f15d
// converted property setter: - (void)setTargetDrawingGroup:(id)group;	// 0x31a2eda1
// converted property getter: - (id)styleMatrix;	// 0x31a51661
// converted property getter: - (id)tableStyleCache;	// 0x31a53159
// converted property getter: - (id)targetDrawingGroup;	// 0x31a3cf0d
@end

