/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CTCall : NSObject {
@private
	NSString *_callState;	// 4 = 0x4
	NSString *_callID;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *callID;	// G=0x3218c2e9; S=0x3218c2f9; @synthesize=_callID
@property(copy, nonatomic) NSString *callState;	// G=0x3218c2b5; S=0x3218c2c5; @synthesize=_callState
+ (id)callForCTCallRef:(CTCallRef)ctcallRef;	// 0x3218c02d
// declared property getter: - (id)callID;	// 0x3218c2e9
// declared property getter: - (id)callState;	// 0x3218c2b5
- (void)dealloc;	// 0x3218c17d
- (id)description;	// 0x3218c1c9
- (unsigned)hash;	// 0x3218c295
- (BOOL)isEqual:(id)equal;	// 0x3218c229
// declared property setter: - (void)setCallID:(id)anId;	// 0x3218c2f9
// declared property setter: - (void)setCallState:(id)state;	// 0x3218c2c5
@end

