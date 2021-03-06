/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {
	int _indentationLevel;	// 4 = 0x4
	UITableViewCell *_cell;	// 8 = 0x8
	float _height;	// 12 = 0xc
}
@property(retain, nonatomic) UITableViewCell *cell;	// G=0x32e6bfc5; S=0x32e6bfd5; @synthesize=_cell
@property(assign, nonatomic) float height;	// G=0x32e6bfa5; S=0x32e6bfb5; @synthesize=_height
@property(assign) int indentationLevel;	// G=0x32e6bf6d; S=0x32e6bf31; converted property
+ (id)row;	// 0x32e6bcb9
- (id)initWithCoder:(id)coder;	// 0x32e6bd01
// declared property getter: - (id)cell;	// 0x32e6bfc5
- (void)dealloc;	// 0x32e6bee5
- (void)encodeWithCoder:(id)coder;	// 0x32e6bdf5
// declared property getter: - (float)height;	// 0x32e6bfa5
// converted property getter: - (int)indentationLevel;	// 0x32e6bf6d
// declared property setter: - (void)setCell:(id)cell;	// 0x32e6bfd5
// declared property setter: - (void)setHeight:(float)height;	// 0x32e6bfb5
// converted property setter: - (void)setIndentationLevel:(int)level;	// 0x32e6bf31
@end

