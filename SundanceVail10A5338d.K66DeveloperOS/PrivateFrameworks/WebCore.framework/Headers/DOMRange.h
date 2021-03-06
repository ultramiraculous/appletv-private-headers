/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"
#import "WebCore-Structs.h"

@class NSString, DOMNode;

@interface DOMRange : DOMObject {
}
@property(readonly, assign) BOOL collapsed;	// G=0x355ab35d; 
@property(readonly, assign) DOMNode *commonAncestorContainer;	// G=0x358572b9; 
@property(readonly, assign) DOMNode *endContainer;	// G=0x356f6a99; 
@property(readonly, assign) int endOffset;	// G=0x356f6bb5; 
@property(readonly, assign) DOMNode *startContainer;	// G=0x356f2541; 
@property(readonly, assign) int startOffset;	// G=0x356f6985; 
@property(readonly, assign) NSString *text;	// G=0x356f000d; 
- (id)_text;	// 0x357dd759
- (CGRect)boundingBox;	// 0x357dcdf9
- (id)cloneContents;	// 0x35858081
- (id)cloneRange;	// 0x358584f5
- (void)collapse:(BOOL)collapse;	// 0x35857aa1
// declared property getter: - (BOOL)collapsed;	// 0x355ab35d
// declared property getter: - (id)commonAncestorContainer;	// 0x358572b9
- (short)compareBoundaryPoints:(unsigned short)points :(id)arg2;	// 0x35857cd9
- (short)compareBoundaryPoints:(unsigned short)points sourceRange:(id)range;	// 0x356fbecd
- (short)compareNode:(id)node;	// 0x35858bc1
- (short)comparePoint:(id)point offset:(int)offset;	// 0x35858ce5
- (id)createContextualFragment:(id)fragment;	// 0x35858881
- (void)dealloc;	// 0x355b0279
- (void)deleteContents;	// 0x35857dfd
- (id)description;	// 0x357dd6a5
- (void)detach;	// 0x356f50a5
// declared property getter: - (id)endContainer;	// 0x356f6a99
// declared property getter: - (int)endOffset;	// 0x356f6bb5
- (void)expand:(id)expand;	// 0x35858f35
- (void)extend:(unsigned long)extend inDirection:(int)direction;	// 0x35861399
- (id)extractContents;	// 0x35857f0d
- (void)finalize;	// 0x358571b5
- (id)firstNode;	// 0x358617b9
- (void)insertNode:(id)node;	// 0x358581f5
- (BOOL)intersectsNode:(id)node;	// 0x35858a9d
- (BOOL)isPointInRange:(id)range offset:(int)offset;	// 0x35858e0d
- (id)lineBoxRects;	// 0x357dd005
- (void)move:(unsigned long)move inDirection:(int)direction;	// 0x35860f59
- (void)selectNode:(id)node;	// 0x356fea1d
- (void)selectNodeContents:(id)contents;	// 0x35857bb9
- (void)setEnd:(id)end :(int)arg2;	// 0x358576dd
- (void)setEnd:(id)end offset:(int)offset;	// 0x35857559
- (void)setEndAfter:(id)after;	// 0x356efe25
- (void)setEndBefore:(id)before;	// 0x35857981
- (void)setStart:(id)start :(int)arg2;	// 0x358573d5
- (void)setStart:(id)start offset:(int)offset;	// 0x356fad11
- (void)setStartAfter:(id)after;	// 0x35857861
- (void)setStartBefore:(id)before;	// 0x356ef959
// declared property getter: - (id)startContainer;	// 0x356f2541
// declared property getter: - (int)startOffset;	// 0x356f6985
- (void)surroundContents:(id)contents;	// 0x35858375
// declared property getter: - (id)text;	// 0x356f000d
- (id)textRects;	// 0x357dce2d
- (id)toString;	// 0x358586b5
@end

