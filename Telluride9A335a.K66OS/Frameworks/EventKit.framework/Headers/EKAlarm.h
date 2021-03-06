/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class EKObjectToOneRelation, NSDate;

@interface EKAlarm : EKObject <NSCopying> {
@private
	EKObjectToOneRelation *_locationRelation;	// 36 = 0x24
}
@property(copy, nonatomic) NSDate *absoluteDate;	// G=0x30fe5f8d; S=0x30fee7c5; 
@property(retain, nonatomic) EKObjectToOneRelation *locationRelation;	// G=0x3101f609; S=0x3101f619; @synthesize=_locationRelation
@property(assign) int proximity;	// G=0x30fe5fc5; S=0x30fefa45; converted property
@property(assign, nonatomic) double relativeOffset;	// G=0x30fe5e25; S=0x30fe5d79; 
@property(retain) id structuredLocation;	// G=0x30fee821; S=0x30fef9f1; converted property
+ (id)alarmWithAbsoluteDate:(id)absoluteDate;	// 0x30fee6cd
+ (id)alarmWithRelativeOffset:(double)relativeOffset;	// 0x30fe5c2d
+ (BOOL)areLocationsAllowed;	// 0x3101f5a1
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)authorizationStatus;	// 0x3101f5d9
+ (BOOL)areLocationsAvailable;	// 0x30fdcd09
- (id)init;	// 0x30fe5ca9
- (id)initWithAbsoluteDate:(id)absoluteDate;	// 0x30fee709
- (id)initWithRelativeOffset:(double)relativeOffset;	// 0x30fe5c6d
- (id)UUID;	// 0x3101f289
- (id)_locationRelation;	// 0x30fee849
// declared property getter: - (id)absoluteDate;	// 0x30fe5f8d
- (id)copyWithZone:(NSZone *)zone;	// 0x3101f2e9
- (void)dealloc;	// 0x30fe6041
- (id)description;	// 0x3101f4f1
- (BOOL)isAbsolute;	// 0x30fe5f6d
- (id)lazyLoadRelationForKey:(id)key;	// 0x30fe5e85
// declared property getter: - (id)locationRelation;	// 0x3101f609
- (id)owner;	// 0x30fe6e25
- (id)ownerUUID;	// 0x3101f2a5
// converted property getter: - (int)proximity;	// 0x30fe5fc5
- (BOOL)rebase;	// 0x3101f3e9
// declared property getter: - (double)relativeOffset;	// 0x30fe5e25
// declared property setter: - (void)setAbsoluteDate:(id)date;	// 0x30fee7c5
// declared property setter: - (void)setLocationRelation:(id)relation;	// 0x3101f619
// converted property setter: - (void)setProximity:(int)proximity;	// 0x30fefa45
// declared property setter: - (void)setRelativeOffset:(double)offset;	// 0x30fe5d79
// converted property setter: - (void)setStructuredLocation:(id)location;	// 0x30fef9f1
// converted property getter: - (id)structuredLocation;	// 0x30fee821
- (BOOL)validate:(id *)validate;	// 0x30fe6d69
@end

