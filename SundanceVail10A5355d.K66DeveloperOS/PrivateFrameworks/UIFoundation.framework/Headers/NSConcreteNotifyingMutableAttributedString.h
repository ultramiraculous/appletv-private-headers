/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSConcreteMutableAttributedString.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {
	id _delegate;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x325534f5; S=0x325534e5; converted property
+ (Class)_mutableStringClass;	// 0x32553575
- (void)beginEditing;	// 0x32553505
// converted property getter: - (id)delegate;	// 0x325534f5
- (void)edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length;	// 0x32553545
- (void)endEditing;	// 0x32553525
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x325534e5
@end

