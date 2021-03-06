/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CDNDownloadData : NSObject {
@private
	NSString *name;	// 4 = 0x4
	unsigned short cdnId;	// 8 = 0x8
	unsigned rank;	// 12 = 0xc
	unsigned rankBySpeed;	// 16 = 0x10
	unsigned rankByNormalizedSpeed;	// 20 = 0x14
	unsigned origIndexFromNCCP;	// 24 = 0x18
	unsigned sortedIndex;	// 28 = 0x1c
	unsigned long long bandwidth;	// 32 = 0x20
	unsigned numTotalDownloadables;	// 40 = 0x28
	unsigned numSuccessfulDownloadables;	// 44 = 0x2c
	unsigned numFailedDownloadables;	// 48 = 0x30
	NSMutableArray *downloadableData;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) unsigned long long bandwidth;	// G=0x335026f8; @synthesize
@property(readonly, assign, nonatomic) unsigned short cdnId;	// G=0x33502788; @synthesize
@property(readonly, retain, nonatomic) NSMutableArray *downloadableData;	// G=0x335026a8; @synthesize
@property(readonly, retain, nonatomic) NSString *name;	// G=0x335027a0; @synthesize
@property(readonly, assign, nonatomic) unsigned numFailedDownloadables;	// G=0x335026bc; @synthesize
@property(readonly, assign, nonatomic) unsigned numSuccessfulDownloadables;	// G=0x335026d0; @synthesize
@property(readonly, assign, nonatomic) unsigned numTotalDownloadables;	// G=0x335026e4; @synthesize
@property(readonly, assign, nonatomic) unsigned origIndexFromNCCP;	// G=0x33502738; @synthesize
@property(readonly, assign, nonatomic) unsigned rank;	// G=0x33502774; @synthesize
@property(readonly, assign, nonatomic) unsigned rankByNormalizedSpeed;	// G=0x3350274c; @synthesize
@property(readonly, assign, nonatomic) unsigned rankBySpeed;	// G=0x33502760; @synthesize
@property(assign, nonatomic) unsigned sortedIndex;	// G=0x33502710; S=0x33502724; @synthesize
- (id)initWithCdn:(Cdn *)cdn;	// 0x335027d0
- (BOOL)allDownloadablesDownloaded;	// 0x33502af0
// declared property getter: - (unsigned long long)bandwidth;	// 0x335026f8
// declared property getter: - (unsigned short)cdnId;	// 0x33502788
- (int)compareByNormalizedSpeed:(id)speed;	// 0x33502964
- (int)compareByRank:(id)rank;	// 0x33502a6c
- (int)compareBySpeed:(id)speed;	// 0x335029e8
- (void)computeNumDownloadables;	// 0x33502cf4
- (void)dealloc;	// 0x335032a4
// declared property getter: - (id)downloadableData;	// 0x335026a8
- (id)getDownloadURL:(unsigned)url withContentProfile:(int)contentProfile;	// 0x335030f0
- (id)getRedirectedDownloadURL:(unsigned)url withContentProfile:(int)contentProfile;	// 0x33502f1c
// declared property getter: - (id)name;	// 0x335027a0
// declared property getter: - (unsigned)numFailedDownloadables;	// 0x335026bc
// declared property getter: - (unsigned)numSuccessfulDownloadables;	// 0x335026d0
// declared property getter: - (unsigned)numTotalDownloadables;	// 0x335026e4
// declared property getter: - (unsigned)origIndexFromNCCP;	// 0x33502738
// declared property getter: - (unsigned)rank;	// 0x33502774
// declared property getter: - (unsigned)rankByNormalizedSpeed;	// 0x3350274c
// declared property getter: - (unsigned)rankBySpeed;	// 0x33502760
// declared property setter: - (void)setSortedIndex:(unsigned)index;	// 0x33502724
// declared property getter: - (unsigned)sortedIndex;	// 0x33502710
@end

