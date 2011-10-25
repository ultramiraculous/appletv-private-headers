/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSSet;
@protocol BRControlFactory;

@interface BRRecentAlbumsProvider : NSObject <BRProvider> {
@private
	long _maxCount;	// 4 = 0x4
	long _dataCount;	// 8 = 0x8
	id<BRControlFactory> _controlFactory;	// 12 = 0xc
	NSArray *_data;	// 16 = 0x10
	NSSet *_musicTypes;	// 20 = 0x14
	BOOL _invalidateOnValidityCheck;	// 24 = 0x18
}
@property(readonly, assign) long dataCount;	// G=0x33b0c941; converted property
- (id)initWithControlFactory:(id)controlFactory maxCount:(long)count;	// 0x33b0c61d
- (void)_databaseMessagesSuppressed:(id)suppressed;	// 0x33b0cce9
- (void)_databaseObjectWasAdded:(id)added;	// 0x33b0ccfd
- (void)_databaseObjectWasModified:(id)modified;	// 0x33b0cee9
- (void)_databaseObjectWillBeDeleted:(id)_databaseObject;	// 0x33b0ce3d
- (void)_downloadConvertedToAsset:(id)asset;	// 0x33b0d041
- (void)_hostAvailabilityChanged:(id)changed;	// 0x33b0cf8d
- (long)_primeData;	// 0x33b0ca1d
- (void)_updateDataIfNeeded:(id)needed;	// 0x33b0cfb1
- (id)controlFactory;	// 0x33b0c931
- (id)dataAtIndex:(long)index;	// 0x33b0c979
// converted property getter: - (long)dataCount;	// 0x33b0c941
- (void)dealloc;	// 0x33b0c88d
- (id)hashForDataAtIndex:(long)index;	// 0x33b0c9c9
@end

