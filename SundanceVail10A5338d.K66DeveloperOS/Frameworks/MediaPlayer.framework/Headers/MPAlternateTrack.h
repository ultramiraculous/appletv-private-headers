/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, AVMediaSelectionOption;

@interface MPAlternateTrack : NSObject {
	NSString *_name;	// 4 = 0x4
	AVMediaSelectionOption *_option;	// 8 = 0x8
	BOOL _isSDH;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *displayName;	// G=0x3414ec5d; 
@property(assign, nonatomic) BOOL isSDH;	// G=0x3414f03d; S=0x3414f04d; @synthesize=_isSDH
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3414f01d; @synthesize=_name
@property(readonly, assign, nonatomic) AVMediaSelectionOption *option;	// G=0x3414f02d; @synthesize=_option
+ (id)copyOffTrack;	// 0x3414eb81
+ (id)threeCharCodesForEncodedISO639_2_T:(id)encodedISO639_2_T;	// 0x3414ef2d
- (id)initWithName:(id)name option:(id)option;	// 0x3414eb09
- (id)_humanReadableLanguage;	// 0x3414ee19
- (int)compare:(id)compare;	// 0x3414edc9
- (void)dealloc;	// 0x3414ebf9
- (id)description;	// 0x3414eebd
// declared property getter: - (id)displayName;	// 0x3414ec5d
// declared property getter: - (BOOL)isSDH;	// 0x3414f03d
// declared property getter: - (id)name;	// 0x3414f01d
// declared property getter: - (id)option;	// 0x3414f02d
// declared property setter: - (void)setIsSDH:(BOOL)sdh;	// 0x3414f04d
@end

