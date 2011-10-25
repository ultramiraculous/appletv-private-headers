/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : NSObject {
@private
	NSString *mLayoutTypeId;	// 4 = 0x4
	NSString *mPresentationName;	// 8 = 0x8
	NSString *mPresentationStyleLabel;	// 12 = 0xc
	int mPresentationStyleIndex;	// 16 = 0x10
	int mPresentationStyleCount;	// 20 = 0x14
	NSObject *mPresentationAssociatedId;	// 24 = 0x18
	BOOL mCustomVerticalFlip;	// 28 = 0x1c
	double mCustomScaleX;	// 32 = 0x20
	double mCustomScaleY;	// 40 = 0x28
	double mCustomOffsetX;	// 48 = 0x30
	double mCustomOffsetY;	// 56 = 0x38
}
@property(assign) double customOffsetX;	// G=0x34d4bf0d; S=0x34d47739; converted property
@property(assign) double customOffsetY;	// G=0x34d4bf25; S=0x34d47725; converted property
@property(assign) double customScaleX;	// G=0x34d4bedd; S=0x34d476fd; converted property
@property(assign) double customScaleY;	// G=0x34d4bef5; S=0x34d47711; converted property
@property(assign) BOOL customVerticalFlip;	// G=0x34e2d9d1; S=0x34d8f00d; converted property
@property(retain) id layoutTypeId;	// G=0x34d48a09; S=0x34d47451; converted property
@property(retain) id presentationAssociatedId;	// G=0x34d4853d; S=0x34d476bd; converted property
@property(retain) id presentationName;	// G=0x34d4c791; S=0x34d47491; converted property
@property(assign) int presentationStyleCount;	// G=0x34e2d9c1; S=0x34d47871; converted property
@property(assign) int presentationStyleIndex;	// G=0x34d4c809; S=0x34d47881; converted property
@property(retain) id presentationStyleLabel;	// G=0x34d4c7a1; S=0x34d474d1; converted property
// converted property getter: - (double)customOffsetX;	// 0x34d4bf0d
// converted property getter: - (double)customOffsetY;	// 0x34d4bf25
// converted property getter: - (double)customScaleX;	// 0x34d4bedd
// converted property getter: - (double)customScaleY;	// 0x34d4bef5
// converted property getter: - (BOOL)customVerticalFlip;	// 0x34e2d9d1
- (void)dealloc;	// 0x34d4e5cd
// converted property getter: - (id)layoutTypeId;	// 0x34d48a09
// converted property getter: - (id)presentationAssociatedId;	// 0x34d4853d
// converted property getter: - (id)presentationName;	// 0x34d4c791
// converted property getter: - (int)presentationStyleCount;	// 0x34e2d9c1
// converted property getter: - (int)presentationStyleIndex;	// 0x34d4c809
// converted property getter: - (id)presentationStyleLabel;	// 0x34d4c7a1
// converted property setter: - (void)setCustomOffsetX:(double)x;	// 0x34d47739
// converted property setter: - (void)setCustomOffsetY:(double)y;	// 0x34d47725
// converted property setter: - (void)setCustomScaleX:(double)x;	// 0x34d476fd
// converted property setter: - (void)setCustomScaleY:(double)y;	// 0x34d47711
// converted property setter: - (void)setCustomVerticalFlip:(BOOL)flip;	// 0x34d8f00d
// converted property setter: - (void)setLayoutTypeId:(id)anId;	// 0x34d47451
// converted property setter: - (void)setPresentationAssociatedId:(id)anId;	// 0x34d476bd
// converted property setter: - (void)setPresentationName:(id)name;	// 0x34d47491
// converted property setter: - (void)setPresentationStyleCount:(int)count;	// 0x34d47871
// converted property setter: - (void)setPresentationStyleIndex:(int)index;	// 0x34d47881
// converted property setter: - (void)setPresentationStyleLabel:(id)label;	// 0x34d474d1
@end

