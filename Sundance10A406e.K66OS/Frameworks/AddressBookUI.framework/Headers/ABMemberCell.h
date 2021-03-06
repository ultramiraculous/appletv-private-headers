/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewCell.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class NSArray;
@protocol ABStyleProvider;

@interface ABMemberCell : UITableViewCell {
	int _memberID;	// 300 = 0x12c
	NSArray *_namePieces;	// 304 = 0x130
	long _highlightIndex;	// 308 = 0x134
	BOOL _drawsComponentsRTL;	// 312 = 0x138
	BOOL _isGroup;	// 313 = 0x139
	id<ABStyleProvider> _styleProvider;	// 316 = 0x13c
	BOOL _isMe;	// 320 = 0x140
}
@property(assign, nonatomic) BOOL isMe;	// G=0x31429469; S=0x314280b1; @synthesize=_isMe
@property(assign) int memberID;	// G=0x3144fefd; S=0x31427f89; converted property
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x31429441; S=0x314274bd; @synthesize=_styleProvider
- (void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x31428619
- (CGSize)_drawText:(id)text withColor:(id)color shadowColor:(id)color3 shadowOffset:(CGSize)offset atPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x31429615
- (CGSize)_drawText:(id)text withColor:(id)color shadowColor:(id)color3 shadowOffset:(CGSize)offset atPoint:(CGPoint)point withFont:(id)font;	// 0x3142a391
- (id)_scriptingInfo;	// 0x3145debd
- (id)boldFont;	// 0x314295bd
- (void)dealloc;	// 0x3145dd79
- (id)description;	// 0x3145de55
- (void)drawRect:(CGRect)rect;	// 0x314285d5
- (id)groupName;	// 0x3145dddd
// declared property getter: - (BOOL)isMe;	// 0x31429469
- (id)italicFont;	// 0x3145de35
- (float)memberCellFieldSpacing;	// 0x31429415
// converted property getter: - (int)memberID;	// 0x3144fefd
- (id)regularFont;	// 0x31429509
- (void)setGroup:(BOOL)group;	// 0x31428085
- (void)setHighlightIndex:(long)index;	// 0x3142805d
- (void)setHighlighted:(BOOL)highlighted;	// 0x314281b9
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x314281f9
// declared property setter: - (void)setIsMe:(BOOL)me;	// 0x314280b1
// converted property setter: - (void)setMemberID:(int)anId;	// 0x31427f89
- (void)setNamePieces:(id)pieces;	// 0x31427fb1
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x31428179
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x314274bd
// declared property getter: - (id)styleProvider;	// 0x31429441
@end

