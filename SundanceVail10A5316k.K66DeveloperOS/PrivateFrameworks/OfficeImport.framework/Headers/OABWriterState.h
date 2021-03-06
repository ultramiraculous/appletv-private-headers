/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class TSUPointerKeyDictionary, OABWriterClient, NSMutableArray, NSMutableDictionary, ESDContainer, OADColorMap, OADColorScheme;

__attribute__((visibility("hidden")))
@interface OABWriterState : NSObject {
@private
	OABWriterClient *mClient;	// 4 = 0x4
	ESDContainer *mDrawingGroup;	// 8 = 0x8
	NSMutableArray *mDrawings;	// 12 = 0xc
	TSUPointerKeyDictionary *mDrawableMap;	// 16 = 0x10
	NSMutableDictionary *mSourceDrawableIdToSourceDrawableMap;	// 20 = 0x14
	NSMutableArray *mConnectorsInCurrentDrawing;	// 24 = 0x18
	OADColorMap *mColorMap;	// 28 = 0x1c
	OADColorScheme *mColorScheme;	// 32 = 0x20
}
@property(retain) OADColorMap *colorMap;	// G=0x312435f9; S=0x3124360d; @synthesize=mColorMap
@property(retain) OADColorScheme *colorScheme;	// G=0x3124361d; S=0x31243631; @synthesize=mColorScheme
@property(retain) id drawingGroup;	// G=0x312433f5; S=0x31243405; converted property
- (id)initWithClient:(id)client;	// 0x31243209
- (void)addDrawing:(id)drawing;	// 0x3124346d
- (void)cacheCHDChart:(id)chart forESDObject:(id)esdobject;	// 0x312435e1
- (id)client;	// 0x312433e5
// declared property getter: - (id)colorMap;	// 0x312435f9
// declared property getter: - (id)colorScheme;	// 0x3124361d
- (id)connectorsInCurrentDrawing;	// 0x312435d1
- (void)dealloc;	// 0x31243309
- (id)drawingAtIndex:(unsigned)index;	// 0x3124344d
- (unsigned)drawingCount;	// 0x3124342d
// converted property getter: - (id)drawingGroup;	// 0x312433f5
- (unsigned)indexForChild:(id)child parentContainer:(id)container;	// 0x312435e5
- (id)mappingForRGBColor:(id)rgbcolor;	// 0x312435cd
// declared property setter: - (void)setColorMap:(id)map;	// 0x3124360d
// declared property setter: - (void)setColorScheme:(id)scheme;	// 0x31243631
// converted property setter: - (void)setDrawingGroup:(id)group;	// 0x31243405
- (void)setTargetObject:(id)object forSourceDrawable:(id)sourceDrawable;	// 0x3124348d
- (id)sourceDrawableForSourceDrawableId:(unsigned long)sourceDrawableId;	// 0x31243505
- (id)targetObjectForSourceDrawable:(id)sourceDrawable;	// 0x3124354d
- (unsigned long)targetShapeIdForSourceDrawable:(id)sourceDrawable;	// 0x3124356d
- (unsigned long)targetShapeIdForSourceDrawableId:(unsigned long)sourceDrawableId;	// 0x3124359d
@end

