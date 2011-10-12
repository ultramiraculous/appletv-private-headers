/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDWPListLabelGeometry : NSObject <GQDNameMappable> {
@private
	float mScale;	// 4 = 0x4
	float mBaselineOffset;	// 8 = 0x8
	BOOL mScaleWithText;	// 12 = 0xc
	int mLabelAlignment;	// 16 = 0x10
}
+ (const StateSpec *)stateForReading;	// 0x32be990d
- (float)baselineOffset;	// 0x32be9929
- (int)labelAlignment;	// 0x32be9949
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x32be9979
- (float)scale;	// 0x32be9919
- (BOOL)scaleWithText;	// 0x32be9939
@end

