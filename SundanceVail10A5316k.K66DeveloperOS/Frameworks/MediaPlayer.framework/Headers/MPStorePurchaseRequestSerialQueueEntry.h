/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MPStorePurchaseRequestSerialQueueEntry : NSObject {
@private
	id item;	// 4 = 0x4
	id block;	// 8 = 0x8
	int identifier;	// 12 = 0xc
}
@property(copy, nonatomic) id block;	// G=0x348e07d5; S=0x348e07e9; @synthesize
@property(assign, nonatomic) int identifier;	// G=0x348e07f9; S=0x348e0809; @synthesize
@property(retain, nonatomic) id item;	// G=0x348e07b5; S=0x348e07c5; @synthesize
@property(readonly, assign, nonatomic) NSString *shortDescription;	// G=0x348e071d; 
- (id)initWithItem:(id)item block:(id)block;	// 0x348e0639
// declared property getter: - (id)block;	// 0x348e07d5
- (void)dealloc;	// 0x348e075d
- (id)description;	// 0x348e06bd
// declared property getter: - (int)identifier;	// 0x348e07f9
// declared property getter: - (id)item;	// 0x348e07b5
// declared property setter: - (void)setBlock:(id)block;	// 0x348e07e9
// declared property setter: - (void)setIdentifier:(int)identifier;	// 0x348e0809
// declared property setter: - (void)setItem:(id)item;	// 0x348e07c5
// declared property getter: - (id)shortDescription;	// 0x348e071d
@end

