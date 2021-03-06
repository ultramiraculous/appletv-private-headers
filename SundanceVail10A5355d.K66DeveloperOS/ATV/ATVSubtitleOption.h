/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVMediaOption.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface ATVSubtitleOption : XXUnknownSuperclass <ATVMediaOption> {
	NSString *_languageCodeISO;	// 4 = 0x4
	NSString *_languageCodeBCP47;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSNumber *_trackIndex;	// 16 = 0x10
	NSString *_localizedDisplayString;	// 20 = 0x14
	NSString *_localizedDisplayStringForIdentifier;	// 24 = 0x18
}
@property(readonly, retain) NSString *identifier;	// G=0x205415; converted property
@property(readonly, retain) NSString *languageCodeBCP47;	// G=0x205425; converted property
@property(retain) NSString *localizedDisplayString;	// G=0x205445; S=0x20555d; converted property
@property(readonly, retain) NSString *localizedDisplayStringForIdentifier;	// G=0x2054d1; converted property
@property(readonly, retain) NSNumber *trackIndex;	// G=0x205435; converted property
+ (id)emptySubtitleOption;	// 0x205129
+ (id)subtitleOptionFromLanguageCodeISO:(id)languageCodeISO languageCodeBCP47:(id)a47 trackIndex:(id)index identifier:(id)identifier;	// 0x205171
- (id)initWithLanguageCodeISO:(id)languageCodeISO languageCodeBCP47:(id)a47 trackIndex:(id)index identifier:(id)identifier;	// 0x2051bd
- (void)dealloc;	// 0x205291
- (id)description;	// 0x205599
// converted property getter: - (id)identifier;	// 0x205415
- (BOOL)isEqual:(id)equal;	// 0x205345
- (id)languageCode;	// 0x205405
// converted property getter: - (id)languageCodeBCP47;	// 0x205425
// converted property getter: - (id)localizedDisplayString;	// 0x205445
// converted property getter: - (id)localizedDisplayStringForIdentifier;	// 0x2054d1
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x2053c9
// converted property setter: - (void)setLocalizedDisplayString:(id)string;	// 0x20555d
// converted property getter: - (id)trackIndex;	// 0x205435
@end

