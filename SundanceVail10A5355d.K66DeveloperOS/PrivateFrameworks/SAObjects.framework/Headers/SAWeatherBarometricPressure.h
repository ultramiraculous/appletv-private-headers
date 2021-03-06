/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *trend;	// G=0x3661cf21; S=0x3661cf3d; 
@property(copy, nonatomic) NSString *value;	// G=0x3661cf8d; S=0x3661cfa9; 
+ (id)barometricPressure;	// 0x3661ce91
+ (id)barometricPressureWithDictionary:(id)dictionary context:(id)context;	// 0x3661ced5
- (id)encodedClassName;	// 0x3661ce85
- (id)groupIdentifier;	// 0x3661ce75
// declared property setter: - (void)setTrend:(id)trend;	// 0x3661cf3d
// declared property setter: - (void)setValue:(id)value;	// 0x3661cfa9
// declared property getter: - (id)trend;	// 0x3661cf21
// declared property getter: - (id)value;	// 0x3661cf8d
@end

