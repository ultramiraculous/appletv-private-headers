/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"


__attribute__((visibility("hidden")))
@interface _GEOExpTileData : NSObject {
@private
	id _data;	// 4 = 0x4
	ExpEntry *_entry;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) id data;	// G=0x34aeb361; @synthesize=_data
@property(assign, nonatomic) ExpEntry *entry;	// G=0x34aeb371; S=0x34aeb381; @synthesize=_entry
- (id)initWithData:(id)data entry:(ExpEntry *)entry;	// 0x34aeb2b1
// declared property getter: - (id)data;	// 0x34aeb361
- (void)dealloc;	// 0x34aeb315
// declared property getter: - (ExpEntry *)entry;	// 0x34aeb371
// declared property setter: - (void)setEntry:(ExpEntry *)entry;	// 0x34aeb381
@end

