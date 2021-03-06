/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAlternateTrack.h"

@class NSString, NSLocale;

@interface MPAlternateTextTrack : MPAlternateTrack {
	int _type;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
	NSLocale *_locale;	// 24 = 0x18
	int _tag;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) BOOL isInBand;	// G=0x2e388601; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x2e388641; 
@property(assign, nonatomic) int tag;	// G=0x2e388c75; S=0x2e388cf1; @synthesize=_tag
@property(readonly, assign, nonatomic) int type;	// G=0x2e388851; 
+ (id)autoTrack;	// 0x2e3887d5
+ (id)offTrack;	// 0x2e3886e5
- (id)initWithType:(int)type name:(id)name locale:(id)locale;	// 0x2e3881dd
- (void).cxx_destruct;	// 0x2e388d01
- (id)_displayNameForName:(id)name;	// 0x2e3889cd
- (int)compare:(id)compare;	// 0x2e3882b5
- (id)displayName;	// 0x2e38890d
// declared property getter: - (BOOL)isInBand;	// 0x2e388601
// declared property getter: - (id)locale;	// 0x2e388641
// declared property setter: - (void)setTag:(int)tag;	// 0x2e388cf1
// declared property getter: - (int)tag;	// 0x2e388c75
// declared property getter: - (int)type;	// 0x2e388851
@end

