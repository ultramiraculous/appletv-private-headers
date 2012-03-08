/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSDictionary, SSXPCConnection, NSMutableDictionary;

@interface SSEntity : NSObject <SSXPCCoding> {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	NSMutableDictionary *_localExternalValues;	// 12 = 0xc
	NSMutableDictionary *_localValues;	// 16 = 0x10
	long long _pid;	// 20 = 0x14
}
@property(copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;	// G=0x324fe3ad; S=0x324fe7dd; 
@property(copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;	// G=0x324fe549; S=0x324fe8bd; 
@property(readonly, assign, getter=_isManaged) BOOL _managed;	// G=0x324fe6e5; 
@property(readonly, assign) long long _persistentIdentifier;	// G=0x324fe7c1; 
@property(readonly, assign) BOOL exists;	// G=0x324fd191; 
+ (long long)_existsMessage;	// 0x324fe089
+ (long long)_getExternalValuesMessage;	// 0x324fe091
+ (long long)_getValueMessage;	// 0x324fe099
+ (long long)_setExternalValuesMessage;	// 0x324fe0a1
+ (long long)_setValuesMessage;	// 0x324fe0a9
- (id)init;	// 0x324fd04d
- (void)_addCachedExternalValues:(id)values;	// 0x324fe0b1
- (void)_addCachedPropertyValues:(id)values;	// 0x324fe1b1
- (void)_becomeManagedOnConnection:(id)connection;	// 0x324fe2b1
- (id)_clientValueForProperty:(id)property databaseValue:(id)value;	// 0x324fe3a9
- (void)_getValues:(id *)values forProperties:(id *)properties count:(unsigned)count message:(long long)message;	// 0x324fe99d
- (id)_initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x324fd09d
// declared property getter: - (BOOL)_isManaged;	// 0x324fe6e5
// declared property getter: - (id)_localExternalValues;	// 0x324fe3ad
// declared property getter: - (id)_localValues;	// 0x324fe549
// declared property getter: - (long long)_persistentIdentifier;	// 0x324fe7c1
- (void)_resetLocalIVars;	// 0x324fe7d9
// declared property setter: - (void)_setLocalExternalValues:(id)values;	// 0x324fe7dd
// declared property setter: - (void)_setLocalValues:(id)values;	// 0x324fe8bd
- (void *)copyXPCEncoding;	// 0x324feead
- (void)dealloc;	// 0x324fd105
- (id)description;	// 0x324fdfa5
// declared property getter: - (BOOL)exists;	// 0x324fd191
- (void)getValues:(id *)values forExternalProperties:(id *)externalProperties count:(unsigned)count;	// 0x324fd9b1
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x324fd4c5
- (unsigned)hash;	// 0x324fe015
- (BOOL)isEqual:(id)equal;	// 0x324fe025
- (void)resetCachedExternalProperties:(id *)properties count:(unsigned)count;	// 0x324fda09
- (void)resetCachedProperties:(id *)properties count:(unsigned)count;	// 0x324fdadd
- (BOOL)setExternalValuesWithDictionary:(id)dictionary;	// 0x324fdbb1
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x324fd51d
- (BOOL)setValuesWithDictionary:(id)dictionary;	// 0x324fd5bd
- (id)valueForExternalProperty:(id)externalProperty;	// 0x324fdf79
- (id)valueForProperty:(id)property;	// 0x324fd985
@end
