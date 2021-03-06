/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString, CPProgressContext;

@interface CPProgressStage : NSObject {
	double m_currentPosition;	// 4 = 0x4
	double m_totalSteps;	// 12 = 0xc
	double m_stepsInParent;	// 20 = 0x14
	NSString *m_name;	// 28 = 0x1c
	CPProgressStage *m_parentStage;	// 32 = 0x20
	CPProgressContext *m_context;	// 36 = 0x24
}
@property(readonly, assign) double currentPosition;	// G=0x33b504d9; converted property
@property(readonly, retain) CPProgressStage *parentStage;	// G=0x33b504c9; converted property
- (id)initBranchWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name inContext:(id)context;	// 0x33b50265
- (id)initRootStageInContext:(id)context;	// 0x33b500f5
- (id)initWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name inContext:(id)context;	// 0x33b5016d
- (void)advanceProgress:(double)progress;	// 0x33b503c5
// converted property getter: - (double)currentPosition;	// 0x33b504d9
- (void)dealloc;	// 0x33b5035d
- (void)end;	// 0x33b504a1
// converted property getter: - (id)parentStage;	// 0x33b504c9
- (void)setProgress:(double)progress;	// 0x33b50471
@end

