/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidate.h"
#import "UIKit-Structs.h"

@class NSString;

@interface UIKeyboardCandidateSingle : UIKeyboardCandidate {
@private
	NSString *_candidate;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *candidate;	// G=0x33a7e1e5; S=0x33a7e1c1; @synthesize=_candidate
- (id)initWithCandidate:(id)candidate;	// 0x33a7e179
// declared property getter: - (id)candidate;	// 0x33a7e1e5
- (id)copyWithZone:(NSZone *)zone;	// 0x33c6ee0d
- (void)dealloc;	// 0x33a83451
// declared property setter: - (void)setCandidate:(id)candidate;	// 0x33a7e1c1
@end

