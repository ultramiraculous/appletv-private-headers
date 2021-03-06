/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVJSView : NSObject {
@private
	BRControl *_control;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BRControl *control;	// G=0x32aca9cd; @synthesize=_control
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x32aca3ad
+ (OpaqueJSValue *)constructObjectWithClassName:(id)className withATVJSViewClass:(Class)atvjsviewClass inContext:(OpaqueJSContext *)context;	// 0x32aca895
+ (id)viewFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x32aca825
// declared property getter: - (id)control;	// 0x32aca9cd
- (void)dealloc;	// 0x32aca8fd
- (id)makeControl;	// 0x32aca9b1
@end

