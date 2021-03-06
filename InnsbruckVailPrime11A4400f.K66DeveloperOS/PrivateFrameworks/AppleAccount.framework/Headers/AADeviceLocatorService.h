/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import </libobjc.A.h>


@interface AADeviceLocatorService : NSObject {
	int _lastKnownState;	// 4 = 0x4
	BOOL _hasAttemptedToFetchState;	// 8 = 0x8
	BOOL _wantsToEnable;	// 9 = 0x9
}
@property(assign) BOOL shouldEnable;	// G=0x300258e1; S=0x300258ad; converted property
+ (id)sharedInstance;	// 0x300252b9
- (void)_updateStateAndNotify:(BOOL)notify;	// 0x3002553d
- (void)disableInContext:(int)context withWipeToken:(id)wipeToken;	// 0x30025791
- (void)enableInContext:(int)context;	// 0x300256bd
- (BOOL)isChangingState;	// 0x3002545d
- (BOOL)isEnabled;	// 0x30025385
// converted property setter: - (void)setShouldEnable:(BOOL)enable;	// 0x300258ad
// converted property getter: - (BOOL)shouldEnable;	// 0x300258e1
@end

