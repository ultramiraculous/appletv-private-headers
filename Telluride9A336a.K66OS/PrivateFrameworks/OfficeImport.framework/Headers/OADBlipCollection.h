/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADBlipCollection : NSObject {
@private
	NSMutableArray *mBlips;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *blips;	// G=0x34d12b71; S=0x34e1b709; @synthesize=mBlips
- (id)init;	// 0x34c28c39
- (unsigned long)addBlip:(id)blip;	// 0x34c3b869
- (id)blipAtIndex:(long)index;	// 0x34c44b15
- (unsigned long)blipCount;	// 0x34e1b6e9
// declared property getter: - (id)blips;	// 0x34d12b71
- (void)dealloc;	// 0x34c0e955
// declared property setter: - (void)setBlips:(id)blips;	// 0x34e1b709
@end

