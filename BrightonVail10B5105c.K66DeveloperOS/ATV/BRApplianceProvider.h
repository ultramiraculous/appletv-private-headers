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
- (id)init;	// 0x2bf73d
- (void)_loadAppliances;	// 0x2bf9e9
- (id)applianceInfoAtIndex:(long)index;	// 0x2bf86d
- (long)applianceInfoIndexForKey:(id)key;	// 0x2bf8b5
- (id)controlFactory;	// 0x2bf945
- (id)dataAtIndex:(long)index;	// 0x2bf981
- (long)dataCount;	// 0x2bf961
- (void)dealloc;	// 0x2bf7f1
- (id)hashForDataAtIndex:(long)index;	// 0x2bf9a1
- (void)reloadAppliances;	// 0x2bf9d9
@end

