/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVAutoDismissable.h"
#import "BRControl.h"

@class NSString, BRMultiPartWidgetLayer;

__attribute__((visibility("hidden")))
@interface BRPopupDialogControl : BRControl <ATVAutoDismissable> {
	BRControl *_contentView;	// 84 = 0x54
	BRMultiPartWidgetLayer *_border;	// 88 = 0x58
	NSString *_identifier;	// 92 = 0x5c
	id _autoDismissHandler;	// 96 = 0x60
	XXStruct_40SSZC _extraInsetSize;	// 100 = 0x64
}
@property(copy, nonatomic) id autoDismissHandler;	// G=0x4e5349; S=0x4e535d; @synthesize=_autoDismissHandler
@property(retain, nonatomic) BRControl *contentView;	// G=0x4e4e7d; S=0x4e4e91; 
@property(assign, nonatomic) XXStruct_40SSZC extraInsetSize;	// G=0x4e5331; S=0x4e4e49; @synthesize=_extraInsetSize
- (id)initWithIdentifier:(id)identifier;	// 0x4e49e9
- (void).cxx_destruct;	// 0x4e536d
- (id)_computeFramesForSize:(CGSize)size;	// 0x4e4f09
- (void)_handleWindowMaxBoundsChanged;	// 0x4e4e6d
- (BOOL)autoDismiss;	// 0x4e4dd1
// declared property getter: - (id)autoDismissHandler;	// 0x4e5349
// declared property getter: - (id)contentView;	// 0x4e4e7d
- (void)dealloc;	// 0x4e4d61
// declared property getter: - (XXStruct_40SSZC)extraInsetSize;	// 0x4e5331
- (void)layoutSubcontrols;	// 0x4e52bd
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x4e4dcd
// declared property setter: - (void)setAutoDismissHandler:(id)handler;	// 0x4e535d
// declared property setter: - (void)setContentView:(id)view;	// 0x4e4e91
// declared property setter: - (void)setExtraInsetSize:(XXStruct_40SSZC)size;	// 0x4e4e49
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x4e5261
@end
