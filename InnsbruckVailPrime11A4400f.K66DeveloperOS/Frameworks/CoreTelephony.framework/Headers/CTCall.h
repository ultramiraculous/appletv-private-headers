/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import </libobjc.A.h>

@class NSString;

@interface CTCall : NSObject {
	NSString *_callState;	// 4 = 0x4
	NSString *_callID;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *callID;	// G=0x2d9ae7f9; S=0x2d9ae80d; @synthesize=_callID
@property(copy, nonatomic) NSString *callState;	// G=0x2d9ae7d5; S=0x2d9ae7e9; @synthesize=_callState
+ (id)callForCTCallRef:(CTCallRef)ctcallRef;	// 0x2d9ae551
// declared property getter: - (id)callID;	// 0x2d9ae7f9
// declared property getter: - (id)callState;	// 0x2d9ae7d5
- (void)dealloc;	// 0x2d9ae6a1
- (id)description;	// 0x2d9ae6ed
- (unsigned)hash;	// 0x2d9ae7b5
- (BOOL)isEqual:(id)equal;	// 0x2d9ae759
// declared property setter: - (void)setCallID:(id)anId;	// 0x2d9ae80d
// declared property setter: - (void)setCallState:(id)state;	// 0x2d9ae7e9
@end
