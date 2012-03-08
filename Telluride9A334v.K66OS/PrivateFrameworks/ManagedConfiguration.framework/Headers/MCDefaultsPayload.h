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
+ (id)_allowedDefaults;	// 0x3473f7fd
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3473fbf5
+ (id)typeStrings;	// 0x3473f7d5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3473ff4d
- (BOOL)_checkForValidDefaults:(id)validDefaults outError:(id *)error;	// 0x3473f8b5
- (void)dealloc;	// 0x3473fba9
- (id)defaultsForDomain:(id)domain;	// 0x3473f7a5
- (id)description;	// 0x3473fd35
- (id)domains;	// 0x3473f785
- (id)stubDictionary;	// 0x3473fdb5
- (id)subtitle1Description;	// 0x3473fc55
@end
