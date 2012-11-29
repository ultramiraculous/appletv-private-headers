/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSManagedObject;

@interface NSMergeConflict : NSObject {
	id _source;	// 4 = 0x4
	id _snapshot1;	// 8 = 0x8
	id _snapshot2;	// 12 = 0xc
	id _snapshot3;	// 16 = 0x10
	unsigned _newVersion;	// 20 = 0x14
	unsigned _oldVersion;	// 24 = 0x18
}
@property(readonly, assign) NSDictionary *cachedSnapshot;	// G=0x3660116d; @synthesize=_snapshot2
@property(readonly, assign) unsigned newVersionNumber;	// G=0x36601195; @synthesize=_newVersion
@property(readonly, assign) NSDictionary *objectSnapshot;	// G=0x36601159; @synthesize=_snapshot1
@property(readonly, assign) unsigned oldVersionNumber;	// G=0x366011a9; @synthesize=_oldVersion
@property(readonly, assign) NSDictionary *persistedSnapshot;	// G=0x36601181; @synthesize=_snapshot3
@property(readonly, assign) NSManagedObject *sourceObject;	// G=0x36601145; @synthesize=_source
- (id)initWithSource:(id)source newVersion:(unsigned)version oldVersion:(unsigned)version3 cachedSnapshot:(id)snapshot persistedSnapshot:(id)snapshot5;	// 0x36600aa1
- (id)initWithSource:(id)source newVersion:(unsigned)version oldVersion:(unsigned)version3 snapshot1:(id)a1 snapshot2:(id)a2 snapshot3:(id)a3;	// 0x36600ba5
- (id)ancestorSnapshot;	// 0x36601141
// declared property getter: - (id)cachedSnapshot;	// 0x3660116d
- (void)dealloc;	// 0x36600db5
- (id)description;	// 0x36600c71
// declared property getter: - (unsigned)newVersionNumber;	// 0x36601195
- (id)objectForKey:(id)key;	// 0x36600e41
// declared property getter: - (id)objectSnapshot;	// 0x36601159
// declared property getter: - (unsigned)oldVersionNumber;	// 0x366011a9
// declared property getter: - (id)persistedSnapshot;	// 0x36601181
// declared property getter: - (id)sourceObject;	// 0x36601145
- (id)valueForKey:(id)key;	// 0x36600fad
@end
