/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSNumber, NSURL;

@interface SAAlarmSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *enabled;	// G=0x3251378d; S=0x325137a9; 
@property(copy, nonatomic) NSArray *frequency;	// G=0x325137f9; S=0x32513815; 
@property(copy, nonatomic) NSNumber *hour;	// G=0x32513865; S=0x32513881; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x325138d1; S=0x3251394d; 
@property(copy, nonatomic) NSString *label;	// G=0x325139ad; S=0x325139c9; 
@property(copy, nonatomic) NSNumber *minute;	// G=0x32513a19; S=0x32513a35; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x325136b1; S=0x3251372d; 
+ (id)search;	// 0x32513621
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x32513665
// declared property getter: - (id)enabled;	// 0x3251378d
- (id)encodedClassName;	// 0x32513615
// declared property getter: - (id)frequency;	// 0x325137f9
- (id)groupIdentifier;	// 0x32513605
// declared property getter: - (id)hour;	// 0x32513865
// declared property getter: - (id)identifier;	// 0x325138d1
// declared property getter: - (id)label;	// 0x325139ad
// declared property getter: - (id)minute;	// 0x32513a19
- (BOOL)requiresResponse;	// 0x32513a85
// declared property setter: - (void)setEnabled:(id)enabled;	// 0x325137a9
// declared property setter: - (void)setFrequency:(id)frequency;	// 0x32513815
// declared property setter: - (void)setHour:(id)hour;	// 0x32513881
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3251394d
// declared property setter: - (void)setLabel:(id)label;	// 0x325139c9
// declared property setter: - (void)setMinute:(id)minute;	// 0x32513a35
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3251372d
// declared property getter: - (id)targetAppId;	// 0x325136b1
@end
