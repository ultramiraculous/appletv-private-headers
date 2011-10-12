/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSEnumerator.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, NSLocale;

@interface AVMetadataEnumerator : NSEnumerator {
@private
	OpaqueFigMetadataReader *_reader;	// 4 = 0x4
	NSEnumerator *_arrayEnumerator;	// 8 = 0x8
	id _key;	// 12 = 0xc
	NSString *_keySpace;	// 16 = 0x10
	NSLocale *_locale;	// 20 = 0x14
	int _count;	// 24 = 0x18
	int _index;	// 28 = 0x1c
}
+ (id)metadataEnumeratorWithArray:(id)array key:(id)key keySpace:(id)space locale:(id)locale;	// 0x35497b15
+ (id)metadataEnumeratorWithMetadataReader:(OpaqueFigMetadataReader *)metadataReader;	// 0x35497acd
- (id)initWithArray:(id)array key:(id)key keySpace:(id)space locale:(id)locale;	// 0x3549779d
- (id)initWithMetadataReader:(OpaqueFigMetadataReader *)metadataReader;	// 0x35497779
- (id)initWithMetadataReader:(OpaqueFigMetadataReader *)metadataReader array:(id)array key:(id)key keySpace:(id)space locale:(id)locale;	// 0x35497c69
- (void)_setArrayEnumerator:(id)enumerator;	// 0x354977cd
- (void)_setKey:(id)key;	// 0x3549780d
- (void)_setKeySpace:(id)space;	// 0x3549784d
- (void)_setLocale:(id)locale;	// 0x3549788d
- (void)_setMetadataReader:(OpaqueFigMetadataReader *)reader;	// 0x35497b6d
- (void)dealloc;	// 0x35497b99
- (void)finalize;	// 0x35497c29
- (id)nextObject;	// 0x354978cd
@end

