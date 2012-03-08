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
@property(assign) unsigned formatId;	// G=0x351fe805; S=0x35320ced; converted property
@property(assign) bool referenced;	// G=0x353739a5; S=0x351fea1d; converted property
+ (id)contentFormatWithFormatString:(id)formatString;	// 0x351fe689
+ (id)contentFormatWithFormatString:(id)formatString formatId:(unsigned)anId;	// 0x351fe661
+ (id)contentFormatWithNSString:(id)nsstring formatId:(unsigned)anId builtIn:(bool)anIn;	// 0x351fe4fd
- (id)init;	// 0x351fe6f5
- (bool)builtIn;	// 0x35373995
- (id)copyWithZone:(NSZone *)zone;	// 0x353739e1
- (void)dealloc;	// 0x3520d4e1
// converted property getter: - (unsigned)formatId;	// 0x351fe805
- (id)formatString;	// 0x35223979
- (unsigned)hash;	// 0x353739b5
- (BOOL)isEqual:(id)equal;	// 0x35203449
- (BOOL)isEqualToContentFormat:(id)contentFormat;	// 0x352034a5
- (unsigned)key;	// 0x351fea0d
// converted property getter: - (bool)referenced;	// 0x353739a5
// converted property setter: - (void)setFormatId:(unsigned)anId;	// 0x35320ced
// converted property setter: - (void)setReferenced:(bool)referenced;	// 0x351fea1d
@end
