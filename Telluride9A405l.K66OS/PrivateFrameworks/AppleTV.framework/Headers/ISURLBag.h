/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary, NSSet, SSURLBagContext, SSNetworkConstraints;

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
@property(copy, nonatomic) SSURLBagContext *URLBagContext;	// G=0x35f39011; S=0x35f38fcd; 
@property(readonly, assign, nonatomic) NSDictionary *URLBagDictionary;	// G=0x35f39049; 
@property(readonly, assign) NSSet *availableStorefrontItemKinds;	// G=0x35f38109; 
@property(assign, nonatomic) double invalidationTime;	// G=0x35f39d0d; S=0x35f39d25; @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x35f38229; 
+ (id)_copyFallbackContextForContext:(id)context;	// 0x35f39081
+ (void)_loadItemKindURLBagKeyMap;	// 0x35f37e01
+ (id)_urlBagForContext:(id)context;	// 0x35f37c71
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;	// 0x35f38aa1
+ (void)invalidateAllBags;	// 0x35f3795d
+ (id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;	// 0x35f38b3d
+ (void)setURLBag:(id)bag forContext:(id)context;	// 0x35f37a31
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;	// 0x35f38bd9
+ (id)storeFrontURLBagKeyForItemKind:(id)itemKind;	// 0x35f38069
+ (id)urlBagForContext:(id)context;	// 0x35f37d31
+ (id)urlForKey:(id)key inBagContext:(id)bagContext;	// 0x35f38c8d
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;	// 0x35f38d01
+ (id)valueForKey:(id)key inBagContext:(id)bagContext;	// 0x35f38db5
- (id)init;	// 0x35f371c9
- (id)initWithRawDictionary:(id)rawDictionary;	// 0x35f37211
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x35f372d9
// declared property getter: - (id)URLBagContext;	// 0x35f39011
// declared property getter: - (id)URLBagDictionary;	// 0x35f39049
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;	// 0x35f38885
- (id)_copyGUIDPatternsFromDictionary:(id)dictionary;	// 0x35f390c9
- (id)_copyGUIDSchemesFromDictionary:(id)dictionary;	// 0x35f39269
- (id)_copyHeaderPatternsFromDictionary:(id)dictionary;	// 0x35f393a9
- (BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id *)error;	// 0x35f39581
- (id)_networkConstraintsCachePath;	// 0x35f397e1
- (void)_setDictionary:(id)dictionary;	// 0x35f3988d
- (void)_writeNetworkConstraintsCacheFile;	// 0x35f39931
- (void)_writeURLResolutionCacheFile;	// 0x35f39ae9
// declared property getter: - (id)availableStorefrontItemKinds;	// 0x35f38109
- (id)copyExtraHeadersForURL:(id)url;	// 0x35f374c9
- (void)dealloc;	// 0x35f3742d
- (void)invalidate;	// 0x35f38e51
// declared property getter: - (double)invalidationTime;	// 0x35f39d0d
// declared property getter: - (BOOL)isValid;	// 0x35f38229
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x35f376e9
- (id)networkConstraintsForDownloadKind:(id)downloadKind;	// 0x35f38279
- (id)sanitizedURLForURL:(id)url;	// 0x35f38e99
- (id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;	// 0x35f38349
// declared property setter: - (void)setInvalidationTime:(double)time;	// 0x35f39d25
// declared property setter: - (void)setURLBagContext:(id)context;	// 0x35f38fcd
- (BOOL)shouldSendGUIDForURL:(id)url;	// 0x35f38581
- (id)urlForKey:(id)key;	// 0x35f38711
- (BOOL)urlIsTrusted:(id)trusted;	// 0x35f3875d
- (id)valueForKey:(id)key;	// 0x35f38a81
@end
