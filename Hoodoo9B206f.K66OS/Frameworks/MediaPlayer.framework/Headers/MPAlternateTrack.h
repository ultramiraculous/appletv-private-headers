/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MPAlternateTrack : NSObject {
	int _trackID;	// 4 = 0x4
	NSString *_languageCode;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(readonly, retain) NSString *languageCode;	// G=0x3034459d; converted property
@property(retain) NSString *name;	// G=0x303445ad; S=0x303445bd; converted property
@property(readonly, assign) int trackID;	// G=0x30344601; converted property
+ (id)copyOffTrack;	// 0x30344399
+ (id)threeCharCodesForEncodedISO639_2_T:(id)encodedISO639_2_T;	// 0x30344611
- (id)initWithTrackID:(id)trackID languageCode:(id)code name:(id)name;	// 0x30344315
- (int)compare:(id)compare;	// 0x30344499
- (void)dealloc;	// 0x30344439
- (id)description;	// 0x303446f1
- (id)humanReadableLanguage;	// 0x30344551
// converted property getter: - (id)languageCode;	// 0x3034459d
// converted property getter: - (id)name;	// 0x303445ad
// converted property setter: - (void)setName:(id)name;	// 0x303445bd
// converted property getter: - (int)trackID;	// 0x30344601
@end
