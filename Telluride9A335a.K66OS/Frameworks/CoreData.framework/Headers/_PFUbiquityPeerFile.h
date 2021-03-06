/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _PFUbiquityPeerFile : NSObject <NSCoding> {
@private
	NSURL *_peerFilePath;	// 4 = 0x4
	NSString *_peerID;	// 8 = 0x8
	NSString *_bundleID;	// 12 = 0xc
	NSURL *_storeMetadataURL;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *bundleID;	// G=0x331ca525; @synthesize=_bundleID
@property(readonly, assign, nonatomic) NSURL *peerFilePath;	// G=0x331ca515; @synthesize=_peerFilePath
@property(readonly, assign, nonatomic) NSString *peerID;	// G=0x331ca535; @synthesize=_peerID
@property(readonly, assign, nonatomic) NSURL *storeMetadataURL;	// G=0x331ca505; @synthesize=_storeMetadataURL
+ (id)cacheLocationForPeerID:(id)peerID andBundleIdentifier:(id)identifier;	// 0x331caa09
+ (id)localPeerFileForBundleID:(id)bundleID;	// 0x331ca5b1
+ (id)localPeerKey;	// 0x331cab19
+ (id)machineUUID;	// 0x331cab81
+ (id)peerBundleIdentifier;	// 0x331ca9c5
+ (id)peerFileURLForPeerID:(id)peerID withBundleID:(id)bundleID;	// 0x331ca8e1
+ (id)peerForPeerID:(id)peerID withBundleID:(id)bundleID;	// 0x331ca7d9
+ (void)removePeerFilesForPeerID:(id)peerID andBundleID:(id)anId;	// 0x331ca5e5
+ (void)storePeer:(id)peer;	// 0x331ca635
- (id)init;	// 0x331ca545
- (id)initWithCoder:(id)coder;	// 0x331cacb1
- (id)initWithPeerID:(id)peerID andFileURL:(id)url forBundleID:(id)bundleID;	// 0x331cae4d
// declared property getter: - (id)bundleID;	// 0x331ca525
- (void)dealloc;	// 0x331cada1
- (void)encodeWithCoder:(id)coder;	// 0x331cabed
// declared property getter: - (id)peerFilePath;	// 0x331ca515
// declared property getter: - (id)peerID;	// 0x331ca535
// declared property getter: - (id)storeMetadataURL;	// 0x331ca505
@end

