/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *error;	// G=0x304edca5; S=0x304edcc1; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *weatherLocationId;	// G=0x304edd11; S=0x304edd8d; 
+ (id)locationAddCompleted;	// 0x304edb1d
+ (id)locationAddCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x304edb61
+ (id)locationAddCompletedWithError:(id)error;	// 0x304edbad
+ (id)locationAddCompletedWithWeatherLocationId:(id)weatherLocationId;	// 0x304edbf5
- (id)initWithError:(id)error;	// 0x304edc3d
- (id)initWithWeatherLocationId:(id)weatherLocationId;	// 0x304edc71
- (id)encodedClassName;	// 0x304edb11
// declared property getter: - (id)error;	// 0x304edca5
- (id)groupIdentifier;	// 0x304edb01
// declared property setter: - (void)setError:(id)error;	// 0x304edcc1
// declared property setter: - (void)setWeatherLocationId:(id)anId;	// 0x304edd8d
// declared property getter: - (id)weatherLocationId;	// 0x304edd11
@end

