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
- (id)init;	// 0x3481c5fd
- (void)addDefaultMappings:(BOOL)mappings;	// 0x3481f691
- (void)addMapping:(int)mapping index:(int)index;	// 0x3481f765
- (void)dealloc;	// 0x348892f9
- (BOOL)isEqual:(id)equal;	// 0x34a48dc9
- (int)mappingForIndex:(int)index;	// 0x3481f7cd
@end
