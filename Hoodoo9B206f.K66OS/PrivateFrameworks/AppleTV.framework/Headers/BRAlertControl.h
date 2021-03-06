/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRReflectionControl, BRAlignmentAdjustingTextControl, BRDividerControl, BRHeaderControl, BRImageControl;

@interface BRAlertControl : BRControl {
@private
	BRHeaderControl *_header;	// 48 = 0x30
	BRDividerControl *_divider;	// 52 = 0x34
	int _type;	// 56 = 0x38
	BRTextControl *_primary;	// 60 = 0x3c
	BRAlignmentAdjustingTextControl *_secondary;	// 64 = 0x40
	BRImageControl *_image;	// 68 = 0x44
	BRReflectionControl *_reflection;	// 72 = 0x48
}
@property(retain) BRImageControl *image;	// G=0x3667881d; S=0x366787d5; converted property
@property(retain) id primaryText;	// G=0x366786d9; S=0x36678659; converted property
@property(retain) id secondaryText;	// G=0x36678761; S=0x36678711; converted property
@property(retain) id title;	// G=0x36678639; S=0x366785f9; converted property
+ (id)alertForError:(id)error;	// 0x36678251
+ (id)alertOfType:(int)type;	// 0x366782f1
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x36678299
- (id)init;	// 0x36678339
- (id)initWithType:(int)type;	// 0x3667834d
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x36678371
- (id)_controlsForType:(int)type;	// 0x36678f59
- (void)_layoutSubcontrolsForAlert;	// 0x36678bd9
- (void)_layoutSubcontrolsForInfo;	// 0x36678879
- (id)_primaryTextAttibutesForType:(int)type;	// 0x366793b5
- (id)accessibilityLabel;	// 0x3667940d
- (void)controlWasActivated;	// 0x366784d5
- (void)dealloc;	// 0x36678425
// converted property getter: - (id)image;	// 0x3667881d
- (BOOL)isAccessibilityElement;	// 0x36679409
- (void)layoutSubcontrols;	// 0x3667883d
// converted property getter: - (id)primaryText;	// 0x366786d9
// converted property getter: - (id)secondaryText;	// 0x36678761
// converted property setter: - (void)setImage:(id)image;	// 0x366787d5
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x36678659
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x3667869d
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x36678711
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x36678799
// converted property setter: - (void)setTitle:(id)title;	// 0x366785f9
- (void)setType:(int)type;	// 0x36678509
// converted property getter: - (id)title;	// 0x36678639
@end

