/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"


@interface BRMediaObjectControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x33a6bb15
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33a6bb4d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x33a6bc55
@end

