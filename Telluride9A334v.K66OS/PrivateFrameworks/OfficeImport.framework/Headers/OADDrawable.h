/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADDrawableProperties;
@protocol OADClient, OADDrawableContainer;

__attribute__((visibility("hidden")))
@interface OADDrawable : NSObject {
@private
	BOOL mHidden;	// 4 = 0x4
	unsigned mId;	// 8 = 0x8
	OADDrawableProperties *mDrawableProperties;	// 12 = 0xc
	id<OADClient> mClientData;	// 16 = 0x10
	OADDrawable<OADDrawableContainer> *mParent;	// 20 = 0x14
}
@property(retain) id clientData;	// G=0x354e31dd; S=0x35563ee5; converted property
@property(retain) id drawableProperties;	// G=0x354e3269; S=0x3555e54d; converted property
@property(assign) BOOL hidden;	// G=0x3556bea9; S=0x35564575; converted property
@property(assign) unsigned long id;	// G=0x3561a4e5; S=0x354ebd2d; converted property
@property(retain) id parent;	// G=0x354e33c5; S=0x355aee41; converted property
- (id)initWithPropertiesClass:(Class)propertiesClass;	// 0x354eb275
// converted property getter: - (id)clientData;	// 0x354e31dd
- (id)createOrientedBoundsWithBounds:(CGRect)bounds;	// 0x3578144d
- (id)createWordClientDataWithTextType:(int)textType;	// 0x35767b9d
- (void)dealloc;	// 0x3556d729
// converted property getter: - (id)drawableProperties;	// 0x354e3269
- (id)ensureClientDataOfClass:(Class)aClass;	// 0x35690091
// converted property getter: - (BOOL)hidden;	// 0x3556bea9
// converted property getter: - (unsigned long)id;	// 0x3561a4e5
// converted property getter: - (id)parent;	// 0x354e33c5
- (void)removeUnnecessaryOverrides;	// 0x355693e9
// converted property setter: - (void)setClientData:(id)data;	// 0x35563ee5
// converted property setter: - (void)setDrawableProperties:(id)properties;	// 0x3555e54d
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x35564575
// converted property setter: - (void)setId:(unsigned long)anId;	// 0x354ebd2d
// converted property setter: - (void)setParent:(id)parent;	// 0x355aee41
- (void)setParentTextListStyle:(id)style;	// 0x35781449
@end

