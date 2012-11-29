/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library


@interface ABTCC : NSObject {
	BOOL _calledExternalChangeCallbacks;	// 4 = 0x4
	int _simulateType;	// 8 = 0x8
	BOOL _simulateAccessPrompt;	// 12 = 0xc
	BOOL _simulateAccessPromptGranted;	// 13 = 0xd
	unsigned _simulateAccessPromptDelay;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x3376d69d
- (id)init;	// 0x3376d631
- (id)_simulateQueue;	// 0x3376da69
- (int)accessPreflight;	// 0x3376d789
- (void)accessRequestWithCompletion:(id)completion;	// 0x3376d7fd
- (void)callExternalChangeCallbacks:(BOOL)callbacks;	// 0x3376d7c5
- (void)dealloc;	// 0x3376d671
- (void)simulate:(int)simulate;	// 0x3376da09
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)access withDelay:(unsigned)delay;	// 0x3376da39
@end
