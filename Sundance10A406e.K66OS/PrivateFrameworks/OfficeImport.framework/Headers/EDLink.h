/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

@interface EDLink : NSObject {
	int mType;	// 4 = 0x4
	EDCollection *mExternalNames;	// 8 = 0x8
}
@property(assign) int type;	// G=0x34f28795; S=0x35083829; converted property
+ (id)linkWithType:(int)type;	// 0x34ef6ff5
- (id)initWithType:(int)type;	// 0x34ef7041
- (void)dealloc;	// 0x34f1ac0d
- (id)externalNames;	// 0x35024b9d
// converted property setter: - (void)setType:(int)type;	// 0x35083829
// converted property getter: - (int)type;	// 0x34f28795
@end

