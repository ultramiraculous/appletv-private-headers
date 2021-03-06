/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class ODDPointPropertySet, OADTextBody, OADShapeProperties;

@interface ODDPoint : NSObject {
	int mType;	// 4 = 0x4
	ODDPointPropertySet *mPropertySet;	// 8 = 0x8
	OADShapeProperties *mShapeProperties;	// 12 = 0xc
	OADTextBody *mText;	// 16 = 0x10
}
@property(retain) id text;	// G=0x34b3fde1; S=0x34b3b9e9; converted property
@property(assign) int type;	// G=0x34b3c3d5; S=0x34b3b515; converted property
+ (void)addConnectionToPoint:(id)point order:(unsigned long)order array:(id *)array;	// 0x34b3c1a1
- (id)init;	// 0x34b3b419
- (void)dealloc;	// 0x34b426b9
- (id)propertySet;	// 0x34b3b545
// converted property setter: - (void)setText:(id)text;	// 0x34b3b9e9
// converted property setter: - (void)setType:(int)type;	// 0x34b3b515
- (id)shapeProperties;	// 0x34b3b535
// converted property getter: - (id)text;	// 0x34b3fde1
// converted property getter: - (int)type;	// 0x34b3c3d5
@end

