/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAWeatherLocation, NSURL;

@interface SAWeatherLocationAdd : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353dcfa5; S=0x353dd021; 
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;	// G=0x353dd081; S=0x353dd0d5; 
+ (id)locationAdd;	// 0x353dcf15
+ (id)locationAddWithDictionary:(id)dictionary context:(id)context;	// 0x353dcf59
- (id)encodedClassName;	// 0x353dcf09
- (id)groupIdentifier;	// 0x353dcef9
- (BOOL)requiresResponse;	// 0x353dd111
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353dd021
// declared property setter: - (void)setWeatherLocation:(id)location;	// 0x353dd0d5
// declared property getter: - (id)targetAppId;	// 0x353dcfa5
// declared property getter: - (id)weatherLocation;	// 0x353dd081
@end

