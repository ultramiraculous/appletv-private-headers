/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedCarouselDataSource : XXUnknownSuperclass <ATVCarouselViewDataSource> {
	NSDictionary *_data;	// 4 = 0x4
	NSString *_templateName;	// 8 = 0x8
}
- (id)initWithData:(id)data templateName:(id)name;	// 0x1327f5
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x132915
- (void)dealloc;	// 0x13286d
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x1328d1
@end

