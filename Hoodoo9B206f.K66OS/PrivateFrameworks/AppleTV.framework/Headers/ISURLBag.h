/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class SSNetworkConstraints, NSArray, SSURLBagContext, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface ISURLBag : NSObject {
@private
	SSURLBagContext *_context;	// 4 = 0x4
	SSNetworkConstraints *_defaultConstraints;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_guidPatterns;	// 16 = 0x10
	NSSet *_guidSchemes;	// 20 = 0x14
	NSDictionary *_headerPatterns;	// 24 = 0x18
	double _invalidationTime;	// 28 = 0x1c
}
@property(copy, nonatomic) SSURLBagContext *URLBagContext;	// G=0x36829dc5; S=0x36829d81; 
@property(readonly, assign, nonatomic) NSDictionary *URLBagDictionary;	// G=0x36829dfd; 
@property(readonly, assign) NSSet *availableStorefrontItemKinds;	// G=0x36828ebd; 
@property(assign, nonatomic) double invalidationTime;	// G=0x3682aac1; S=0x3682aad9; @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x36828fdd; 
+ (id)_copyFallbackContextForContext:(id)context;	// 0x36829e35
+ (void)_loadItemKindURLBagKeyMap;	// 0x36828bb5
+ (id)_urlBagForContext:(id)context;	// 0x36828a25
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;	// 0x36829855
+ (void)invalidateAllBags;	// 0x36828711
+ (id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;	// 0x368298f1
+ (void)setURLBag:(id)bag forContext:(id)context;	// 0x368287e5
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;	// 0x3682998d
+ (id)storeFrontURLBagKeyForItemKind:(id)itemKind;	// 0x36828e1d
+ (id)urlBagForContext:(id)context;	// 0x36828ae5
+ (id)urlForKey:(id)key inBagContext:(id)bagContext;	// 0x36829a41
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;	// 0x36829ab5
+ (id)valueForKey:(id)key inBagContext:(id)bagContext;	// 0x36829b69
- (id)init;	// 0x36827f7d
- (id)initWithRawDictionary:(id)rawDictionary;	// 0x36827fc5
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x3682808d
// declared property getter: - (id)URLBagContext;	// 0x36829dc5
// declared property getter: - (id)URLBagDictionary;	// 0x36829dfd
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;	// 0x36829639
- (id)_copyGUIDPatternsFromDictionary:(id)dictionary;	// 0x36829e7d
- (id)_copyGUIDSchemesFromDictionary:(id)dictionary;	// 0x3682a01d
- (id)_copyHeaderPatternsFromDictionary:(id)dictionary;	// 0x3682a15d
- (BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id *)error;	// 0x3682a335
- (id)_networkConstraintsCachePath;	// 0x3682a595
- (void)_setDictionary:(id)dictionary;	// 0x3682a641
- (void)_writeNetworkConstraintsCacheFile;	// 0x3682a6e5
- (void)_writeURLResolutionCacheFile;	// 0x3682a89d
// declared property getter: - (id)availableStorefrontItemKinds;	// 0x36828ebd
- (id)copyExtraHeadersForURL:(id)url;	// 0x3682827d
- (void)dealloc;	// 0x368281e1
- (void)invalidate;	// 0x36829c05
// declared property getter: - (double)invalidationTime;	// 0x3682aac1
// declared property getter: - (BOOL)isValid;	// 0x36828fdd
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x3682849d
- (id)networkConstraintsForDownloadKind:(id)downloadKind;	// 0x3682902d
- (id)sanitizedURLForURL:(id)url;	// 0x36829c4d
- (id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;	// 0x368290fd
// declared property setter: - (void)setInvalidationTime:(double)time;	// 0x3682aad9
// declared property setter: - (void)setURLBagContext:(id)context;	// 0x36829d81
- (BOOL)shouldSendGUIDForURL:(id)url;	// 0x36829335
- (id)urlForKey:(id)key;	// 0x368294c5
- (BOOL)urlIsTrusted:(id)trusted;	// 0x36829511
- (id)valueForKey:(id)key;	// 0x36829835
@end
