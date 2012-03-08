/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ODILinear.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ODIImageLinear : ODILinear {
@private
	NSString *mImagePresentationName;	// 32 = 0x20
}
- (id)initWithImagePresentationName:(id)imagePresentationName state:(id)state;	// 0x353df119
- (void)dealloc;	// 0x353df0cd
- (void)mapPoint:(id)point bounds:(CGRect)bounds;	// 0x353dedb9
@end
