/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSString;

@interface NetflixStorage : NetflixNrdObject <NetflixNrdObjectProtocol> {
}
@property(readonly, assign, nonatomic) NSString *NO_DEVICE_ACCOUNT;	// G=0x4c2c5d; 
+ (id)sharedInstance;	// 0x4c2b71
// declared property getter: - (id)NO_DEVICE_ACCOUNT;	// 0x4c2c5d
- (void)clear:(id)clear;	// 0x4c31e9
- (void)clearAll;	// 0x4c3271
- (id)data;	// 0x4c2c69
- (id)getData:(id)data;	// 0x4c2d99
- (id)getItem:(id)item key:(id)key;	// 0x4c3085
- (unsigned)length:(id)length;	// 0x4c2fa1
- (void)removeItem:(id)item key:(id)key;	// 0x4c315d
- (void)setItem:(id)item key:(id)key value:(id)value;	// 0x4c30d1
- (void)updateProperty:(id)property value:(id)value;	// 0x4c32f1
@end

