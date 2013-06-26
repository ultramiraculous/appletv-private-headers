/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class PDAnimationInfoData;

@interface PDAnimationInfo : NSObject {
	PDAnimationInfoData *mEntrance;	// 4 = 0x4
	PDAnimationInfoData *mExit;	// 8 = 0x8
	PDAnimationInfoData *mMedia;	// 12 = 0xc
}
@property(retain) id entranceData;	// G=0x31922325; S=0x319222e9; converted property
@property(retain) id exitData;	// G=0x31922371; S=0x31922335; converted property
@property(retain, nonatomic) PDAnimationInfoData *mediaData;	// G=0x31922381; S=0x31922391; @synthesize=mMedia
- (void)dealloc;	// 0x31922271
// converted property getter: - (id)entranceData;	// 0x31922325
// converted property getter: - (id)exitData;	// 0x31922371
// declared property getter: - (id)mediaData;	// 0x31922381
// converted property setter: - (void)setEntranceData:(id)data;	// 0x319222e9
// converted property setter: - (void)setExitData:(id)data;	// 0x31922335
// declared property setter: - (void)setMediaData:(id)data;	// 0x31922391
@end
