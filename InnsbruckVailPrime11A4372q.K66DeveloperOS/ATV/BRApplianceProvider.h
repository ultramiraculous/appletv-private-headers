/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_applianceInfo;	// 4 = 0x4
}
- (id)init;	// 0x32994d
- (void)_loadAppliances;	// 0x329bfd
- (id)applianceInfoAtIndex:(long)index;	// 0x329a81
- (long)applianceInfoIndexForKey:(id)key;	// 0x329ac9
- (id)controlFactory;	// 0x329b59
- (id)dataAtIndex:(long)index;	// 0x329b95
- (long)dataCount;	// 0x329b75
- (void)dealloc;	// 0x329a05
- (id)hashForDataAtIndex:(long)index;	// 0x329bb5
- (void)reloadAppliances;	// 0x329bed
@end

