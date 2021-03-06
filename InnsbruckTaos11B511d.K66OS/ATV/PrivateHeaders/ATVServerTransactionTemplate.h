/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVUserNotificationDelegate.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSString;

__attribute__((visibility("hidden")))
@interface ATVServerTransactionTemplate : XXUnknownSuperclass <ATVUserNotificationDelegate> {
	ATVServerRequestRef _clientRequest;	// 4 = 0x4
	int _cfNotificationToken;	// 8 = 0x8
	NSString *_ID;	// 12 = 0xc
	id _cvvCompletionHandler;	// 16 = 0x10
	id _cvvFailureCompletionHandler;	// 20 = 0x14
	id _twoStepSelectedDeviceCompletionHandler;	// 24 = 0x18
	id _twoStepSecretCodeCompletionHandler;	// 28 = 0x1c
	id _twoStepNewCodeRequestHandler;	// 32 = 0x20
	id _twoStepFailureCompletionHandler;	// 36 = 0x24
	NSTimer *_transactionCancelTimer;	// 40 = 0x28
}
@property(copy, nonatomic) NSString *ID;	// G=0x40d4fd; S=0x40d511; @synthesize=_ID
@property(assign) ATVServerRequestRef clientRequest;	// G=0x409309; S=0x409319; converted property
@property(copy, nonatomic) id cvvCompletionHandler;	// G=0x40d521; S=0x40d535; @synthesize=_cvvCompletionHandler
@property(copy, nonatomic) id cvvFailureCompletionHandler;	// G=0x40d545; S=0x40d559; @synthesize=_cvvFailureCompletionHandler
@property(assign, nonatomic) __weak NSTimer *transactionCancelTimer;	// G=0x40d5f9; S=0x40d619; @synthesize=_transactionCancelTimer
@property(copy, nonatomic) id twoStepFailureCompletionHandler;	// G=0x40d5d5; S=0x40d5e9; @synthesize=_twoStepFailureCompletionHandler
@property(copy, nonatomic) id twoStepNewCodeRequestHandler;	// G=0x40d5b1; S=0x40d5c5; @synthesize=_twoStepNewCodeRequestHandler
@property(copy, nonatomic) id twoStepSecretCodeCompletionHandler;	// G=0x40d58d; S=0x40d5a1; @synthesize=_twoStepSecretCodeCompletionHandler
@property(copy, nonatomic) id twoStepSelectedDeviceCompletionHandler;	// G=0x40d569; S=0x40d57d; @synthesize=_twoStepSelectedDeviceCompletionHandler
+ (id)_customTransactionButtonDictionaryWithTitle:(id)title andButonIndex:(unsigned)index buttonType:(id)type;	// 0x40b035
+ (id)_customTransactionDialogDictionaryWithHeader:(id)header andMessage:(id)message buttons:(id)buttons textFields:(id)fields;	// 0x40b1d9
+ (id)_customTransactionTextFieldDictionaryWithTitle:(id)title andInitialValue:(id)value isSecure:(BOOL)secure;	// 0x40ae95
+ (id)_initialAccountNameForSignInDialog;	// 0xd7a61
+ (void)handleRequest:(ATVServerRequestRef)request;	// 0x408b71
- (id)init;	// 0x409049
- (void).cxx_destruct;	// 0x40d62d
// declared property getter: - (id)ID;	// 0x40d4fd
- (void)_cancelTransaction:(id)transaction;	// 0x40b9a1
- (void)_cleanup;	// 0x40d001
- (void)_enableCancelTransactionTimerWithTime:(double)time;	// 0x40b839
- (void)_handleClientCustomTransactionResponse:(id)response withContext:(id)context;	// 0x40c309
- (void)_handleClientStoreServicesTransactionResponse:(id)response;	// 0x40c601
- (void)_handleClientTransactionResponse:(id)response withRequest:(ATVServerRequestRef)request;	// 0x40c029
- (void)_sendConfirmPasswordTransactionDialogForAccountName:(id)accountName withContext:(id)context;	// 0xd6fd5
- (void)_sendCustomOptionAlertTransactionDialog:(id)dialog withContext:(id)context;	// 0x40b4ed
- (void)_sendCustomTextFieldTransactionDialog:(id)dialog withContext:(id)context;	// 0x40b5b9
- (void)_sendCustomTransactionWithType:(id)type transactionInfo:(id)info context:(id)context;	// 0x40baf9
- (void)_sendOneClickTransactionDialogForAccountName:(id)accountName withContext:(id)context;	// 0xd73c5
- (void)_sendResponse:(id)response httpCode:(unsigned long)code forceEncryption:(BOOL)encryption;	// 0x40abf5
- (void)_sendSignInTransactionDialogWithContext:(id)context;	// 0xd6bb5
- (void)_sendTransactionWithType:(id)type transactionInfo:(id)info source:(id)source context:(id)context cancelTransactionTime:(double)time;	// 0x40bbe9
- (void)_signInAndSendOneClickTransactionDialogForAccountName:(id)accountName andPassword:(id)password oneClickTransactionContext:(id)context;	// 0xd7771
- (void)_startup;	// 0x40b689
// converted property getter: - (ATVServerRequestRef)clientRequest;	// 0x409309
// declared property getter: - (id)cvvCompletionHandler;	// 0x40d521
// declared property getter: - (id)cvvFailureCompletionHandler;	// 0x40d545
- (void)dealloc;	// 0x4091a5
- (id)debugStr;	// 0x409345
- (void)handle2SVAlertWithTitle:(id)title message:(id)message deviceList:(id)list completion:(id)completion;	// 0x40a451
- (void)handle2SVCodeEntryAlertWithTitle:(id)title message:(id)message newCodeLabel:(id)label submitLabel:(id)label4 newCodeRequestHandler:(id)handler completion:(id)completion;	// 0x40a671
- (void)handle2SVFailureAlertWithTitle:(id)title message:(id)message completion:(id)completion;	// 0x40aa2d
- (void)handleCVVAlertWithTitle:(id)title message:(id)message completion:(id)completion;	// 0x40a0c1
- (void)handleCVVFailureAlertWithTitle:(id)title message:(id)message completion:(id)completion;	// 0x40a289
// converted property setter: - (void)setClientRequest:(ATVServerRequestRef)request;	// 0x409319
// declared property setter: - (void)setCvvCompletionHandler:(id)handler;	// 0x40d535
// declared property setter: - (void)setCvvFailureCompletionHandler:(id)handler;	// 0x40d559
// declared property setter: - (void)setID:(id)anId;	// 0x40d511
// declared property setter: - (void)setTransactionCancelTimer:(id)timer;	// 0x40d619
// declared property setter: - (void)setTwoStepFailureCompletionHandler:(id)handler;	// 0x40d5e9
// declared property setter: - (void)setTwoStepNewCodeRequestHandler:(id)handler;	// 0x40d5c5
// declared property setter: - (void)setTwoStepSecretCodeCompletionHandler:(id)handler;	// 0x40d5a1
// declared property setter: - (void)setTwoStepSelectedDeviceCompletionHandler:(id)handler;	// 0x40d57d
// declared property getter: - (id)transactionCancelTimer;	// 0x40d5f9
// declared property getter: - (id)twoStepFailureCompletionHandler;	// 0x40d5d5
// declared property getter: - (id)twoStepNewCodeRequestHandler;	// 0x40d5b1
// declared property getter: - (id)twoStepSecretCodeCompletionHandler;	// 0x40d58d
// declared property getter: - (id)twoStepSelectedDeviceCompletionHandler;	// 0x40d569
- (void)userNotificationCenterDidCancelCFNotification:(id)userNotificationCenter;	// 0x40a0bd
- (void)userNotificationCenterDidReceiveCFNotification:(id)userNotificationCenter;	// 0x409371
@end

