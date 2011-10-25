/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {
	NSDictionary *_defaultsByDomain;	// 40 = 0x28
}
+ (id)_allowedDefaults;	// 0x330767fd
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33076bf5
+ (id)typeStrings;	// 0x330767d5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33076f4d
- (BOOL)_checkForValidDefaults:(id)validDefaults outError:(id *)error;	// 0x330768b5
- (void)dealloc;	// 0x33076ba9
- (id)defaultsForDomain:(id)domain;	// 0x330767a5
- (id)description;	// 0x33076d35
- (id)domains;	// 0x33076785
- (id)stubDictionary;	// 0x33076db5
- (id)subtitle1Description;	// 0x33076c55
@end

