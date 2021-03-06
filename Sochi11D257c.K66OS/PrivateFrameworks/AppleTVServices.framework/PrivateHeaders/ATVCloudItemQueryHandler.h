/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "ATVCloudQueryHandler.h"


@interface ATVCloudItemQueryHandler : ATVCloudQueryHandler {
}
+ (id)_atvDataTypeForMLMediaType:(unsigned long)mlmediaType;	// 0x30449191
+ (id)_bookmarkForStoreID:(id)storeID mediaType:(id)type;	// 0x30448a81
+ (BOOL)_evaluateNumericFilter:(id)filter dataToTest:(unsigned)test;	// 0x30448bbd
+ (id)_mlPropertiesForATVProperties:(id)atvproperties;	// 0x30448fcd
+ (id)atvMediaItemsForCloudIDs:(id)cloudIDs mlLibrary:(id)library dataClient:(id)client propertiesRequested:(id)requested;	// 0x30445a75
+ (id)atvMediaItemsForTrackIDs:(id)trackIDs mlLibrary:(id)library dataClient:(id)client propertiesRequested:(id)requested;	// 0x30445e1d
+ (id)mlPredicatePropertyForATVProperty:(id)atvproperty;	// 0x304456e5
+ (id)mlPropertyForATVProperty:(id)atvproperty;	// 0x30445991
+ (id)mlQueryPropertyForATVProperty:(id)atvproperty;	// 0x30445055
- (void)_handleDAAPQuery:(id)query;	// 0x30446d51
- (void)_handleQuery:(id)query;	// 0x30446521
- (id)_mlQueryForATVMediaQuery:(id)atvmediaQuery playlist:(id *)playlist usingSections:(BOOL *)sections;	// 0x3044608d
- (id)_orderingPropertiesForProperty:(id)property;	// 0x30448e2d
- (id)_orderingTermsForProperty:(id)property;	// 0x30448e89
- (void)_setValue:(id)value forKey:(id)key inResponseBuffer:(id)responseBuffer;	// 0x30448c99
- (void)handleQuery:(id)query withContext:(void *)context;	// 0x30445009
@end

