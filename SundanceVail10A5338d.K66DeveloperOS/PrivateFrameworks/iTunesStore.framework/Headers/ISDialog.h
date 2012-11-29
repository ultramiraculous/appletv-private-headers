/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class SSAuthenticationContext, NSLock, NSString, NSArray, NSMutableDictionary;

@interface ISDialog : NSObject {
	BOOL _allowDuplicates;	// 4 = 0x4
	SSAuthenticationContext *_authenticationContext;	// 8 = 0x8
	BOOL _authorizationIsForced;	// 12 = 0xc
	NSArray *_buttons;	// 16 = 0x10
	int _defaultButtonIndex;	// 20 = 0x14
	NSString *_displayCountKey;	// 24 = 0x18
	BOOL _dismissOnHomeButton;	// 28 = 0x1c
	BOOL _dismissOnLock;	// 29 = 0x1d
	BOOL _expectsResponse;	// 30 = 0x1e
	BOOL _groupsTextFields;	// 31 = 0x1f
	int _kind;	// 32 = 0x20
	NSLock *_lock;	// 36 = 0x24
	int _maxDisplayCount;	// 40 = 0x28
	NSString *_message;	// 44 = 0x2c
	BOOL _oneButtonPerLine;	// 48 = 0x30
	BOOL _shouldDismissAfterUnlock;	// 49 = 0x31
	BOOL _shouldDisplayAsTopMost;	// 50 = 0x32
	BOOL _shouldHideButtonsInAwayView;	// 51 = 0x33
	BOOL _shouldPendInSetupIfNotAllowed;	// 52 = 0x34
	NSArray *_textFields;	// 56 = 0x38
	NSString *_title;	// 60 = 0x3c
	int _unlockActionButtonIndex;	// 64 = 0x40
	NSMutableDictionary *_userInfo;	// 68 = 0x44
	CFDictionaryRef _userNotificationValues;	// 72 = 0x48
}
@property(assign) BOOL allowDuplicates;	// G=0x30932021; S=0x30932039; @synthesize=_allowDuplicates
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x30932051; S=0x30932065; @synthesize=_authenticationContext
@property(assign) BOOL authorizationIsForced;	// G=0x30932075; S=0x3093208d; @synthesize=_authorizationIsForced
@property(retain) NSArray *buttons;	// G=0x309320a5; S=0x309320b9; @synthesize=_buttons
@property(assign) int defaultButtonIndex;	// G=0x309320c9; S=0x309320dd; @synthesize=_defaultButtonIndex
@property(assign) BOOL dismissOnHomeButton;	// G=0x309320f5; S=0x3093210d; @synthesize=_dismissOnHomeButton
@property(assign) BOOL dismissOnLock;	// G=0x30932125; S=0x3093213d; @synthesize=_dismissOnLock
@property(copy) NSString *displayCountKey;	// G=0x3093192d; S=0x30931d15; 
@property(readonly, assign, getter=isDisplayable) BOOL displayable;	// G=0x30931a69; 
@property(assign) BOOL expectsResponse;	// G=0x30932155; S=0x3093216d; @synthesize=_expectsResponse
@property(assign) BOOL groupsTextFields;	// G=0x30932185; S=0x3093219d; @synthesize=_groupsTextFields
@property(assign) int kind;	// G=0x309321b5; S=0x309321c9; @synthesize=_kind
@property(assign) int maximumDisplayCount;	// G=0x30931ccd; S=0x30931d95; 
@property(retain) NSString *message;	// G=0x309321e1; S=0x309321f5; @synthesize=_message
@property(assign) BOOL oneButtonPerLine;	// G=0x30932205; S=0x3093221d; @synthesize=_oneButtonPerLine
@property(assign) BOOL shouldDismissAfterUnlock;	// G=0x30932235; S=0x3093224d; @synthesize=_shouldDismissAfterUnlock
@property(assign) BOOL shouldDisplayAsTopMost;	// G=0x30932265; S=0x3093227d; @synthesize=_shouldDisplayAsTopMost
@property(assign) BOOL shouldHideButtonsInAwayView;	// G=0x30932295; S=0x309322ad; @synthesize=_shouldHideButtonsInAwayView
@property(assign) BOOL shouldPendInSetupIfNotAllowed;	// G=0x309322c5; S=0x309322dd; @synthesize=_shouldPendInSetupIfNotAllowed
@property(retain) NSArray *textFields;	// G=0x309322f5; S=0x30932309; @synthesize=_textFields
@property(retain) NSString *title;	// G=0x30932319; S=0x3093232d; @synthesize=_title
@property(assign) int unlockActionButtonIndex;	// G=0x3093233d; S=0x30932351; @synthesize=_unlockActionButtonIndex
+ (int)displayCountForKey:(id)key;	// 0x309311c5
- (id)init;	// 0x30930331
- (id)initWithAuthenticationChallege:(id)authenticationChallege;	// 0x3092fefd
- (id)initWithDialogDictionary:(id)dialogDictionary;	// 0x309303f1
- (id)initWithError:(id)error;	// 0x309309dd
- (id)initWithOfferDeviceError:(id)offerDeviceError;	// 0x30930d19
- (id)initWithTitle:(id)title message:(id)message;	// 0x30930fc1
- (int)_kindForString:(id)string;	// 0x30931fb9
// declared property getter: - (BOOL)allowDuplicates;	// 0x30932021
// declared property getter: - (id)authenticationContext;	// 0x30932051
// declared property getter: - (BOOL)authorizationIsForced;	// 0x30932075
// declared property getter: - (id)buttons;	// 0x309320a5
- (id)copyUserNotification;	// 0x30931215
- (void *)copyValueForCFUserNotificationKey:(CFStringRef)cfuserNotificationKey;	// 0x309318bd
- (void)dealloc;	// 0x309310d5
// declared property getter: - (int)defaultButtonIndex;	// 0x309320c9
// declared property getter: - (BOOL)dismissOnHomeButton;	// 0x309320f5
// declared property getter: - (BOOL)dismissOnLock;	// 0x30932125
// declared property getter: - (id)displayCountKey;	// 0x3093192d
// declared property getter: - (BOOL)expectsResponse;	// 0x30932155
// declared property getter: - (BOOL)groupsTextFields;	// 0x30932185
- (void)incrementDisplayCount;	// 0x30931999
// declared property getter: - (BOOL)isDisplayable;	// 0x30931a69
- (BOOL)isEqual:(id)equal;	// 0x30931b31
// declared property getter: - (int)kind;	// 0x309321b5
// declared property getter: - (int)maximumDisplayCount;	// 0x30931ccd
// declared property getter: - (id)message;	// 0x309321e1
// declared property getter: - (BOOL)oneButtonPerLine;	// 0x30932205
// declared property setter: - (void)setAllowDuplicates:(BOOL)duplicates;	// 0x30932039
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x30932065
// declared property setter: - (void)setAuthorizationIsForced:(BOOL)forced;	// 0x3093208d
// declared property setter: - (void)setButtons:(id)buttons;	// 0x309320b9
// declared property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x309320dd
// declared property setter: - (void)setDismissOnHomeButton:(BOOL)button;	// 0x3093210d
// declared property setter: - (void)setDismissOnLock:(BOOL)lock;	// 0x3093213d
// declared property setter: - (void)setDisplayCountKey:(id)key;	// 0x30931d15
// declared property setter: - (void)setExpectsResponse:(BOOL)response;	// 0x3093216d
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x3093219d
// declared property setter: - (void)setKind:(int)kind;	// 0x309321c9
// declared property setter: - (void)setMaximumDisplayCount:(int)count;	// 0x30931d95
// declared property setter: - (void)setMessage:(id)message;	// 0x309321f5
// declared property setter: - (void)setOneButtonPerLine:(BOOL)line;	// 0x3093221d
// declared property setter: - (void)setShouldDismissAfterUnlock:(BOOL)dismissAfterUnlock;	// 0x3093224d
// declared property setter: - (void)setShouldDisplayAsTopMost:(BOOL)displayAsTopMost;	// 0x3093227d
// declared property setter: - (void)setShouldHideButtonsInAwayView:(BOOL)hideButtonsInAwayView;	// 0x309322ad
// declared property setter: - (void)setShouldPendInSetupIfNotAllowed:(BOOL)pendInSetupIfNotAllowed;	// 0x309322dd
// declared property setter: - (void)setTextFields:(id)fields;	// 0x30932309
// declared property setter: - (void)setTitle:(id)title;	// 0x3093232d
// declared property setter: - (void)setUnlockActionButtonIndex:(int)index;	// 0x30932351
- (void)setValue:(void *)value forCFUserNotificationKey:(CFStringRef)cfuserNotificationKey;	// 0x30931e9d
- (void)setValue:(id)value forUserInfoKey:(id)userInfoKey;	// 0x30931de1
// declared property getter: - (BOOL)shouldDismissAfterUnlock;	// 0x30932235
// declared property getter: - (BOOL)shouldDisplayAsTopMost;	// 0x30932265
// declared property getter: - (BOOL)shouldHideButtonsInAwayView;	// 0x30932295
// declared property getter: - (BOOL)shouldPendInSetupIfNotAllowed;	// 0x309322c5
// declared property getter: - (id)textFields;	// 0x309322f5
// declared property getter: - (id)title;	// 0x30932319
// declared property getter: - (int)unlockActionButtonIndex;	// 0x3093233d
- (id)valueForUserInfoKey:(id)userInfoKey;	// 0x30931f39
@end
