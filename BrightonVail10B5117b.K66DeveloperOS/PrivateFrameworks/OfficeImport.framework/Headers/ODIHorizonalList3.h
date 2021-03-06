/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ODIState;

@interface ODIHorizonalList3 : NSObject {
	unsigned mMaxPointCount;	// 4 = 0x4
	ODIState *mState;	// 8 = 0x8
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x34cc8559
- (id)initWithState:(id)state;	// 0x34cc8701
- (void)map;	// 0x34cc8769
- (void)mapBaseStyleFromPoint:(id)point shape:(id)shape;	// 0x34cc8cad
- (void)mapOnePillarStyleFromPoint:(id)point shape:(id)shape;	// 0x34cc8c61
- (void)mapPillarPoints:(id)points bounds:(CGRect)bounds;	// 0x34cc8a45
- (void)mapRoofStyleFromPoint:(id)point shape:(id)shape;	// 0x34cc8c21
- (void)setMaxPointCount:(unsigned)count;	// 0x34cc8759
@end

