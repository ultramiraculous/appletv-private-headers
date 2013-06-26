/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQPObjectReader.h"
#import </libobjc.A.h>
#import "GQPObjectHandler.h"
#import "iWorkImport-Structs.h"

@class GQDSStyle, GQDSStylesheet;

@interface GQPStyleReader : NSObject <GQPObjectReader, GQPObjectHandler> {
	int mStyleType;	// 4 = 0x4
	CFArrayRef mEntries;	// 8 = 0x8
	GQDSStylesheet *mStylesheet;	// 12 = 0xc
	int mCurrentProperty;	// 16 = 0x10
	BOOL mStyleIsIdentified;	// 20 = 0x14
	BOOL mStyleIdentiferEqualsParentIdentifier;	// 21 = 0x15
	char *mIdentifier;	// 24 = 0x18
	char *mUid;	// 28 = 0x1c
	char *mParentIdentifier;	// 32 = 0x20
	GQDSStyle *mStyle;	// 36 = 0x24
}
+ (void)initialize;	// 0x33ce7ad1
- (id)initWithStyleType:(int)styleType;	// 0x33ce7aed
- (BOOL)beginProperty:(const char *)property;	// 0x33ce8081
- (int)beginReadingFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x33ce7c35
- (id)createStyle;	// 0x33ce7fa1
- (void)dealloc;	// 0x33ce7b61
- (void)doneProperty;	// 0x33ce80c1
- (int)doneReading:(id)reading;	// 0x33ce7ea5
- (void)handleBoolValue:(BOOL)value;	// 0x33ce8129
- (void)handleDoubleValue:(double)value;	// 0x33ce81c5
- (void)handleFloatValue:(float)value;	// 0x33ce8191
- (void)handleIntValue:(int)value;	// 0x33ce815d
- (void)handleObject:(id)object;	// 0x33ce7f31
@end
