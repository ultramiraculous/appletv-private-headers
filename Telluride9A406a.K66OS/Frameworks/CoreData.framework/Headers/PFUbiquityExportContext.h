/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityExportContext : NSObject {
@private
	NSSet *_storesToExportFrom;	// 4 = 0x4
	NSMutableDictionary *_storeNameToStoreExportContext;	// 8 = 0x8
	NSMutableDictionary *_ubiquityRootPathToStack;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x34891e8d; @synthesize=_localPeerID
@property(retain, nonatomic) NSSet *storesToExportFrom;	// G=0x34891e7d; S=0x34891fc9; @synthesize=_storesToExportFrom
- (id)initWithLocalPeerID:(id)localPeerID;	// 0x34891efd
- (void)dealloc;	// 0x34892291
- (id)description;	// 0x34892209
// declared property getter: - (id)localPeerID;	// 0x34891e8d
// declared property setter: - (void)setStoresToExportFrom:(id)from;	// 0x34891fc9
- (id)storeExportContextForStore:(id)store;	// 0x34891ff1
- (id)storeExportContextForStoreName:(id)storeName;	// 0x348921e5
// declared property getter: - (id)storesToExportFrom;	// 0x34891e7d
@end

