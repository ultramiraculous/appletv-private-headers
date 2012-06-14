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
+ (id)_mlPropertiesForATVProperties:(id)atvproperties;	// 0xcb555
+ (id)atvMediaItemsForCloudIDs:(id)cloudIDs mlLibrary:(id)library dataClient:(id)client propertiesRequested:(id)requested;	// 0xc8c95
+ (id)atvMediaItemsForTrackIDs:(id)trackIDs mlLibrary:(id)library dataClient:(id)client propertiesRequested:(id)requested;	// 0xc903d
+ (id)mlPredicatePropertyForATVProperty:(id)atvproperty;	// 0xc89bd
+ (id)mlPropertyForATVProperty:(id)atvproperty;	// 0xc8bb5
+ (id)mlQueryPropertyForATVProperty:(id)atvproperty;	// 0xc83b5
- (void)_handleDAAPQuery:(id)query;	// 0xc9f99
- (void)_handleQuery:(id)query;	// 0xc974d
- (id)_mlQueryForATVMediaQuery:(id)atvmediaQuery playlist:(id *)playlist usingSections:(BOOL *)sections;	// 0xc92b1
- (id)_orderingPropertiesForProperty:(id)property;	// 0xcb405
- (id)_orderingTermsForProperty:(id)property;	// 0xcb461
- (void)_setValue:(id)value forKey:(id)key inResponseBuffer:(id)responseBuffer;	// 0xcb2bd
- (void)handleQuery:(id)query withContext:(void *)context;	// 0xc8369
@end

