/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"
#import "ISDialogOperationDelegate.h"

@class SSURLRequestProperties, ClientIdentity, NSDictionary, NSNumber, NSString, SSAuthenticationContext;

__attribute__((visibility("hidden")))
@interface PurchaseOperation : ISOperation <ISDialogOperationDelegate, ISStoreURLOperationDelegate> {
@private
	NSNumber *_accountID;	// 60 = 0x3c
	SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
	int _bagType;	// 68 = 0x44
	NSString *_buyParameters;	// 72 = 0x48
	ClientIdentity *_clientIdentity;	// 76 = 0x4c
	BOOL _displayedErrorDialog;	// 80 = 0x50
	NSString *_downloadKind;	// 84 = 0x54
	BOOL _isBackgroundPurchase;	// 88 = 0x58
	BOOL _needsAuthentication;	// 89 = 0x59
	BOOL _partOfBatchPurchase;	// 90 = 0x5a
	NSDictionary *_rawOutput;	// 92 = 0x5c
	SSURLRequestProperties *_requestProperties;	// 96 = 0x60
	id _responseInfo;	// 100 = 0x64
	BOOL _shouldSendKeyBagSyncData;	// 104 = 0x68
	NSString *_urlBagKey;	// 108 = 0x6c
}
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x33bef7b5; S=0x33bef851; 
@property(assign, getter=isBackgroundPurchase) BOOL backgroundPurchase;	// G=0x33bef815; S=0x33bef8b9; 
@property(assign) int bagType;	// G=0x33bf0d95; S=0x33bf0da5; @synthesize=_bagType
@property(retain) NSString *buyParameters;	// G=0x33bf0db5; S=0x33bf0dc9; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x33bf0ded; S=0x33bf0e01; @synthesize=_clientIdentity
@property(assign) BOOL displayedErrorDialog;	// G=0x33bf0e25; S=0x33bf0e35; @synthesize=_displayedErrorDialog
@property(assign) BOOL needsAuthentication;	// G=0x33bf0e45; S=0x33bf0e55; @synthesize=_needsAuthentication
@property(assign, getter=isPartOfBatchPurchase) BOOL partOfBatchPurchase;	// G=0x33bf0e65; S=0x33bf0e75; @synthesize=_partOfBatchPurchase
@property(retain) NSDictionary *rawOutput;	// G=0x33bf0e85; S=0x33bf0e99; @synthesize=_rawOutput
@property(assign) BOOL shouldSendKeyBagSyncData;	// G=0x33bf0ebd; S=0x33bf0ecd; @synthesize=_shouldSendKeyBagSyncData
@property(retain) NSString *urlBagKey;	// G=0x33bf0edd; S=0x33bf0ef1; @synthesize=_urlBagKey
- (id)init;	// 0x33bef57d
- (id)initWithPurchase:(id)purchase;	// 0x33bef591
- (id)_account;	// 0x33befd99
- (void)_addKeyBagSyncDataForOperation:(id)operation accountID:(unsigned long long)anId;	// 0x33befdcd
- (void)_handleFailureResponse:(id)response forOperation:(id)operation;	// 0x33bf0059
- (id)_requestBodyDataForBuyParameters:(id)buyParameters;	// 0x33bf03e5
- (void)_runDialogOperationForDialog:(id)dialog;	// 0x33bf052d
- (void)_runPurchaseRequest;	// 0x33bf0611
- (BOOL)_shouldSendKeyBagSyncData;	// 0x33bf0c85
- (id)authenticatedAccountDSID;	// 0x33bef8f9
// declared property getter: - (id)authenticationContext;	// 0x33bef7b5
// declared property getter: - (int)bagType;	// 0x33bf0d95
// declared property getter: - (id)buyParameters;	// 0x33bf0db5
// declared property getter: - (id)clientIdentity;	// 0x33bf0ded
- (void)dealloc;	// 0x33bef6dd
// declared property getter: - (BOOL)displayedErrorDialog;	// 0x33bf0e25
// declared property getter: - (BOOL)isBackgroundPurchase;	// 0x33bef815
// declared property getter: - (BOOL)isPartOfBatchPurchase;	// 0x33bf0e65
// declared property getter: - (BOOL)needsAuthentication;	// 0x33bf0e45
- (void)operation:(id)operation didAuthenticateWithDSID:(id)dsid;	// 0x33befb95
- (void)operation:(id)operation selectedButton:(id)button;	// 0x33befca1
// declared property getter: - (id)rawOutput;	// 0x33bf0e85
- (void)run;	// 0x33bef979
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x33bef851
// declared property setter: - (void)setBackgroundPurchase:(BOOL)purchase;	// 0x33bef8b9
// declared property setter: - (void)setBagType:(int)type;	// 0x33bf0da5
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x33bf0dc9
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x33bf0e01
// declared property setter: - (void)setDisplayedErrorDialog:(BOOL)dialog;	// 0x33bf0e35
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x33bf0e55
// declared property setter: - (void)setPartOfBatchPurchase:(BOOL)batchPurchase;	// 0x33bf0e75
// declared property setter: - (void)setRawOutput:(id)output;	// 0x33bf0e99
// declared property setter: - (void)setShouldSendKeyBagSyncData:(BOOL)sendKeyBagSyncData;	// 0x33bf0ecd
// declared property setter: - (void)setUrlBagKey:(id)key;	// 0x33bf0ef1
// declared property getter: - (BOOL)shouldSendKeyBagSyncData;	// 0x33bf0ebd
// declared property getter: - (id)urlBagKey;	// 0x33bf0edd
@end

