/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADTextBody, OADShapeGeometry;

@interface OADShape : OADGraphic {
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADTextBody *mTextBody;	// 32 = 0x20
}
@property(retain) id geometry;	// G=0x36a43971; S=0x36a3179d; converted property
@property(retain) id textBody;	// G=0x36a339d1; S=0x36a333b9; converted property
- (id)init;	// 0x36a30fa5
- (void)createPresetGeometryWithShapeType:(int)shapeType;	// 0x36c19ba5
- (void)dealloc;	// 0x36a51a99
- (void)flattenProperties;	// 0x36c19b59
// converted property getter: - (id)geometry;	// 0x36a43971
- (void)removeUnnecessaryOverrides;	// 0x36a35acd
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x36a3179d
- (void)setParentTextListStyle:(id)style;	// 0x36a3493d
// converted property setter: - (void)setTextBody:(id)body;	// 0x36a333b9
- (id)shapeProperties;	// 0x36a39539
// converted property getter: - (id)textBody;	// 0x36a339d1
- (int)type;	// 0x36a438fd
@end

