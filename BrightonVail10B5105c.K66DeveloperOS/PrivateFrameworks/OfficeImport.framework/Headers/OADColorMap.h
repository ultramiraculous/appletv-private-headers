/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface OADColorMap : NSObject {
	NSMutableDictionary *mMappings;	// 4 = 0x4
}
- (id)init;	// 0x378c25fd
- (void)addDefaultMappings:(BOOL)mappings;	// 0x378c5691
- (void)addMapping:(int)mapping index:(int)index;	// 0x378c5765
- (void)dealloc;	// 0x3792f2f9
- (BOOL)isEqual:(id)equal;	// 0x37aeedc9
- (int)mappingForIndex:(int)index;	// 0x378c57cd
@end

