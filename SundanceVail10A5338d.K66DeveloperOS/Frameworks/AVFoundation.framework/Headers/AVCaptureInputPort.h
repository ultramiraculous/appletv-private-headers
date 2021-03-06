/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVCaptureInput, NSString, AVCaptureInputPortInternal;

@interface AVCaptureInputPort : NSObject {
	AVCaptureInputPortInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x31795649; S=0x31795669; 
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *formatDescription;	// G=0x317955b1; 
@property(readonly, assign, nonatomic) AVCaptureInput *input;	// G=0x3179554d; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3179556d; 
+ (id)portWithInput:(id)input mediaType:(id)type formatDescription:(opaqueCMFormatDescription *)description enabled:(BOOL)enabled;	// 0x3179526d
- (id)init;	// 0x317952c5
- (id)initWithInput:(id)input mediaType:(id)type formatDescription:(opaqueCMFormatDescription *)description enabled:(BOOL)enabled;	// 0x31795345
- (void)_setFormatDescription:(opaqueCMFormatDescription *)description;	// 0x317955d1
- (void)dealloc;	// 0x317953e5
- (id)description;	// 0x31795451
// declared property getter: - (opaqueCMFormatDescription *)formatDescription;	// 0x317955b1
// declared property getter: - (id)input;	// 0x3179554d
// declared property getter: - (BOOL)isEnabled;	// 0x31795649
// declared property getter: - (id)mediaType;	// 0x3179556d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x31795669
- (void)setOwner:(id)owner;	// 0x31795431
@end

