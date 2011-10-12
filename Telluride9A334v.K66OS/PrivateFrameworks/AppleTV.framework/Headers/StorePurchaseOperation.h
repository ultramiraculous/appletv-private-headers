/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class SSPurchase, NSNumber, ClientIdentity, NSString, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface StorePurchaseOperation : ISOperation {
@private
	NSNumber *_accountID;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	BOOL _displayedErrorDialog;	// 68 = 0x44
	NSOrderedSet *_downloads;	// 72 = 0x48
	BOOL _isBackgroundPurchase;	// 76 = 0x4c
	BOOL _needsAuthentication;	// 77 = 0x4d
	BOOL _partOfBatchPurchase;	// 78 = 0x4e
	SSPurchase *_purchase;	// 80 = 0x50
	BOOL _shouldCancelPurchaseBatch;	// 84 = 0x54
	BOOL _triggeredQueueCheck;	// 85 = 0x55
	NSString *_urlBagKey;	// 88 = 0x58
}
@property(assign, getter=isBackgroundPurchase) BOOL backgroundPurchase;	// G=0x333749e1; S=0x33374a55; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x3337542d; S=0x33375441; @synthesize=_clientIdentity
@property(assign) BOOL displayedErrorDialog;	// G=0x33375465; S=0x33375475; @synthesize=_displayedErrorDialog
@property(retain) NSOrderedSet *downloads;	// G=0x33375485; S=0x33375499; @synthesize=_downloads
@property(assign) BOOL needsAuthentication;	// G=0x333754bd; S=0x333754cd; @synthesize=_needsAuthentication
@property(assign, getter=isPartOfBatchPurchase) BOOL partOfBatchPurchase;	// G=0x333754dd; S=0x333754ed; @synthesize=_partOfBatchPurchase
@property(readonly, assign) SSPurchase *purchase;	// G=0x33374a1d; 
@property(assign) BOOL shouldCancelPurchaseBatch;	// G=0x333754fd; S=0x3337550d; @synthesize=_shouldCancelPurchaseBatch
@property(assign) BOOL triggeredQueueCheck;	// G=0x3337551d; S=0x3337552d; @synthesize=_triggeredQueueCheck
@property(retain) NSString *urlBagKey;	// G=0x3337553d; S=0x33375551; @synthesize=_urlBagKey
- (id)init;	// 0x33374851
- (id)initWithPurchase:(id)purchase;	// 0x33374865
- (void)_handleDefaultResponse:(id)response;	// 0x33374ef1
- (void)_handlePreOrderResponse:(id)response;	// 0x33374ef5
- (int)_responseTypeForResponse:(id)response;	// 0x33374ef9
- (void)_runPurchaseOperation;	// 0x33374fc5
- (id)authenticatedAccountDSID;	// 0x33374a95
// declared property getter: - (id)clientIdentity;	// 0x3337542d
- (void)dealloc;	// 0x33374945
// declared property getter: - (BOOL)displayedErrorDialog;	// 0x33375465
// declared property getter: - (id)downloads;	// 0x33375485
// declared property getter: - (BOOL)isBackgroundPurchase;	// 0x333749e1
// declared property getter: - (BOOL)isPartOfBatchPurchase;	// 0x333754dd
// declared property getter: - (BOOL)needsAuthentication;	// 0x333754bd
// declared property getter: - (id)purchase;	// 0x33374a1d
- (void)run;	// 0x33374b15
- (void)run:(BOOL)run;	// 0x33374d2d
// declared property setter: - (void)setBackgroundPurchase:(BOOL)purchase;	// 0x33374a55
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x33375441
// declared property setter: - (void)setDisplayedErrorDialog:(BOOL)dialog;	// 0x33375475
// declared property setter: - (void)setDownloads:(id)downloads;	// 0x33375499
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x333754cd
// declared property setter: - (void)setPartOfBatchPurchase:(BOOL)batchPurchase;	// 0x333754ed
// declared property setter: - (void)setShouldCancelPurchaseBatch:(BOOL)cancelPurchaseBatch;	// 0x3337550d
// declared property setter: - (void)setTriggeredQueueCheck:(BOOL)check;	// 0x3337552d
// declared property setter: - (void)setUrlBagKey:(id)key;	// 0x33375551
// declared property getter: - (BOOL)shouldCancelPurchaseBatch;	// 0x333754fd
// declared property getter: - (BOOL)triggeredQueueCheck;	// 0x3337551d
// declared property getter: - (id)urlBagKey;	// 0x3337553d
@end

