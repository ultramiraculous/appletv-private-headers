/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload {
@private
	NSString *_urlString;	// 40 = 0x28
}
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33093db1
+ (id)typeStrings;	// 0x33093c55
- (id)initWithURLString:(id)urlstring profile:(id)profile;	// 0x33093c7d
- (void)dealloc;	// 0x33093eb1
- (id)description;	// 0x33093e31
- (id)subtitle1Description;	// 0x33093c45
- (id)subtitle1Label;	// 0x33093e11
- (id)title;	// 0x33093e21
@end

