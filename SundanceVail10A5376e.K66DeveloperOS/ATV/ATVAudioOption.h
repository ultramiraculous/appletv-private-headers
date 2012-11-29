/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVMediaOption.h"

@class NSString, AVMediaSelectionOption;

__attribute__((visibility("hidden")))
@interface ATVAudioOption : XXUnknownSuperclass <ATVMediaOption> {
	AVMediaSelectionOption *_selectionOption;	// 4 = 0x4
	NSString *_ac3SuffixString;	// 8 = 0x8
}
+ (id)audioOptionFromOption:(id)option;	// 0x2053e9
- (id)initWithOption:(id)option;	// 0x205425
- (id)_selectionOption;	// 0x2057c9
- (void)dealloc;	// 0x2054b9
- (BOOL)isEqual:(id)equal;	// 0x20551d
- (id)languageCode;	// 0x205615
- (id)locale;	// 0x2055f5
- (id)localizedDisplayString;	// 0x205659
- (id)localizedDisplayStringForIdentifier;	// 0x205711
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x205599
@end
