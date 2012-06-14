/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface _UIPreviewItemProxy : NSObject {
@private
	NSURL *_URL;	// 4 = 0x4
	NSURL *_previewURLOverride;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSURL *_URLToDeleteOnDealloc;	// 16 = 0x10
	NSString *_previewItemContentType;	// 20 = 0x14
}
@property(copy, nonatomic) NSURL *URLToDeleteOnDealloc;	// G=0x3562b325; S=0x3562b335; @synthesize=_URLToDeleteOnDealloc
@property(copy, nonatomic) NSString *previewItemContentType;	// G=0x3562b1dd; S=0x3562b199; 
@property(copy, nonatomic) NSString *previewItemTitle;	// G=0x3562b2f1; S=0x3562b301; @synthesize=_name
@property(copy, nonatomic) NSURL *previewItemURL;	// G=0x3562b289; S=0x3562b299; @synthesize=_URL
@property(copy, nonatomic) NSURL *previewItemURLOverride;	// G=0x3562b2bd; S=0x3562b2cd; @synthesize=_previewURLOverride
// declared property getter: - (id)URLToDeleteOnDealloc;	// 0x3562b325
- (id)_primitive_previewItemContentType;	// 0x3562b245
- (void)dealloc;	// 0x3562b0b1
// declared property getter: - (id)previewItemContentType;	// 0x3562b1dd
// declared property getter: - (id)previewItemTitle;	// 0x3562b2f1
// declared property getter: - (id)previewItemURL;	// 0x3562b289
- (id)previewItemURLForDisplay;	// 0x3562b255
// declared property getter: - (id)previewItemURLOverride;	// 0x3562b2bd
// declared property setter: - (void)setPreviewItemContentType:(id)type;	// 0x3562b199
// declared property setter: - (void)setPreviewItemTitle:(id)title;	// 0x3562b301
// declared property setter: - (void)setPreviewItemURL:(id)url;	// 0x3562b299
// declared property setter: - (void)setPreviewItemURLOverride:(id)override;	// 0x3562b2cd
// declared property setter: - (void)setURLToDeleteOnDealloc:(id)deleteOnDealloc;	// 0x3562b335
@end
