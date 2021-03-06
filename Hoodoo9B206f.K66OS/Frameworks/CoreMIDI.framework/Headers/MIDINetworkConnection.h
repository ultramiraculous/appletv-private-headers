/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import <NSObject.h> // Unknown library
#import "CoreMIDI-Structs.h"

@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {
@private
	MIDINetworkConnectionImpl *_impl;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) MIDINetworkHost *host;	// G=0x33d30bb5; 
+ (id)connectionWithHost:(id)host;	// 0x33d32821
- (id)init;	// 0x33d328e5
- (void)dealloc;	// 0x33d3288d
// declared property getter: - (id)host;	// 0x33d30bb5
@end

