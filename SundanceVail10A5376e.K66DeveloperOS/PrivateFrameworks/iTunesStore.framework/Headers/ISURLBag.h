/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class SSURLBagContext, SSNetworkConstraints, NSDictionary, NSSet, NSArray;

@interface ISURLBag : NSObject {
	SSURLBagContext *_context;	// 4 = 0x4
	SSNetworkConstraints *_defaultConstraints;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_guidPatterns;	// 16 = 0x10
	NSSet *_guidSchemes;	// 20 = 0x14
	NSDictionary *_headerPatterns;	// 24 = 0x18
	double _invalidationTime;	// 28 = 0x1c
}
@property(copy, nonatomic) SSURLBagContext *URLBagContext;	// G=0x3076d595; S=0x3076d551; 
@property(readonly, assign, nonatomic) NSDictionary *URLBagDictionary;	// G=0x3076d5cd; 
@property(readonly, assign) NSSet *availableStorefrontItemKinds;	// G=0x3076c23d; 
@property(assign, nonatomic) double invalidationTime;	// G=0x3076e3f9; S=0x3076c725; @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x3076c371; 
@property(readonly, assign, nonatomic) long long versionIdentifier;	// G=0x3076d605; 
+ (id)URLBagForContext:(id)context wasDiskCached:(BOOL *)cached;	// 0x3076bdf1
+ (BOOL)_allowUnsignedBags;	// 0x3076d705
+ (id)_copyFallbackContextForContext:(id)context;	// 0x3076d74d
+ (void)_loadItemKindURLBagKeyMap;	// 0x3076bf45
+ (void)_observeStoreFrontChanges;	// 0x3076ba49
+ (void)_setURLBag:(id)bag forContext:(id)context;	// 0x3076bba9
+ (id)_urlBagForContext:(id)context;	// 0x3076bcf9
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;	// 0x3076cee1
+ (id)diskCachedURLBagForContext:(id)context;	// 0x3076d2b9
+ (void)invalidateAllBags;	// 0x3076b821
+ (id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;	// 0x3076cf85
+ (void)setURLBag:(id)bag forContext:(id)context;	// 0x3076bca5
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;	// 0x3076d029
+ (id)storeFrontURLBagKeyForItemKind:(id)itemKind;	// 0x3076c1a1
+ (id)urlBagForContext:(id)context;	// 0x3076bddd
+ (id)urlForKey:(id)key inBagContext:(id)bagContext;	// 0x3076d0dd
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;	// 0x3076d151
+ (id)valueForKey:(id)key inBagContext:(id)bagContext;	// 0x3076d215
- (id)init;	// 0x3076afe9
- (id)initWithContentsOfFile:(id)file;	// 0x3076b031
- (id)initWithRawDictionary:(id)rawDictionary;	// 0x3076b0ad
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x3076b171
// declared property getter: - (id)URLBagContext;	// 0x3076d595
// declared property getter: - (id)URLBagDictionary;	// 0x3076d5cd
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;	// 0x3076cbd9
- (id)_copyGUIDPatternsFromDictionary:(id)dictionary;	// 0x3076d795
- (id)_copyGUIDSchemesFromDictionary:(id)dictionary;	// 0x3076d95d
- (id)_copyHeaderPatternsFromDictionary:(id)dictionary;	// 0x3076da9d
- (BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id *)error;	// 0x3076dc7d
- (id)_networkConstraintsCachePath;	// 0x3076debd
- (void)_setDictionary:(id)dictionary;	// 0x3076df61
- (void)_writeNetworkConstraintsCacheFile;	// 0x3076e009
- (void)_writeURLResolutionCacheFile;	// 0x3076e1d1
// declared property getter: - (id)availableStorefrontItemKinds;	// 0x3076c23d
- (id)copyExtraHeadersForURL:(id)url;	// 0x3076b33d
- (void)dealloc;	// 0x3076b29d
- (void)invalidate;	// 0x3076d3e1
// declared property getter: - (double)invalidationTime;	// 0x3076e3f9
// declared property getter: - (BOOL)isValid;	// 0x3076c371
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x3076b565
- (id)networkConstraintsForDownloadKind:(id)downloadKind;	// 0x3076c409
- (id)sanitizedURLForURL:(id)url;	// 0x3076d429
- (id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;	// 0x3076c4d9
// declared property setter: - (void)setInvalidationTime:(double)time;	// 0x3076c725
// declared property setter: - (void)setURLBagContext:(id)context;	// 0x3076d551
- (BOOL)shouldSendGUIDForURL:(id)url;	// 0x3076c7e5
- (id)urlForKey:(id)key;	// 0x3076c989
- (BOOL)urlIsTrusted:(id)trusted;	// 0x3076c9d5
- (id)valueForKey:(id)key;	// 0x3076cec1
// declared property getter: - (long long)versionIdentifier;	// 0x3076d605
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3076d689
@end

