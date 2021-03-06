/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFPage, UIImage, UIPDFPageRenderOperation;

@interface UIPDFPageRenderJob : NSObject {
	UIPDFPage *_page;	// 4 = 0x4
	unsigned _pageIndex;	// 8 = 0x8
	CGSize _size;	// 12 = 0xc
	int _priority;	// 20 = 0x14
	UIImage *_image;	// 24 = 0x18
	UIPDFPageRenderOperation *_operation;	// 28 = 0x1c
	id _target;	// 32 = 0x20
	SEL _callback;	// 36 = 0x24
	id _userData;	// 40 = 0x28
	BOOL _sendPending;	// 44 = 0x2c
	BOOL _releaseWhenDone;	// 45 = 0x2d
	int _lock;	// 48 = 0x30
}
@property(readonly, assign) UIImage *image;	// G=0x33891b55; @dynamic
@property(assign) UIPDFPageRenderOperation *operation;	// G=0x33891add; S=0x33891aa9; @dynamic
@property(readonly, assign) unsigned pageIndex;	// G=0x33892345; @synthesize=_pageIndex
@property(readonly, assign) int priority;	// G=0x33892359; @synthesize=_priority
@property(assign) BOOL releaseWhenDone;	// G=0x3389236d; S=0x33892385; @synthesize=_releaseWhenDone
- (id)initWithPage:(id)page maxSize:(CGSize)size queuePriority:(int)priority;	// 0x33891151
- (void)cancel;	// 0x338912f5
- (void)cancelOperation;	// 0x33891505
- (void)cancelOperationForTarget:(id)target;	// 0x338916f1
- (void)dealloc;	// 0x33891269
- (BOOL)hasPage;	// 0x33891119
// declared property getter: - (id)image;	// 0x33891b55
// declared property getter: - (id)operation;	// 0x33891add
// declared property getter: - (unsigned)pageIndex;	// 0x33892345
// declared property getter: - (int)priority;	// 0x33892359
- (void)releaseOperation;	// 0x33891b11
// declared property getter: - (BOOL)releaseWhenDone;	// 0x3389236d
- (void)renderImage;	// 0x33891b89
- (void)sendImage;	// 0x33891f61
- (void)sendImageTo:(id)to callback:(SEL)callback userData:(id)data;	// 0x33892125
// declared property setter: - (void)setOperation:(id)operation;	// 0x33891aa9
// declared property setter: - (void)setReleaseWhenDone:(BOOL)done;	// 0x33892385
- (void)setTarget:(id)target callback:(SEL)callback userData:(id)data;	// 0x33891901
@end

