/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString;
@protocol MSStreamsProtocolDelegate;

@interface MSStreamsProtocol : NSObject {
	id<MSStreamsProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
}
@property(assign, nonatomic) id<MSStreamsProtocolDelegate> delegate;	// G=0x3375b969; S=0x3375b979; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSURL *deleteURL;	// G=0x3375b6c9; 
@property(readonly, assign, nonatomic) NSURL *getURL;	// G=0x3375b31d; 
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x3375b989; @synthesize=_personID
@property(readonly, assign, nonatomic) NSURL *putURL;	// G=0x3375b3d9; 
@property(readonly, assign, nonatomic) NSURL *reauthorizeURL;	// G=0x3375b551; 
@property(readonly, assign, nonatomic) NSURL *resetURL;	// G=0x3375b495; 
@property(readonly, assign, nonatomic) NSURL *uploadCompleteURL;	// G=0x3375b60d; 
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3375b2b5
- (void).cxx_destruct;	// 0x3375b999
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x3375b801
- (void)_didReceiveRetryAfterDate:(id)date;	// 0x3375b889
- (void)_refreshAuthTokenForContext:(MSSPCContext *)context;	// 0x3375b919
- (void)abort;	// 0x3375b785
// declared property getter: - (id)delegate;	// 0x3375b969
// declared property getter: - (id)deleteURL;	// 0x3375b6c9
- (id)deviceInfoDict;	// 0x3375b7ad
// declared property getter: - (id)getURL;	// 0x3375b31d
// declared property getter: - (id)personID;	// 0x3375b989
// declared property getter: - (id)putURL;	// 0x3375b3d9
// declared property getter: - (id)reauthorizeURL;	// 0x3375b551
// declared property getter: - (id)resetURL;	// 0x3375b495
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3375b979
// declared property getter: - (id)uploadCompleteURL;	// 0x3375b60d
@end
