/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PBAnimation : NSObject {
}
+ (id)createChartBuild:(id)build;	// 0x345d0df9
+ (id)createColorFromBehaviorColor:(PptAnimColorBehavior_Color_Struct *)behaviorColor;	// 0x345d0f4d
+ (id)createParaBuild:(id)build;	// 0x34530465
+ (void)generatePpt10AnimationFromState:(id)state timings:(id)timings;	// 0x344cb4f5
+ (BOOL)hasPpt10Animations:(id)animations;	// 0x344aa975
+ (void)mapAnimationsFromSlide:(id)slide tgtSlide:(id)slide2 state:(id)state;	// 0x344aa8cd
+ (void)parseAnimateBehaviorContainer:(id)container animBehavior:(id)behavior timeNode:(id)node;	// 0x344d4705
+ (id)parseBehaviorContainer:(id)container timeNode:(id)node state:(id)state;	// 0x344d3cad
+ (void)parseBuildList:(id)list buildMap:(id)map state:(id)state;	// 0x344d49e1
+ (void)parseCmdBehaviorContainer:(id)container cmdBehavior:(id)behavior timeNode:(id)node;	// 0x345d14cd
+ (void)parseColorBehaviorContainer:(id)container colorBehavior:(id)behavior timeNode:(id)node;	// 0x345d1181
+ (void)parseEffectBehaviorContainer:(id)container effectBehavior:(id)behavior timeNode:(id)node;	// 0x34566955
+ (id)parseMediaContainer:(id)container timeNode:(id)node state:(id)state;	// 0x345d1345
+ (void)parseMotionBehaviorContainer:(id)container motionBehavior:(id)behavior timeNode:(id)node;	// 0x345d15dd
+ (void)parsePpt10Animation:(id)animation timings:(id)timings state:(id)state;	// 0x344aaa7d
+ (void)parseRotationBehaviorContainer:(id)container rotationBehavior:(id)behavior timeNode:(id)node;	// 0x345d0e75
+ (void)parseTargetContainerHolder:(id)holder setTargetObj:(id)obj state:(id)state;	// 0x344d4341
+ (void)parseTimeConditionsHolder:(id)holder commonData:(id)data;	// 0x344d39e5
+ (void)parseTimeNodeContainer:(id)container siblings:(id)siblings state:(id)state;	// 0x344d340d
+ (void)parseTimeNodeVariants:(id)variants commonData:(id)data;	// 0x344d37b5
@end

