/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber;

@interface PFUbiquitySQLCorePeerRange : NSObject {
	NSString *_owningPeerID;	// 4 = 0x4
	NSString *_entityName;	// 8 = 0x8
	NSNumber *_rangeStart;	// 12 = 0xc
	NSNumber *_rangeEnd;	// 16 = 0x10
	NSNumber *_peerStart;	// 20 = 0x14
	NSNumber *_peerEnd;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *entityName;	// G=0x33e6768d; @synthesize=_entityName
@property(readonly, assign, nonatomic) NSString *owningPeerID;	// G=0x33e6767d; @synthesize=_owningPeerID
@property(readonly, assign, nonatomic) NSNumber *peerEnd;	// G=0x33e676cd; @synthesize=_peerEnd
@property(readonly, assign, nonatomic) NSNumber *peerStart;	// G=0x33e676bd; @synthesize=_peerStart
@property(readonly, assign, nonatomic) NSNumber *rangeEnd;	// G=0x33e676ad; @synthesize=_rangeEnd
@property(readonly, assign, nonatomic) NSNumber *rangeStart;	// G=0x33e6769d; @synthesize=_rangeStart
- (id)initWithOwningPeerID:(id)owningPeerID entityName:(id)name rangeStart:(id)start rangeEnd:(id)end peerStart:(id)start5 peerEnd:(id)end6;	// 0x33e673f9
- (void)dealloc;	// 0x33e674bd
- (id)description;	// 0x33e67595
// declared property getter: - (id)entityName;	// 0x33e6768d
// declared property getter: - (id)owningPeerID;	// 0x33e6767d
// declared property getter: - (id)peerEnd;	// 0x33e676cd
// declared property getter: - (id)peerStart;	// 0x33e676bd
// declared property getter: - (id)rangeEnd;	// 0x33e676ad
// declared property getter: - (id)rangeStart;	// 0x33e6769d
@end

