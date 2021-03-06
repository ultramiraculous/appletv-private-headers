/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASStartSpeech.h"


@interface SASStartSpeechRequest : SASStartSpeech {
}
@property(assign, nonatomic) BOOL eyesFree;	// G=0x32f49429; S=0x32f494a1; 
@property(assign, nonatomic) BOOL handsFree;	// G=0x32f494e5; S=0x32f4955d; 
+ (id)startSpeechRequest;	// 0x32f49399
+ (id)startSpeechRequestWithDictionary:(id)dictionary context:(id)context;	// 0x32f493dd
- (id)encodedClassName;	// 0x32f4938d
// declared property getter: - (BOOL)eyesFree;	// 0x32f49429
- (id)groupIdentifier;	// 0x32f4937d
// declared property getter: - (BOOL)handsFree;	// 0x32f494e5
// declared property setter: - (void)setEyesFree:(BOOL)free;	// 0x32f494a1
// declared property setter: - (void)setHandsFree:(BOOL)free;	// 0x32f4955d
@end

