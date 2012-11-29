/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSRequestDelegate.h"

@class SSRentalCheckoutRequest, MPHomeSharingML3DataProvider, NSError;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
	unsigned long long _accountID;	// 8 = 0x8
	MPHomeSharingML3DataProvider *_dataProvider;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	unsigned long long _itemID;	// 24 = 0x18
	unsigned long long _rentalID;	// 32 = 0x20
	SSRentalCheckoutRequest *_request;	// 40 = 0x28
}
@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;	// G=0x341fb7fd; S=0x341fb80d; @synthesize=_dataProvider
@property(readonly, assign, nonatomic) unsigned long long itemID;	// G=0x341fb81d; @synthesize=_itemID
- (id)initWithItemID:(unsigned long long)itemID rentalID:(unsigned long long)anId accountID:(unsigned long long)anId3;	// 0x341fb111
- (BOOL)_errorIsFairPlayError:(id)error;	// 0x341fb711
// declared property getter: - (id)dataProvider;	// 0x341fb7fd
- (void)dealloc;	// 0x341fb18d
// declared property getter: - (unsigned long long)itemID;	// 0x341fb81d
- (void)request:(id)request didFailWithError:(id)error;	// 0x341fb479
- (void)requestDidFinish:(id)request;	// 0x341fb589
- (void)resolveError:(id)error;	// 0x341fb229
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x341fb80d
@end
