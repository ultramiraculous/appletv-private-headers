/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDDrawable.h"
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"

@class GQDWPExternalTextWrap;

@interface GQDGroup : GQDDrawable <GQDNameMappable> {
	CFArrayRef mDrawables;	// 36 = 0x24
	GQDWPExternalTextWrap *mExternalTextWrap;	// 40 = 0x28
}
+ (const StateSpec *)stateForReading;	// 0x3507b9c9
- (void)dealloc;	// 0x3507b9d5
- (CFArrayRef)drawables;	// 0x3507ba39
- (id)externalTextWrap;	// 0x3507ba49
@end

