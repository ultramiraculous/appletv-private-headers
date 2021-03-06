/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDKeyedObject.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class EDString;

__attribute__((visibility("hidden")))
@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {
@private
	EDString *mFormatString;	// 4 = 0x4
	unsigned mFormatId;	// 8 = 0x8
	bool mBuiltIn;	// 12 = 0xc
	bool mReferenced;	// 13 = 0xd
}
@property(assign) unsigned formatId;	// G=0x328f5805; S=0x32a17ced; converted property
@property(assign) bool referenced;	// G=0x32a6a9a5; S=0x328f5a1d; converted property
+ (id)contentFormatWithFormatString:(id)formatString;	// 0x328f5689
+ (id)contentFormatWithFormatString:(id)formatString formatId:(unsigned)anId;	// 0x328f5661
+ (id)contentFormatWithNSString:(id)nsstring formatId:(unsigned)anId builtIn:(bool)anIn;	// 0x328f54fd
- (id)init;	// 0x328f56f5
- (bool)builtIn;	// 0x32a6a995
- (id)copyWithZone:(NSZone *)zone;	// 0x32a6a9e1
- (void)dealloc;	// 0x329044e1
// converted property getter: - (unsigned)formatId;	// 0x328f5805
- (id)formatString;	// 0x3291a979
- (unsigned)hash;	// 0x32a6a9b5
- (BOOL)isEqual:(id)equal;	// 0x328fa449
- (BOOL)isEqualToContentFormat:(id)contentFormat;	// 0x328fa4a5
- (unsigned)key;	// 0x328f5a0d
// converted property getter: - (bool)referenced;	// 0x32a6a9a5
// converted property setter: - (void)setFormatId:(unsigned)anId;	// 0x32a17ced
// converted property setter: - (void)setReferenced:(bool)referenced;	// 0x328f5a1d
@end

