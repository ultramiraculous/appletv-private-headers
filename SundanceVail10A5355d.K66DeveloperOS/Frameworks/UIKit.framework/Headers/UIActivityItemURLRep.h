/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, NSURL;

__attribute__((visibility("hidden")))
@interface UIActivityItemURLRep : NSObject {
	NSURL *_URL;	// 4 = 0x4
	int _attachmentURLType;	// 8 = 0x8
	UIImage *_thumbnail;	// 12 = 0xc
}
@property(retain, nonatomic) NSURL *URL;	// G=0x33e2c299; S=0x33e2c2a9; @synthesize=_URL
@property(assign, nonatomic) int attachmentURLType;	// G=0x33e2c2b9; S=0x33e2c2c9; @synthesize=_attachmentURLType
@property(retain, nonatomic) UIImage *thumbnail;	// G=0x33e2c2d9; S=0x33e2c2e9; @synthesize=_thumbnail
// declared property getter: - (id)URL;	// 0x33e2c299
// declared property getter: - (int)attachmentURLType;	// 0x33e2c2b9
- (void)dealloc;	// 0x33e2c1f1
- (BOOL)isFileURL;	// 0x33e2c249
- (id)scheme;	// 0x33e2c271
// declared property setter: - (void)setAttachmentURLType:(int)type;	// 0x33e2c2c9
// declared property setter: - (void)setThumbnail:(id)thumbnail;	// 0x33e2c2e9
// declared property setter: - (void)setURL:(id)url;	// 0x33e2c2a9
// declared property getter: - (id)thumbnail;	// 0x33e2c2d9
@end
