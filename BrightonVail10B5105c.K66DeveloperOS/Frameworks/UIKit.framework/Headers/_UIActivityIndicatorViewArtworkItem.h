/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSDiscardableContent.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {
	NSString *_artKey;	// 4 = 0x4
	NSArray *_images;	// 8 = 0x8
	struct {
		unsigned isDiscarded : 1;
		unsigned useCount;
	} _flags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *artKey;	// G=0x347d5425; @synthesize=_artKey
@property(retain, nonatomic) NSArray *images;	// G=0x345fb615; S=0x34558279; @synthesize=_images
- (id)initWithArtKey:(id)artKey;	// 0x34557bc9
// declared property getter: - (id)artKey;	// 0x347d5425
- (BOOL)beginContentAccess;	// 0x34557c39
- (void)dealloc;	// 0x346b9839
- (void)discardContentIfPossible;	// 0x346b9811
- (void)endContentAccess;	// 0x345582d9
- (unsigned)hash;	// 0x347d5401
// declared property getter: - (id)images;	// 0x345fb615
- (BOOL)isContentDiscarded;	// 0x345fb601
// declared property setter: - (void)setImages:(id)images;	// 0x34558279
@end

