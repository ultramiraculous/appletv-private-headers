/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : NSObject {
@private
	NSMutableArray *m_objects;	// 4 = 0x4
}
- (id)init;	// 0x3440b0bd
- (void)clear;	// 0x34411645
- (void)dealloc;	// 0x344061a5
- (int)deleteObject:(unsigned)object;	// 0x3440f739
- (id)getObject:(unsigned)object;	// 0x3463bff9
- (unsigned)insertPos;	// 0x3440d021
- (int)putObject:(id)object :(unsigned)arg2;	// 0x3440ce31
- (int)selectInto:(int)into :(id)arg2;	// 0x3440d139
- (int)size;	// 0x344f42e1
@end
