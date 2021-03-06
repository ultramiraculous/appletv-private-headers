/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSMutableDictionary, NSString;

@interface PFUbiquityGlobalObjectIDCache : NSObject {
	NSString *_storeName;	// 4 = 0x4
	NSString *_localPeerID;	// 8 = 0x8
	NSMutableDictionary *_peerIDToEntityNameToPrimaryKey;	// 12 = 0xc
	NSRecursiveLock *_peerIDToEntityNameToPrimaryKeyLock;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *localPeerID;	// G=0x31045c2d; S=0x31045c3d; @synthesize=_localPeerID
@property(retain, nonatomic) NSString *storeName;	// G=0x31045c0d; S=0x31045c1d; @synthesize=_storeName
+ (id)stringValueFromArray:(id)array atIndexDescribedByStringNumber:(id)indexDescribedByStringNumber;	// 0x31045b9d
- (id)init;	// 0x31044fc9
- (id)initWithLocalPeerID:(id)localPeerID forStoreName:(id)storeName;	// 0x31045075
- (id)createGlobalIDForCompressedString:(id)compressedString withEntityNames:(id)entityNames primaryKeys:(id)keys peerIDs:(id)ids;	// 0x31045181
- (id)createGlobalIDForGlobalIDString:(id)globalIDString;	// 0x310455c5
- (id)createGlobalIDForPrimarKey:(unsigned)primarKey entityName:(id)name andOwningPeerID:(id)anId;	// 0x31045659
- (id)createGlobalIDForPrimaryKeyString:(id)primaryKeyString entityName:(id)name andOwningPeerID:(id)anId;	// 0x310456d5
- (void)dealloc;	// 0x310450d9
// declared property getter: - (id)localPeerID;	// 0x31045c2d
- (void)purgeCache;	// 0x31045a15
// declared property setter: - (void)setLocalPeerID:(id)anId;	// 0x31045c3d
// declared property setter: - (void)setStoreName:(id)name;	// 0x31045c1d
// declared property getter: - (id)storeName;	// 0x31045c0d
@end

