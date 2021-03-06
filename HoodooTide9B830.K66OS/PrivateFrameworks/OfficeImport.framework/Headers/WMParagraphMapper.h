/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class OIXMLElement, WDParagraph;

__attribute__((visibility("hidden")))
@interface WMParagraphMapper : CMMapper {
@private
	WDParagraph *wdParagraph;	// 8 = 0x8
	WMParagraphMapper *mCurrentMapper;	// 12 = 0xc
	OIXMLElement *mActiveNode;	// 16 = 0x10
	BOOL mIsDeleted;	// 20 = 0x14
}
+ (void)mapPlaceholderAt:(id)at rect:(CGRect)rect withState:(id)state;	// 0x313d4a81
- (id)initWithBlock:(id)block parent:(id)parent;	// 0x311769c1
- (id)activeNode;	// 0x31178ab1
- (BOOL)containsOfficeArt;	// 0x31178181
- (void)dealloc;	// 0x311759ad
- (BOOL)isCollapsable:(id)collapsable;	// 0x311759fd
- (BOOL)isTextFrame;	// 0x31176d4d
- (void)mapAt:(id)at withState:(id)state;	// 0x31176a11
- (void)mapFieldMarkerAt:(id)at marker:(id)marker withState:(id)state;	// 0x31235475
- (void)mapParagraphBodyWithState:(id)state;	// 0x311787bd
- (void)mapRunAt:(id)at run:(id)run withState:(id)state;	// 0x31178b99
- (id)runAtIndex:(int)index;	// 0x312a70f9
@end

