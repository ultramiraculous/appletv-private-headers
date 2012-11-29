/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "BRTextFieldDelegate.h"

@class ATVIPv4AddressEntryControl, NSString, BRHeaderControl, BRTextControl;
@protocol ATVDottedQuadEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVDottedQuadEntryController : BRController <BRTextFieldDelegate> {
	id<ATVDottedQuadEntryDelegate> _delegate;	// 96 = 0x60
	ATVIPv4AddressEntryControl *_editor;	// 100 = 0x64
	BRTextControl *_prompt;	// 104 = 0x68
	BRHeaderControl *_header;	// 108 = 0x6c
	NSString *_dottedQuad;	// 112 = 0x70
}
@property(retain) NSString *dottedQuad;	// G=0x1e7ba9; S=0x1e7bb9; converted property
- (id)initWithTitle:(id)title prompt:(id)prompt label:(id)label notifying:(id)notifying;	// 0x1e76b1
- (id)accessibilityLabel;	// 0x1e7c15
- (void)dealloc;	// 0x1e7871
// converted property getter: - (id)dottedQuad;	// 0x1e7ba9
// converted property setter: - (void)setDottedQuad:(id)quad;	// 0x1e7bb9
- (void)setFrame:(CGRect)frame;	// 0x1e7911
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x1e7acd
- (void)textDidChange:(id)text;	// 0x1e7aed
- (void)textDidEndEditing:(id)text;	// 0x1e7af1
@end
