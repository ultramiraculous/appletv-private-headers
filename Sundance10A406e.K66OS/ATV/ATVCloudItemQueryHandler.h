/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCloudQueryHandler.h"


__attribute__((visibility("hidden")))
@interface ATVCloudItemQueryHandler : ATVCloudQueryHandler {
}
+ (id)_mlPropertiesForATVProperties:(id)atvproperties;	// 0xd8929
+ (id)atvMediaItemsForCloudIDs:(id)cloudIDs mlLibrary:(id)library dataClient:(id)client propertiesRequested:(id)requested;	// 0xd5ffd
+ (id)atvMediaItemsForTrackIDs:(id)trackIDs mlLibrary:(id)library dataClient:(id)client propertiesRequested:(id)requested;	// 0xd63a5
+ (id)mlPredicatePropertyForATVProperty:(id)atvproperty;	// 0xd5d25
+ (id)mlPropertyForATVProperty:(id)atvproperty;	// 0xd5f1d
+ (id)mlQueryPropertyForATVProperty:(id)atvproperty;	// 0xd571d
- (void)_handleDAAPQuery:(id)query;	// 0xd7301
- (void)_handleQuery:(id)query;	// 0xd6ab5
- (id)_mlQueryForATVMediaQuery:(id)atvmediaQuery playlist:(id *)playlist usingSections:(BOOL *)sections;	// 0xd6619
- (id)_orderingPropertiesForProperty:(id)property;	// 0xd87d9
- (id)_orderingTermsForProperty:(id)property;	// 0xd8835
- (void)_setValue:(id)value forKey:(id)key inResponseBuffer:(id)responseBuffer;	// 0xd8659
- (void)handleQuery:(id)query withContext:(void *)context;	// 0xd56d1
@end

