/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCloudQueryHandler.h"
#import "ATVCloudCollectionQueryHandler.h"


@protocol ATVCloudCollectionQueryHandler
- (id)blankProperty;
- (Class)collectionClass;
- (id)countedPropertiesForATVProperties:(id)atvproperties;
- (unsigned)dmapResponseHeaderCode;
- (Class)entityClass;
- (id)foreignPersistentIDProperty;
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;
- (id)orderingPropertiesForProperty:(id)property;
@end

__attribute__((visibility("hidden")))
@interface ATVCloudCollectionQueryHandler : ATVCloudQueryHandler <ATVCloudCollectionQueryHandler> {
}
- (float)_durationOfAlbum:(unsigned long long)album;	// 0xda911
- (void)_handleDAAPQuery:(id)query;	// 0xd9cf9
- (void)_handleQuery:(id)query;	// 0xd9179
- (id)_mlQueryForATVMediaQuery:(id)atvmediaQuery usingSections:(BOOL)sections;	// 0xd9095
- (id)blankProperty;	// 0xd907d
- (Class)collectionClass;	// 0xd9091
- (id)countedPropertiesForATVProperties:(id)atvproperties;	// 0xd9081
- (unsigned)dmapResponseHeaderCode;	// 0xd9089
- (Class)entityClass;	// 0xd908d
- (id)foreignPersistentIDProperty;	// 0xd9079
- (void)handleQuery:(id)query withContext:(void *)context;	// 0xd9029
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;	// 0xd9085
- (id)orderingPropertiesForProperty:(id)property;	// 0xd9075
@end

