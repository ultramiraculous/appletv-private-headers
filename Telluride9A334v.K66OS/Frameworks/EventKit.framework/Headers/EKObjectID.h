/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface EKObjectID : NSObject <NSCopying, NSCoding> {
@private
	BOOL _temporary;	// 4 = 0x4
	int _entityType;	// 8 = 0x8
	int _rowID;	// 12 = 0xc
}
@property(readonly, assign) int entityType;	// G=0x327a2439; converted property
@property(readonly, assign) int rowID;	// G=0x32762a05; converted property
@property(readonly, assign, getter=isTemporary) BOOL temporary;	// G=0x3274a449; converted property
+ (id)objectIDWithCADObjectID:(XXStruct_K5nmsA)cadobjectID;	// 0x32749319
+ (id)objectIDWithEntityType:(int)entityType rowID:(int)anId;	// 0x3274e995
+ (id)objectIDWithURL:(id)url;	// 0x327a2135
+ (id)temporaryObjectIDWithEntityType:(int)entityType;	// 0x32758c5d
- (id)initWithCoder:(id)coder;	// 0x327624b1
- (id)initWithEntityType:(int)entityType rowID:(int)anId temporary:(BOOL)temporary;	// 0x32749369
- (XXStruct_K5nmsA)CADObjectID;	// 0x3274a459
- (id)URIRepresentation;	// 0x327a24e9
- (id)copyWithZone:(NSZone *)zone;	// 0x32749b89
- (id)description;	// 0x327a2449
- (void)encodeWithCoder:(id)coder;	// 0x3274f0fd
- (id)entityName;	// 0x3274965d
// converted property getter: - (int)entityType;	// 0x327a2439
- (unsigned)hash;	// 0x327494f9
- (BOOL)isEqual:(id)equal;	// 0x32749e95
// converted property getter: - (BOOL)isTemporary;	// 0x3274a449
// converted property getter: - (int)rowID;	// 0x32762a05
- (id)stringRepresentation;	// 0x327a2459
@end

