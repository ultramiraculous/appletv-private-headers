/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIDetector.h"

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIFaceCoreDetector : CIDetector {
@private
	CIContext *context;	// 4 = 0x4
	void *faceCoreAPI;	// 8 = 0x8
}
@property(retain, nonatomic) CIContext *context;	// G=0x358b982d; S=0x358b983d; @synthesize
@property(assign) void *faceCoreAPI;	// G=0x358b980d; S=0x358b981d; @synthesize
- (id)initWithContext:(id)context options:(id)options;	// 0x358b8ff1
- (id)adjustedImageFromImage:(id)image orientation:(int)orientation inverseCTM:(CGAffineTransform *)ctm;	// 0x358b9a21
- (FaceCoreAPI *)api;	// 0x358b9439
// declared property getter: - (id)context;	// 0x358b982d
- (BOOL)createFaceCoreImage:(image *)image fromCIImage:(id)ciimage;	// 0x358b9b21
- (CGAffineTransform)ctmForImageWithBounds:(CGRect)bounds orientation:(int)orientation;	// 0x358b9861
- (void)dealloc;	// 0x358b9449
// declared property getter: - (void *)faceCoreAPI;	// 0x358b980d
- (id)featuresFromFaceVector:(vector<vision::lib::face, std::allocator<vision::lib::face> > *)faceVector ctm:(CGAffineTransform)ctm;	// 0x358b9da1
- (id)featuresInImage:(id)image;	// 0x358b97f9
- (id)featuresInImage:(id)image options:(id)options;	// 0x358b9535
- (void)finalize;	// 0x358b94c9
// declared property setter: - (void)setContext:(id)context;	// 0x358b983d
// declared property setter: - (void)setFaceCoreAPI:(void *)api;	// 0x358b981d
@end

