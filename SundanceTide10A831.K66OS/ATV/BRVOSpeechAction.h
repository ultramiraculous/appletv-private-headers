/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRVOSpeechAction : XXUnknownSuperclass {
	NSString *_string;	// 4 = 0x4
	NSString *_pitch;	// 8 = 0x8
	NSString *_language;	// 12 = 0xc
	BOOL _shouldQueue;	// 16 = 0x10
	BOOL _cannotInterrupt;	// 17 = 0x11
	id _completionCallback;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x2810e9; S=0x2810f9; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x281129; S=0x28113d; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x281109; S=0x281119; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x2810a9; S=0x2810b9; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x2810c9; S=0x2810d9; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x281085; S=0x281099; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x280f31
// declared property getter: - (BOOL)cannotInterrupt;	// 0x2810e9
// declared property getter: - (id)completionCallback;	// 0x281129
- (void)dealloc;	// 0x280fa5
- (id)description;	// 0x281031
// declared property getter: - (id)language;	// 0x281109
// declared property getter: - (id)pitch;	// 0x2810a9
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x2810f9
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x28113d
// declared property setter: - (void)setLanguage:(id)language;	// 0x281119
// declared property setter: - (void)setPitch:(id)pitch;	// 0x2810b9
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x2810d9
// declared property setter: - (void)setString:(id)string;	// 0x281099
// declared property getter: - (BOOL)shouldQueue;	// 0x2810c9
// declared property getter: - (id)string;	// 0x281085
@end

