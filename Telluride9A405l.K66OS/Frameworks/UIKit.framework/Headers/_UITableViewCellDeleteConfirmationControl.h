/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewCellDeleteConfirmationControl : UIControl {
@private
	NSString *_title;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) CGSize size;	// G=0x32dbc991; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x32dbcc95; 
+ (id)_backgroundImage;	// 0x32dbc845
+ (id)_highlightedBackgroundImage;	// 0x32dbd655
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x32dbc755
- (id)initWithTitle:(id)title;	// 0x32dbc891
- (void)dealloc;	// 0x32dbd85d
- (void)drawBackgroundInRect:(CGRect)rect;	// 0x32dbd329
- (void)drawRect:(CGRect)rect;	// 0x32dbd105
- (void)setBackgroundColor:(id)color;	// 0x32f2324d
// declared property getter: - (CGSize)size;	// 0x32dbc991
// declared property getter: - (id)title;	// 0x32dbcc95
@end

