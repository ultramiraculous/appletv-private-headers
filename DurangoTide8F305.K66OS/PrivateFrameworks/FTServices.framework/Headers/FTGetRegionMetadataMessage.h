/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : FTMessage {
	NSString *_language;	// 24 = 0x18
	NSDictionary *_responseRegionInformation;	// 28 = 0x1c
}
@property(copy) NSString *language;	// G=0x31c21fdd; S=0x31c2200d; @synthesize=_language
@property(copy) NSDictionary *responseRegionInformation;	// G=0x31c21ff5; S=0x31c22035; @synthesize=_responseRegionInformation
- (id)bagKey;	// 0x31c21e35
- (void)dealloc;	// 0x31c21ec9
- (void)handleResponseDictionary:(id)dictionary;	// 0x31c21e41
// declared property getter: - (id)language;	// 0x31c21fdd
- (id)messageBody;	// 0x31c21f25
- (id)requiredKeys;	// 0x31c21e75
// declared property getter: - (id)responseRegionInformation;	// 0x31c21ff5
// declared property setter: - (void)setLanguage:(id)language;	// 0x31c2200d
// declared property setter: - (void)setResponseRegionInformation:(id)information;	// 0x31c22035
@end

