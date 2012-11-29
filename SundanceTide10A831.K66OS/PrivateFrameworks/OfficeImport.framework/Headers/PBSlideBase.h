/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface PBSlideBase : NSObject {
}
+ (void)initTransitionMap:(id)map;	// 0x36c43b6d
+ (id)createOptions:(long)options transType:(int)type;	// 0x36b54ec9
+ (unsigned char)mapDirection:(id)direction;	// 0x36c43f65
+ (void)mapSlideNumberPlaceholder:(id)placeholder tgtSlideBase:(id)base state:(id)state;	// 0x36a3bb8d
+ (void)parseSlideShowInfo:(PptSSSlideInfoAtom *)info slideBase:(id)base state:(id)state;	// 0x36b54c85
+ (int)parseTransType:(int)type direction:(long)direction;	// 0x36b54e1d
+ (void)readColorScheme:(id)scheme colorScheme:(id)scheme2 colorMap:(id)map state:(id)state;	// 0x369e94bd
+ (void)readDrawingGroup:(id)group slide:(id)slide state:(id)state;	// 0x369e9aa9
+ (BOOL)slideFollowsMasterBackground:(id)background;	// 0x36a38ed9
+ (void)writeSlideShowInfo:(id)info slideBase:(id)base state:(id)state;	// 0x36c43835
@end
