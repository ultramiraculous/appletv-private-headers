/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBulletProperties.h"

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADImageBulletProperties : OADBulletProperties {
@private
	OADBlipRef *mImage;	// 4 = 0x4
}
- (id)initWithBlipRef:(id)blipRef;	// 0x319f32e1
- (void)dealloc;	// 0x319f34ad
- (id)image;	// 0x31aaffc5
- (BOOL)isEqual:(id)equal;	// 0x319f3435
@end

