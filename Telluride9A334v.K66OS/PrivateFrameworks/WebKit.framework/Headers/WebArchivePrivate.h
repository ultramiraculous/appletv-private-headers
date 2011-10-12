/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebResource, NSArray;

__attribute__((visibility("hidden")))
@interface WebArchivePrivate : NSObject {
@private
	WebResource *cachedMainResource;	// 4 = 0x4
	NSArray *cachedSubresources;	// 8 = 0x8
	NSArray *cachedSubframeArchives;	// 12 = 0xc
	RefPtr<WebCore::LegacyWebArchive> coreArchive;	// 16 = 0x10
}
+ (void)initialize;	// 0x339c56fd
- (id)init;	// 0x339c55a5
- (id)initWithCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>)coreArchive;	// 0x339c57cd
- (id).cxx_construct;	// 0x339c5551
- (void).cxx_destruct;	// 0x339c5701
- (LegacyWebArchive *)coreArchive;	// 0x339c5541
- (void)dealloc;	// 0x339c5735
- (void)setCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>)archive;	// 0x339c5565
@end

