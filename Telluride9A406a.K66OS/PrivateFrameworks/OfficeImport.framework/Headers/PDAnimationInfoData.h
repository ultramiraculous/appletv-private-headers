/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDBuild, PDSequentialTimeNodeGroup, OADDrawable;

__attribute__((visibility("hidden")))
@interface PDAnimationInfoData : NSObject {
@private
	unsigned mOrder;	// 4 = 0x4
	PDBuild *mBuild;	// 8 = 0x8
	PDSequentialTimeNodeGroup *mSequentialTimeNodeData;	// 12 = 0xc
	OADDrawable *mDrawable;	// 16 = 0x10
}
- (id)initWithTargetElement:(id)targetElement presetClass:(int)aClass presetId:(int)anId triggerType:(int)type iterateType:(int)type5 delay:(double)delay direction:(double)direction order:(unsigned)order groupId:(id)anId9 build:(id)build;	// 0x32a475d5
- (id)build;	// 0x32a46c5d
- (id)data;	// 0x32a46c6d
- (void)dealloc;	// 0x32a477b9
- (id)drawable;	// 0x32a46c7d
- (unsigned)order;	// 0x32a46c4d
@end

