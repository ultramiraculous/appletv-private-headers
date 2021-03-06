/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import "NSSecureCoding.h"
#import </libobjc.A.h>

@class NSString, NSArray;

@interface TTSVoiceAsset : NSObject <NSSecureCoding> {
	BOOL _isInstalled;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSArray *_languages;	// 12 = 0xc
	int _gender;	// 16 = 0x10
	int _footprint;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) int footprint;	// G=0x32a38259; @synthesize=_footprint
@property(readonly, assign, nonatomic) int gender;	// G=0x32a38249; @synthesize=_gender
@property(readonly, assign, nonatomic) BOOL isInstalled;	// G=0x32a38269; @synthesize=_isInstalled
@property(readonly, assign, nonatomic) NSArray *languages;	// G=0x32a38239; @synthesize=_languages
@property(readonly, assign, nonatomic) NSString *name;	// G=0x32a38229; @synthesize=_name
+ (BOOL)supportsSecureCoding;	// 0x32a37cc1
- (id)initWithCoder:(id)coder;	// 0x32a37dad
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x32a37f8d
- (id)initWithName:(id)name languages:(id)languages gender:(int)gender footprint:(int)footprint isInstalled:(BOOL)installed;	// 0x32a37aa9
- (void).cxx_destruct;	// 0x32a38279
- (id)description;	// 0x32a37b85
- (id)dictionaryRepresentation;	// 0x32a3813d
- (void)encodeWithCoder:(id)coder;	// 0x32a37cc5
// declared property getter: - (int)footprint;	// 0x32a38259
// declared property getter: - (int)gender;	// 0x32a38249
// declared property getter: - (BOOL)isInstalled;	// 0x32a38269
// declared property getter: - (id)languages;	// 0x32a38239
// declared property getter: - (id)name;	// 0x32a38229
@end

