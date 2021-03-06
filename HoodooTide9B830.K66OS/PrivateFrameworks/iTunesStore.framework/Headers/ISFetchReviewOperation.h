/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISReview, NSURL;

@interface ISFetchReviewOperation : ISOperation {
	int _assetType;	// 60 = 0x3c
	BOOL _backgroundReview;	// 64 = 0x40
	unsigned long long _itemIdentifier;	// 68 = 0x44
	unsigned _softwareVersionIdentifier;	// 76 = 0x4c
	ISReview *_review;	// 80 = 0x50
	NSURL *_url;	// 84 = 0x54
}
@property(assign) int assetType;	// G=0x3554e119; S=0x3554e129; @synthesize=_assetType
@property(assign, getter=isBackgroundReview) BOOL backgroundReview;	// G=0x3554e139; S=0x3554e149; @synthesize=_backgroundReview
@property(assign) unsigned long long itemIdentifier;	// G=0x3554e159; S=0x3554e18d; @synthesize=_itemIdentifier
@property(retain) ISReview *review;	// G=0x3554e1c1; S=0x3554e1d5; @synthesize=_review
@property(assign) unsigned softwareVersionIdentifier;	// G=0x3554e1f9; S=0x3554e209; @synthesize=_softwareVersionIdentifier
@property(retain) NSURL *url;	// G=0x3554e219; S=0x3554e22d; @synthesize=_url
- (void)_fetchReviewInformation;	// 0x3554dd5d
// declared property getter: - (int)assetType;	// 0x3554e119
- (void)dealloc;	// 0x3554dc85
// declared property getter: - (BOOL)isBackgroundReview;	// 0x3554e139
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x3554e159
// declared property getter: - (id)review;	// 0x3554e1c1
- (void)run;	// 0x3554dcdd
// declared property setter: - (void)setAssetType:(int)type;	// 0x3554e129
// declared property setter: - (void)setBackgroundReview:(BOOL)review;	// 0x3554e149
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x3554e18d
// declared property setter: - (void)setReview:(id)review;	// 0x3554e1d5
// declared property setter: - (void)setSoftwareVersionIdentifier:(unsigned)identifier;	// 0x3554e209
// declared property setter: - (void)setUrl:(id)url;	// 0x3554e22d
// declared property getter: - (unsigned)softwareVersionIdentifier;	// 0x3554e1f9
// declared property getter: - (id)url;	// 0x3554e219
@end

