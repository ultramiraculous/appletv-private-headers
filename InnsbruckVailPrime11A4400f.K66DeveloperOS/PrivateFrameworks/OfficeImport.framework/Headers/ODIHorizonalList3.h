/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"

@class ODIState;

@interface ODIHorizonalList3 : NSObject {
	unsigned mMaxPointCount;	// 4 = 0x4
	ODIState *mState;	// 8 = 0x8
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x31986b01
- (id)initWithState:(id)state;	// 0x31986ca9
- (void)map;	// 0x31986d09
- (void)mapBaseStyleFromPoint:(id)point shape:(id)shape;	// 0x31987235
- (void)mapOnePillarStyleFromPoint:(id)point shape:(id)shape;	// 0x319871e9
- (void)mapPillarPoints:(id)points bounds:(CGRect)bounds;	// 0x31987001
- (void)mapRoofStyleFromPoint:(id)point shape:(id)shape;	// 0x319871a9
- (void)setMaxPointCount:(unsigned)count;	// 0x31986cf9
@end

