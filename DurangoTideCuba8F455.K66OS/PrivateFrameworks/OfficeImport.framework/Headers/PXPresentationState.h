/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDPresentation, OAVState, OAXTableStyleCache, NSMutableDictionary, OAXDrawingState;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PXPresentationState : NSObject {
@private
	NSMutableDictionary *mModelObjects;	// 4 = 0x4
	OAXDrawingState *mOfficeArtState;	// 8 = 0x8
	OAVState *mOAVState;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mSlideURLToIndexMap;	// 20 = 0x14
	PDPresentation *mTgtPresentation;	// 24 = 0x18
	id<OCCancelDelegate> mCancel;	// 28 = 0x1c
}
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x32c8a329; S=0x32c710a9; @synthesize=mCancel
@property(retain) id tgtPresentation;	// G=0x32c75075; S=0x32c710d1; converted property
- (id)init;	// 0x32c70e55
// declared property getter: - (id)cancelDelegate;	// 0x32c8a329
- (void)dealloc;	// 0x32c77979
- (BOOL)isCancelled;	// 0x32c72669
- (id)modelObjectForLocation:(id)location;	// 0x32c777ed
- (id)oavState;	// 0x32d18369
- (id)officeArtState;	// 0x32c71579
- (void)resetOfficeArtState;	// 0x32c76f01
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x32c710a9
- (void)setModelObject:(id)object forLocation:(id)location;	// 0x32c7751d
- (void)setSlideIndex:(int)index forSlideURL:(id)slideURL;	// 0x32c713e5
// converted property setter: - (void)setTgtPresentation:(id)presentation;	// 0x32c710d1
- (int)slideIndexForSlideURL:(id)slideURL;	// 0x32cb0cdd
- (id)tableStyleCache;	// 0x32c71441
// converted property getter: - (id)tgtPresentation;	// 0x32c75075
@end

