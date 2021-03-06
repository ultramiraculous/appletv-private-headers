/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface AVAudioSessionPortDescription : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSString *UID;	// G=0x36883489; 
@property(readonly, assign) NSArray *channels;	// G=0x36883451; 
@property(readonly, assign) NSString *portName;	// G=0x36883419; 
@property(readonly, assign) NSString *portType;	// G=0x368833e1; 
+ (id)privateCreatePortDescriptionsArrayWithCFArray:(CFArrayRef)cfarray;	// 0x36883745
+ (id)privateCreateWithCFDictionaryRef:(CFDictionaryRef)cfdictionaryRef;	// 0x3688354d
- (id)init;	// 0x368832a1
// declared property getter: - (id)UID;	// 0x36883489
// declared property getter: - (id)channels;	// 0x36883451
- (void)dealloc;	// 0x368832f1
- (id)description;	// 0x368834c1
// declared property getter: - (id)portName;	// 0x36883419
// declared property getter: - (id)portType;	// 0x368833e1
- (PortDescriptionImpl *)privateGetImplementation;	// 0x3688353d
@end

