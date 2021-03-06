/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MSAsset, NSDate;

__attribute__((visibility("hidden")))
@interface ATVCupidAsset : XXUnknownSuperclass {
	MSAsset *_asset;	// 4 = 0x4
	int _state;	// 8 = 0x8
	NSString *_assetID;	// 12 = 0xc
	NSDate *_dateContentCreated;	// 16 = 0x10
}
@property(retain) MSAsset *asset;	// G=0x9e11d; S=0x9e131; @synthesize=_asset
@property(copy) NSString *assetID;	// G=0x9e16d; S=0x9e181; @synthesize=_assetID
@property(retain) NSDate *dateContentCreated;	// G=0x9e191; S=0x9e1a5; @synthesize=_dateContentCreated
@property(assign) int state;	// G=0x9e141; S=0x9e155; @synthesize=_state
- (id)initWithCoder:(id)coder;	// 0x9dfd9
- (void).cxx_destruct;	// 0x9e1b5
// declared property getter: - (id)asset;	// 0x9e11d
// declared property getter: - (id)assetID;	// 0x9e16d
// declared property getter: - (id)dateContentCreated;	// 0x9e191
- (id)description;	// 0x9e10d
- (void)encodeWithCoder:(id)coder;	// 0x9def5
- (unsigned)hash;	// 0x9deb9
- (BOOL)isEqual:(id)equal;	// 0x9de1d
// declared property setter: - (void)setAsset:(id)asset;	// 0x9e131
// declared property setter: - (void)setAssetID:(id)anId;	// 0x9e181
// declared property setter: - (void)setDateContentCreated:(id)created;	// 0x9e1a5
// declared property setter: - (void)setState:(int)state;	// 0x9e155
// declared property getter: - (int)state;	// 0x9e141
@end

