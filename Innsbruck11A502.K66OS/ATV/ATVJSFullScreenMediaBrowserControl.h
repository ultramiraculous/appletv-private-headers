/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVFullScreenPhotoBrowserController, ATVJSContext, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVJSFullScreenMediaBrowserControl : XXUnknownSuperclass {
	id _jsInfo;	// 4 = 0x4
	ATVJSContext *_context;	// 8 = 0x8
	ATVMerchant *_merchant;	// 12 = 0xc
	int _type;	// 16 = 0x10
	ATVFullScreenPhotoBrowserController *_controller;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) ATVJSContext *context;	// G=0x156a81; @synthesize=_context
@property(retain, nonatomic) ATVFullScreenPhotoBrowserController *controller;	// G=0x156ad1; S=0x15566d; @synthesize=_controller
@property(retain) id jsInfo;	// G=0x156a5d; S=0x156a71; @synthesize=_jsInfo
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x156a91; S=0x156aa1; @synthesize=_merchant
@property(assign, nonatomic) int type;	// G=0x156ab1; S=0x156ac1; @synthesize=_type
- (id)initWithContext:(id)context;	// 0x15551d
// declared property getter: - (id)context;	// 0x156a81
// declared property getter: - (id)controller;	// 0x156ad1
- (void)dealloc;	// 0x155595
- (void)hide;	// 0x1569ed
// declared property getter: - (id)jsInfo;	// 0x156a5d
// declared property getter: - (id)merchant;	// 0x156a91
- (void)selectItemAtIndex:(int)index;	// 0x15561d
// declared property setter: - (void)setController:(id)controller;	// 0x15566d
// declared property setter: - (void)setJsInfo:(id)info;	// 0x156a71
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x156aa1
// declared property setter: - (void)setType:(int)type;	// 0x156ac1
- (void)showWithType:(int)type couplingObject:(id)object callback:(id)callback propertyCallback:(id)callback4 completionCallback:(id)callback5;	// 0x1556d5
// declared property getter: - (int)type;	// 0x156ab1
- (void)updateItemMetadata:(id)metadata forPhotoWithID:(id)anId;	// 0x156609
- (void)updateItemMetadataLiked:(id)liked forPhotoWithID:(id)anId;	// 0x156785
- (void)updateItems:(id)items initialSelection:(int)selection;	// 0x1565d9
@end

