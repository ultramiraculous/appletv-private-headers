/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOResourceIdentifier : NSObject {
	NSString *_name;	// 4 = 0x4
	int _type;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *name;	// G=0x37a65b6d; S=0x37a65b81; @synthesize=_name
@property(assign, nonatomic) int type;	// G=0x37a65b91; S=0x37a65ba1; @synthesize=_type
- (void)dealloc;	// 0x37a65981
- (id)description;	// 0x37a65aad
- (unsigned)hash;	// 0x37a65a75
- (BOOL)isEqual:(id)equal;	// 0x37a659cd
// declared property getter: - (id)name;	// 0x37a65b6d
// declared property setter: - (void)setName:(id)name;	// 0x37a65b81
// declared property setter: - (void)setType:(int)type;	// 0x37a65ba1
// declared property getter: - (int)type;	// 0x37a65b91
@end

