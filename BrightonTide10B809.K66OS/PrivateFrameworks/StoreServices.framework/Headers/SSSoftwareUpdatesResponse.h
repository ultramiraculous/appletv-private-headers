/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSError;

@interface SSSoftwareUpdatesResponse : NSObject {
	NSError *_error;	// 4 = 0x4
	BOOL _failed;	// 8 = 0x8
	NSArray *_updateItems;	// 12 = 0xc
}
@property(readonly, assign) NSError *error;	// G=0x354ce471; 
@property(readonly, assign, getter=isFailed) BOOL failed;	// G=0x354ce4a9; 
@property(readonly, assign) NSArray *updateItems;	// G=0x354ce4b9; 
- (id)initWithError:(id)error;	// 0x354ce3a1
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354ce909
- (id)copyUpdateItemDictionaries;	// 0x354ce5c1
- (id)copyXPCEncoding;	// 0x354ce879
- (void)dealloc;	// 0x354ce40d
- (id)description;	// 0x354ce4f1
// declared property getter: - (id)error;	// 0x354ce471
// declared property getter: - (BOOL)isFailed;	// 0x354ce4a9
- (void)setUpdateItemsWithItemDictionaries:(id)itemDictionaries;	// 0x354ce6c9
// declared property getter: - (id)updateItems;	// 0x354ce4b9
@end

