/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSURL;
@protocol IMFileCopierDelegate;

@interface IMFileCopier : NSObject {
	NSURL *_inputURL;	// 4 = 0x4
	NSURL *_outputURL;	// 8 = 0x8
	id _identifier;	// 12 = 0xc
	id<IMFileCopierDelegate> _delegate;	// 16 = 0x10
	unsigned _operation;	// 20 = 0x14
	BOOL _inProgress;	// 24 = 0x18
	BOOL _shouldCancel;	// 25 = 0x19
	BOOL _didErrorOccur;	// 26 = 0x1a
}
@property(assign) id<IMFileCopierDelegate> delegate;	// G=0x31ae3d25; S=0x31ae3d35; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL didErrorOccur;	// G=0x31ae3cd5; @synthesize=_didErrorOccur
@property(readonly, assign) id identifier;	// G=0x31ae3cf5; @synthesize=_identifier
@property(readonly, assign) NSURL *inputURL;	// G=0x31ae3d15; @synthesize=_inputURL
@property(readonly, assign) NSURL *outputURL;	// G=0x31ae3d05; @synthesize=_outputURL
@property(readonly, assign, nonatomic) BOOL wasCancelled;	// G=0x31ae3ce5; @synthesize=_shouldCancel
- (id)initWithInputURL:(id)inputURL outputURL:(id)url identifier:(id)identifier operation:(unsigned)operation delegate:(id)delegate;	// 0x31ae40c1
- (void)_fillOutputURLFromInputURL;	// 0x31ae3edd
- (void)_main_copierFinishedWithResult:(id)result;	// 0x31ae3d45
- (id)_temporaryCopierPath;	// 0x31ae4185
- (void)_worker_doCopy;	// 0x31ae458d
- (void)cancel;	// 0x31ae3cc1
- (void)cleanup;	// 0x31ae3dd5
- (void)dealloc;	// 0x31ae4055
// declared property getter: - (id)delegate;	// 0x31ae3d25
// declared property getter: - (BOOL)didErrorOccur;	// 0x31ae3cd5
// declared property getter: - (id)identifier;	// 0x31ae3cf5
// declared property getter: - (id)inputURL;	// 0x31ae3d15
// declared property getter: - (id)outputURL;	// 0x31ae3d05
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31ae3d35
- (void)start;	// 0x31ae3e75
// declared property getter: - (BOOL)wasCancelled;	// 0x31ae3ce5
@end
