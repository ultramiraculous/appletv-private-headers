/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSString, NSMutableSet;

@interface MCAsset : MCObject {
	NSMutableSet *mTexts;	// 12 = 0xc
	NSString *mPath;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL isInUse;	// G=0x333fe651; 
@property(copy) NSString *path;	// G=0x333fe6fd; S=0x333fe711; @synthesize=mPath
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x333fe4f9
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x333fe6bd
- (void)demolish;	// 0x333fe569
- (void)forgetText:(id)text;	// 0x333fe69d
- (id)imprint;	// 0x333fe5f1
// declared property getter: - (BOOL)isInUse;	// 0x333fe651
- (void)learnText:(id)text;	// 0x333fe67d
// declared property getter: - (id)path;	// 0x333fe6fd
// declared property setter: - (void)setPath:(id)path;	// 0x333fe711
@end

