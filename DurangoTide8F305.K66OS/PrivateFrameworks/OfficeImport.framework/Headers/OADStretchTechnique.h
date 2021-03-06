/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADImageFillTechnique.h"

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADStretchTechnique : OADImageFillTechnique {
@private
	OADRelativeRect *mFillRect;	// 12 = 0xc
	BOOL mIsFillRectOverridden;	// 16 = 0x10
}
@property(retain) id fillRect;	// G=0x3458abc5; S=0x3456e505; converted property
+ (id)defaultProperties;	// 0x3444e885
- (id)initWithDefaults;	// 0x3456e481
- (id)copyWithZone:(NSZone *)zone;	// 0x34576915
- (void)dealloc;	// 0x343c9585
// converted property getter: - (id)fillRect;	// 0x3458abc5
- (unsigned)hash;	// 0x34439659
- (BOOL)isEqual:(id)equal;	// 0x3458b511
- (BOOL)isFillRectOverridden;	// 0x3458ab91
// converted property setter: - (void)setFillRect:(id)rect;	// 0x3456e505
@end

