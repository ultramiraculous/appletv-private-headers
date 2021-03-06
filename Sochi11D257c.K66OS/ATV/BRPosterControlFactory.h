/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface BRPosterControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	ATVImage *_defaultImage;	// 4 = 0x4
}
+ (id)factory;	// 0x355ead
- (id)init;	// 0x355ee5
- (id)_posterForGridFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x356309
- (id)_posterForShelfFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x356355
- (id)_posterFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x3563ad
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x355f6d
- (void)dealloc;	// 0x355f21
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x3561d9
- (void)setDefaultImage:(id)image;	// 0x3562cd
@end

