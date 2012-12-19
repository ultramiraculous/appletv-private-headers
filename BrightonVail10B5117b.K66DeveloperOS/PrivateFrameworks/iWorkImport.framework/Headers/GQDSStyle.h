/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappableWithDefault.h"
#import <NSObject.h> // Unknown library


@interface GQDSStyle : NSObject <GQDNameMappableWithDefault> {
	GQDSStyle *mParent;	// 4 = 0x4
	GQDSMapRef mPropertyMap;	// 8 = 0x8
}
@property(retain) id parent;	// G=0x36a97289; S=0x36a97299; converted property
+ (id)createReplacementForMissingObject:(xmlTextReader *)missingObject processor:(id)processor;	// 0x36a96f89
+ (id)createReplacementForMissingStyleOfType:(int)type;	// 0x36a96a9d
+ (GQDSMapRef)defaultMapForStyleType:(int)styleType;	// 0x36a96b15
+ (const StateSpec *)stateForReading;	// 0x36a96b05
+ (int)styleTypeForNodeName:(const char *)nodeName;	// 0x36a97071
- (void)dealloc;	// 0x36a97215
- (BOOL)hasValueForBoolProperty:(int)boolProperty value:(BOOL *)value;	// 0x36a972fd
- (BOOL)hasValueForBoolProperty:(int)boolProperty value:(BOOL *)value wasOverriddenWithNull:(BOOL *)null;	// 0x36a97321
- (BOOL)hasValueForDoubleProperty:(int)doubleProperty value:(double *)value;	// 0x36a97579
- (BOOL)hasValueForDoubleProperty:(int)doubleProperty value:(double *)value wasOverriddenWithNull:(BOOL *)null;	// 0x36a9759d
- (BOOL)hasValueForFloatProperty:(int)floatProperty value:(float *)value;	// 0x36a9749d
- (BOOL)hasValueForFloatProperty:(int)floatProperty value:(float *)value wasOverriddenWithNull:(BOOL *)null;	// 0x36a974c1
- (BOOL)hasValueForIntProperty:(int)intProperty value:(int *)value;	// 0x36a973cd
- (BOOL)hasValueForIntProperty:(int)intProperty value:(int *)value wasOverriddenWithNull:(BOOL *)null;	// 0x36a973f1
- (BOOL)hasValueForObjectProperty:(int)objectProperty value:(id *)value;	// 0x36a97649
- (BOOL)hasValueForObjectProperty:(int)objectProperty value:(id *)value wasOverriddenWithNull:(BOOL *)null;	// 0x36a9766d
- (BOOL)overridesBoolProperty:(int)property value:(BOOL *)value;	// 0x36a97389
- (BOOL)overridesDoubleProperty:(int)property value:(double *)value;	// 0x36a97605
- (BOOL)overridesFloatProperty:(int)property value:(float *)value;	// 0x36a97529
- (BOOL)overridesIntProperty:(int)property value:(int *)value;	// 0x36a97459
- (BOOL)overridesObjectProperty:(int)property value:(id *)value;	// 0x36a976d5
// converted property getter: - (id)parent;	// 0x36a97289
// converted property setter: - (void)setParent:(id)parent;	// 0x36a97299
- (void)setPropertyMap:(GQDSMapRef)map;	// 0x36a97279
- (BOOL)valueForBoolProperty:(int)boolProperty;	// 0x36a972d5
- (double)valueForDoubleProperty:(int)doubleProperty;	// 0x36a97549
- (float)valueForFloatProperty:(int)floatProperty;	// 0x36a97479
- (int)valueForIntProperty:(int)intProperty;	// 0x36a973a9
- (id)valueForObjectProperty:(int)objectProperty;	// 0x36a97625
@end
