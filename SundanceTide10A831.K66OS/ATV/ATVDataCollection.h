/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataBaseItem.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, ATVDataClient;

__attribute__((visibility("hidden")))
@interface ATVDataCollection : XXUnknownSuperclass <ATVDataBaseItem> {
	NSMutableDictionary *_metadataDict;	// 4 = 0x4
	ATVDataClient *_dataClient;	// 8 = 0x8
}
@property(assign) __weak ATVDataClient *dataClient;	// G=0xcd709; S=0xcd729; @synthesize=_dataClient
@property(retain) NSMutableDictionary *metadataDict;	// G=0xcd6e5; S=0xcd6f9; @synthesize=_metadataDict
- (id)initWithDataClient:(id)dataClient;	// 0xcd3c9
- (void).cxx_destruct;	// 0xcd73d
- (id)concreteValueForProperty:(id)property;	// 0xcd6e1
// declared property getter: - (id)dataClient;	// 0xcd709
- (id)description;	// 0xcd55d
- (unsigned)hash;	// 0xcd4e5
- (BOOL)isDataItem;	// 0xcd6dd
- (BOOL)isEqual:(id)equal;	// 0xcd429
// declared property getter: - (id)metadataDict;	// 0xcd6e5
- (id)objectForKey:(id)key;	// 0xcd6bd
// declared property setter: - (void)setDataClient:(id)client;	// 0xcd729
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0xcd6f9
- (void)setObject:(id)object forKey:(id)key;	// 0xcd5f1
- (id)valueForProperty:(id)property;	// 0xcd58d
@end

