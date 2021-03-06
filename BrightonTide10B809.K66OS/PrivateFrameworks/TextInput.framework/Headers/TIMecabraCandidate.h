/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface TIMecabraCandidate : XXUnknownSuperclass {
	void *_candidate;	// 12 = 0xc
	NSString *_displayReading;	// 16 = 0x10
	NSString *_firstSyllable;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *convertedInput;	// G=0x356283f1; 
@property(readonly, assign, nonatomic) NSString *displayReading;	// G=0x35628695; 
@property(readonly, assign, nonatomic) NSString *firstSyllable;	// G=0x35628405; 
- (id)initConversionCandidateWithSurface:(id)surface andInput:(id)input;	// 0x35628539
- (id)initWithMecabraCandidate:(const void *)mecabraCandidate;	// 0x35628585
- (id)candidate;	// 0x356283c9
// declared property getter: - (id)convertedInput;	// 0x356283f1
- (id)copyWithZone:(NSZone *)zone;	// 0x35628641
- (void)dealloc;	// 0x356285cd
// declared property getter: - (id)displayReading;	// 0x35628695
// declared property getter: - (id)firstSyllable;	// 0x35628405
- (id)input;	// 0x356283dd
- (BOOL)isEmojiCandidate;	// 0x35628969
- (BOOL)isExtensionCandidate;	// 0x3562894d
- (BOOL)isForShortcutConversion;	// 0x35628985
- (void *)mecabraCandidate;	// 0x35628685
@end

