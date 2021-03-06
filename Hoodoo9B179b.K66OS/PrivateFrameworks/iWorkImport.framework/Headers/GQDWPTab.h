/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDWPTab : NSObject <GQDNameMappable> {
@private
	float mPosition;	// 4 = 0x4
	int mAlignment;	// 8 = 0x8
	CFStringRef mLeader;	// 12 = 0xc
}
+ (const StateSpec *)stateForReading;	// 0x3598e2e1
- (int)alignment;	// 0x3598e2fd
- (void)dealloc;	// 0x3598e4d5
- (CFStringRef)leader;	// 0x3598e30d
- (float)position;	// 0x3598e2ed
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3598e3c5
@end

