/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ContentHeaderDownloaderProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CDNDownloadData, NSMutableArray, NSCondition, NSLock;

@interface ContentHeaderDownloaderManager : XXUnknownSuperclass <ContentHeaderDownloaderProtocol> {
	NSCondition *downloadsDone_;	// 4 = 0x4
	NSLock *downloadCompletedLock_;	// 8 = 0x8
	NSMutableArray *contentHeaderDownloadables_;	// 12 = 0xc
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 16 = 0x10
	int numActualDownloadables_;	// 20 = 0x14
	CDNDownloadData *selectedCdn_;	// 24 = 0x18
	BOOL aborting_;	// 28 = 0x1c
	int audioEncodingType_;	// 32 = 0x20
}
@property(assign) BOOL aborting;	// G=0x4e3ff5; S=0x4e400d; @synthesize=aborting_
@property(assign) int audioEncodingType;	// G=0x4e4025; S=0x4e4039; @synthesize=audioEncodingType_
@property(retain) NSMutableArray *contentHeaderDownloadables;	// G=0x4e3f5d; S=0x4e3f71; @synthesize=contentHeaderDownloadables_
@property(retain) NSLock *downloadCompletedLock;	// G=0x4e3f39; S=0x4e3f4d; @synthesize=downloadCompletedLock_
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x4e3f81; S=0x4e3f95; @synthesize=downloadedContentHeaderDownloadableData_
@property(retain) NSCondition *downloadsDone;	// G=0x4e3f15; S=0x4e3f29; @synthesize=downloadsDone_
@property(assign) int numActualDownloadables;	// G=0x4e3fa5; S=0x4e3fb9; @synthesize=numActualDownloadables_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x4e3fd1; S=0x4e3fe5; @synthesize=selectedCdn_
+ (id)sharedInstance;	// 0x4e2951
- (id)init;	// 0x4e2a3d
- (void)abort;	// 0x4e3e69
// declared property getter: - (BOOL)aborting;	// 0x4e3ff5
// declared property getter: - (int)audioEncodingType;	// 0x4e4025
- (int)checkAudioEncodingType:(id)type;	// 0x4e2dc1
- (void)contentDownloadableFinished:(BOOL)finished bitRate:(unsigned)rate contentProfile:(int)profile cdnId:(unsigned)anId bcp47:(id)a47;	// 0x4e38c1
- (void)contentDownloadableForPreferredBitrateFinished:(BOOL)preferredBitrateFinished contentData:(id)data;	// 0x4e3d81
// declared property getter: - (id)contentHeaderDownloadables;	// 0x4e3f5d
- (int)coundDownloadables:(id)downloadables;	// 0x4e2ef1
- (void)dealloc;	// 0x4e2b3d
// declared property getter: - (id)downloadCompletedLock;	// 0x4e3f39
- (int)downloadContentHeaders:(int)headers;	// 0x4e2fb5
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x4e3f81
// declared property getter: - (id)downloadsDone;	// 0x4e3f15
- (void)ignore:(id)ignore forLanguage:(id)language inDownloadData:(id)downloadData;	// 0x4e2c45
- (BOOL)isAAC:(int)aac;	// 0x4e2c21
- (BOOL)isAC3:(int)a3;	// 0x4e2bfd
// declared property getter: - (int)numActualDownloadables;	// 0x4e3fa5
- (void)reset;	// 0x4e3e7d
// declared property getter: - (id)selectedCdn;	// 0x4e3fd1
// declared property setter: - (void)setAborting:(BOOL)aborting;	// 0x4e400d
// declared property setter: - (void)setAudioEncodingType:(int)type;	// 0x4e4039
// declared property setter: - (void)setContentHeaderDownloadables:(id)downloadables;	// 0x4e3f71
// declared property setter: - (void)setDownloadCompletedLock:(id)lock;	// 0x4e3f4d
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x4e3f95
// declared property setter: - (void)setDownloadsDone:(id)done;	// 0x4e3f29
// declared property setter: - (void)setNumActualDownloadables:(int)downloadables;	// 0x4e3fb9
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x4e3fe5
@end

