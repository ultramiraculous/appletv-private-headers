/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISURLOperationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SSURLRequestProperties, ISURLOperation, BRImageManager;
@protocol BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRImageLoadJob : XXUnknownSuperclass <ISURLOperationDelegate> {
	NSString *_imageName;	// 4 = 0x4
	SSURLRequestProperties *_requestProperties;	// 8 = 0x8
	BOOL _writeImage;	// 12 = 0xc
	id _output;	// 16 = 0x10
	BRImageManager *_manager;	// 20 = 0x14
	id<BRMusicStoreImageDecryptionAgent> _decryptionAgent;	// 24 = 0x18
	ISURLOperation *_operation;	// 28 = 0x1c
}
@property(readonly, retain) id output;	// G=0x3672b1; converted property
@property(readonly, retain) SSURLRequestProperties *requestProperties;	// G=0x367261; converted property
@property(readonly, assign) BOOL writeImage;	// G=0x3672a1; converted property
- (id)initWithName:(id)name requestProperties:(id)properties decryptionAgent:(id)agent writeImage:(BOOL)image;	// 0x367085
- (id)initWithName:(id)name url:(id)url headerFields:(id)fields decryptionAgent:(id)agent writeImage:(BOOL)image;	// 0x367125
- (void)dealloc;	// 0x3671b1
- (id)decryptionAgent;	// 0x367291
- (id)name;	// 0x367251
- (void)operation:(id)operation failedWithError:(id)error;	// 0x3673d1
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x367365
// converted property getter: - (id)output;	// 0x3672b1
// converted property getter: - (id)requestProperties;	// 0x367261
- (void)runForManager:(id)manager;	// 0x3672c1
- (id)url;	// 0x367271
// converted property getter: - (BOOL)writeImage;	// 0x3672a1
@end
