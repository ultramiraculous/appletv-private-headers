/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SAWeatherLocationSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *identifier;	// G=0x353db8f5; S=0x353db971; 
@property(copy, nonatomic) NSString *locationId;	// G=0x353db9d1; S=0x353db9ed; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353db819; S=0x353db895; 
+ (id)locationSearch;	// 0x353db789
+ (id)locationSearchWithDictionary:(id)dictionary context:(id)context;	// 0x353db7cd
- (id)encodedClassName;	// 0x353db77d
- (id)groupIdentifier;	// 0x353db76d
// declared property getter: - (id)identifier;	// 0x353db8f5
// declared property getter: - (id)locationId;	// 0x353db9d1
- (BOOL)requiresResponse;	// 0x353dba3d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353db971
// declared property setter: - (void)setLocationId:(id)anId;	// 0x353db9ed
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353db895
// declared property getter: - (id)targetAppId;	// 0x353db819
@end

