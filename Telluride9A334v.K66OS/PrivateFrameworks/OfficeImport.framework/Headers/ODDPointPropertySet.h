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
@property(assign) double customOffsetX;	// G=0x356aef0d; S=0x356aa739; converted property
@property(assign) double customOffsetY;	// G=0x356aef25; S=0x356aa725; converted property
@property(assign) double customScaleX;	// G=0x356aeedd; S=0x356aa6fd; converted property
@property(assign) double customScaleY;	// G=0x356aeef5; S=0x356aa711; converted property
@property(assign) BOOL customVerticalFlip;	// G=0x357909d1; S=0x356f200d; converted property
@property(retain) id layoutTypeId;	// G=0x356aba09; S=0x356aa451; converted property
@property(retain) id presentationAssociatedId;	// G=0x356ab53d; S=0x356aa6bd; converted property
@property(retain) id presentationName;	// G=0x356af791; S=0x356aa491; converted property
@property(assign) int presentationStyleCount;	// G=0x357909c1; S=0x356aa871; converted property
@property(assign) int presentationStyleIndex;	// G=0x356af809; S=0x356aa881; converted property
@property(retain) id presentationStyleLabel;	// G=0x356af7a1; S=0x356aa4d1; converted property
// converted property getter: - (double)customOffsetX;	// 0x356aef0d
// converted property getter: - (double)customOffsetY;	// 0x356aef25
// converted property getter: - (double)customScaleX;	// 0x356aeedd
// converted property getter: - (double)customScaleY;	// 0x356aeef5
// converted property getter: - (BOOL)customVerticalFlip;	// 0x357909d1
- (void)dealloc;	// 0x356b15cd
// converted property getter: - (id)layoutTypeId;	// 0x356aba09
// converted property getter: - (id)presentationAssociatedId;	// 0x356ab53d
// converted property getter: - (id)presentationName;	// 0x356af791
// converted property getter: - (int)presentationStyleCount;	// 0x357909c1
// converted property getter: - (int)presentationStyleIndex;	// 0x356af809
// converted property getter: - (id)presentationStyleLabel;	// 0x356af7a1
// converted property setter: - (void)setCustomOffsetX:(double)x;	// 0x356aa739
// converted property setter: - (void)setCustomOffsetY:(double)y;	// 0x356aa725
// converted property setter: - (void)setCustomScaleX:(double)x;	// 0x356aa6fd
// converted property setter: - (void)setCustomScaleY:(double)y;	// 0x356aa711
// converted property setter: - (void)setCustomVerticalFlip:(BOOL)flip;	// 0x356f200d
// converted property setter: - (void)setLayoutTypeId:(id)anId;	// 0x356aa451
// converted property setter: - (void)setPresentationAssociatedId:(id)anId;	// 0x356aa6bd
// converted property setter: - (void)setPresentationName:(id)name;	// 0x356aa491
// converted property setter: - (void)setPresentationStyleCount:(int)count;	// 0x356aa871
// converted property setter: - (void)setPresentationStyleIndex:(int)index;	// 0x356aa881
// converted property setter: - (void)setPresentationStyleLabel:(id)label;	// 0x356aa4d1
@end

