/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying> {
	NSArray *_downloadKinds;	// 4 = 0x4
	BOOL _filterExternalOriginatedDownloads;	// 8 = 0x8
	NSString *_persistenceIdentifier;	// 12 = 0xc
	NSArray *_prefetchedDownloadExternalProperties;	// 16 = 0x10
	NSArray *_prefetchedDownloadProperties;	// 20 = 0x14
}
@property(copy, nonatomic) NSArray *downloadKinds;	// G=0x323722a9; S=0x323722bd; @synthesize=_downloadKinds
@property(copy, nonatomic) NSString *persistenceIdentifier;	// G=0x323722cd; S=0x323722e1; @synthesize=_persistenceIdentifier
@property(copy, nonatomic) NSArray *prefetchedDownloadExternalProperties;	// G=0x323722f1; S=0x32372305; @synthesize=_prefetchedDownloadExternalProperties
@property(copy, nonatomic) NSArray *prefetchedDownloadProperties;	// G=0x32372315; S=0x32372329; @synthesize=_prefetchedDownloadProperties
@property(assign, nonatomic) BOOL shouldFilterExternalOriginatedDownloads;	// G=0x32372339; S=0x32372349; @synthesize=_filterExternalOriginatedDownloads
- (id)copyWithZone:(NSZone *)zone;	// 0x32372011
- (void)dealloc;	// 0x32371f85
// declared property getter: - (id)downloadKinds;	// 0x323722a9
- (unsigned)hash;	// 0x323720d9
- (BOOL)isEqual:(id)equal;	// 0x323720f9
// declared property getter: - (id)persistenceIdentifier;	// 0x323722cd
// declared property getter: - (id)prefetchedDownloadExternalProperties;	// 0x323722f1
// declared property getter: - (id)prefetchedDownloadProperties;	// 0x32372315
// declared property setter: - (void)setDownloadKinds:(id)kinds;	// 0x323722bd
// declared property setter: - (void)setPersistenceIdentifier:(id)identifier;	// 0x323722e1
// declared property setter: - (void)setPrefetchedDownloadExternalProperties:(id)properties;	// 0x32372305
// declared property setter: - (void)setPrefetchedDownloadProperties:(id)properties;	// 0x32372329
// declared property setter: - (void)setShouldFilterExternalOriginatedDownloads:(BOOL)filterExternalOriginatedDownloads;	// 0x32372349
// declared property getter: - (BOOL)shouldFilterExternalOriginatedDownloads;	// 0x32372339
@end

