/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray, SSURLBagContext, SSNetworkConstraints, NSSet;

@interface ISURLBag : NSObject {
	SSURLBagContext *_context;	// 4 = 0x4
	SSNetworkConstraints *_defaultConstraints;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_guidPatterns;	// 16 = 0x10
	NSSet *_guidSchemes;	// 20 = 0x14
	NSDictionary *_headerPatterns;	// 24 = 0x18
	double _invalidationTime;	// 28 = 0x1c
}
@property(copy, nonatomic) SSURLBagContext *URLBagContext;	// G=0x35ec069d; S=0x35ec0659; 
@property(readonly, assign, nonatomic) NSDictionary *URLBagDictionary;	// G=0x35ec06d5; 
@property(readonly, assign) NSSet *availableStorefrontItemKinds;	// G=0x35ebf795; 
@property(assign, nonatomic) double invalidationTime;	// G=0x35ec1399; S=0x35ec13b1; @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x35ebf8b5; 
+ (id)_copyFallbackContextForContext:(id)context;	// 0x35ec070d
+ (void)_loadItemKindURLBagKeyMap;	// 0x35ebf48d
+ (id)_urlBagForContext:(id)context;	// 0x35ebf2fd
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;	// 0x35ec012d
+ (void)invalidateAllBags;	// 0x35ebefe9
+ (id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;	// 0x35ec01c9
+ (void)setURLBag:(id)bag forContext:(id)context;	// 0x35ebf0bd
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;	// 0x35ec0265
+ (id)storeFrontURLBagKeyForItemKind:(id)itemKind;	// 0x35ebf6f5
+ (id)urlBagForContext:(id)context;	// 0x35ebf3bd
+ (id)urlForKey:(id)key inBagContext:(id)bagContext;	// 0x35ec0319
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;	// 0x35ec038d
+ (id)valueForKey:(id)key inBagContext:(id)bagContext;	// 0x35ec0441
- (id)init;	// 0x35ebe855
- (id)initWithRawDictionary:(id)rawDictionary;	// 0x35ebe89d
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x35ebe965
// declared property getter: - (id)URLBagContext;	// 0x35ec069d
// declared property getter: - (id)URLBagDictionary;	// 0x35ec06d5
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;	// 0x35ebff11
- (id)_copyGUIDPatternsFromDictionary:(id)dictionary;	// 0x35ec0755
- (id)_copyGUIDSchemesFromDictionary:(id)dictionary;	// 0x35ec08f5
- (id)_copyHeaderPatternsFromDictionary:(id)dictionary;	// 0x35ec0a35
- (BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id *)error;	// 0x35ec0c0d
- (id)_networkConstraintsCachePath;	// 0x35ec0e6d
- (void)_setDictionary:(id)dictionary;	// 0x35ec0f19
- (void)_writeNetworkConstraintsCacheFile;	// 0x35ec0fbd
- (void)_writeURLResolutionCacheFile;	// 0x35ec1175
// declared property getter: - (id)availableStorefrontItemKinds;	// 0x35ebf795
- (id)copyExtraHeadersForURL:(id)url;	// 0x35ebeb55
- (void)dealloc;	// 0x35ebeab9
- (void)invalidate;	// 0x35ec04dd
// declared property getter: - (double)invalidationTime;	// 0x35ec1399
// declared property getter: - (BOOL)isValid;	// 0x35ebf8b5
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x35ebed75
- (id)networkConstraintsForDownloadKind:(id)downloadKind;	// 0x35ebf905
- (id)sanitizedURLForURL:(id)url;	// 0x35ec0525
- (id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;	// 0x35ebf9d5
// declared property setter: - (void)setInvalidationTime:(double)time;	// 0x35ec13b1
// declared property setter: - (void)setURLBagContext:(id)context;	// 0x35ec0659
- (BOOL)shouldSendGUIDForURL:(id)url;	// 0x35ebfc0d
- (id)urlForKey:(id)key;	// 0x35ebfd9d
- (BOOL)urlIsTrusted:(id)trusted;	// 0x35ebfde9
- (id)valueForKey:(id)key;	// 0x35ec010d
@end

