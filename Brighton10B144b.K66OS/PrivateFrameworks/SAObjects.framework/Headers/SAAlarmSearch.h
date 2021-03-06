/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL, NSNumber;

@interface SAAlarmSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *enabled;	// G=0x353c3d09; S=0x353c3d25; 
@property(copy, nonatomic) NSArray *frequency;	// G=0x353c3d75; S=0x353c3d91; 
@property(copy, nonatomic) NSNumber *hour;	// G=0x353c3de1; S=0x353c3dfd; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x353c3e4d; S=0x353c3ec9; 
@property(copy, nonatomic) NSString *label;	// G=0x353c3f29; S=0x353c3f45; 
@property(copy, nonatomic) NSNumber *minute;	// G=0x353c3f95; S=0x353c3fb1; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c3c2d; S=0x353c3ca9; 
+ (id)search;	// 0x353c3b9d
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x353c3be1
// declared property getter: - (id)enabled;	// 0x353c3d09
- (id)encodedClassName;	// 0x353c3b91
// declared property getter: - (id)frequency;	// 0x353c3d75
- (id)groupIdentifier;	// 0x353c3b81
// declared property getter: - (id)hour;	// 0x353c3de1
// declared property getter: - (id)identifier;	// 0x353c3e4d
// declared property getter: - (id)label;	// 0x353c3f29
// declared property getter: - (id)minute;	// 0x353c3f95
- (BOOL)requiresResponse;	// 0x353c4001
// declared property setter: - (void)setEnabled:(id)enabled;	// 0x353c3d25
// declared property setter: - (void)setFrequency:(id)frequency;	// 0x353c3d91
// declared property setter: - (void)setHour:(id)hour;	// 0x353c3dfd
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353c3ec9
// declared property setter: - (void)setLabel:(id)label;	// 0x353c3f45
// declared property setter: - (void)setMinute:(id)minute;	// 0x353c3fb1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c3ca9
// declared property getter: - (id)targetAppId;	// 0x353c3c2d
@end

