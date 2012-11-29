/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol IMReachabilityDelegate;

@interface IMReachability : NSObject {
	id<IMReachabilityDelegate> _delegate;	// 4 = 0x4
	BOOL _gettingFlags;	// 8 = 0x8
	unsigned _flags;	// 12 = 0xc
	NSString *_description;	// 16 = 0x10
	void *_reachabilityRef;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL connectionRequired;	// G=0x3688a1fd; 
@property(assign, nonatomic) id<IMReachabilityDelegate> delegate;	// G=0x3688a229; S=0x3688a239; @synthesize=_delegate
@property(readonly, retain) NSString *description;	// G=0x36889ff5; converted property
@property(assign, nonatomic) unsigned flags;	// G=0x3688a1c5; S=0x3688a269; @synthesize=_flags
@property(assign, nonatomic) BOOL gettingFlags;	// G=0x3688a249; S=0x3688a259; @synthesize=_gettingFlags
@property(retain, nonatomic) NSString *reachabilityDescription;	// G=0x3688a279; S=0x3688a289; @synthesize=_description
@property(assign, nonatomic) void *reachabilityRef;	// G=0x3688a299; S=0x3688a2a9; @synthesize=_reachabilityRef
+ (id)reachabilityWithHostName:(id)hostName;	// 0x36889bcd
+ (id)reachabilityWithLocalAddress:(id)localAddress remoteAddress:(id)address;	// 0x36889c6d
+ (id)reachabilityWithRemoteAddress:(id)remoteAddress;	// 0x36889c19
- (id)initWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address delegate:(id)delegate;	// 0x36889e51
- (id)initWithRemoteHost:(id)remoteHost delegate:(id)delegate;	// 0x36889df5
- (void)_forceGetFlagsIfNecessary;	// 0x3688a13d
- (void)_handleCallbackForSCNetworkReachability:(SCNetworkReachabilityRef)scnetworkReachability;	// 0x3688a03d
- (id)_initWithReachabilityRef:(SCNetworkReachabilityRef)reachabilityRef description:(id)description delegate:(id)delegate;	// 0x36889cc1
// declared property getter: - (BOOL)connectionRequired;	// 0x3688a1fd
- (void)dealloc;	// 0x36889f65
// declared property getter: - (id)delegate;	// 0x3688a229
// converted property getter: - (id)description;	// 0x36889ff5
// declared property getter: - (unsigned)flags;	// 0x3688a1c5
// declared property getter: - (BOOL)gettingFlags;	// 0x3688a249
// declared property getter: - (id)reachabilityDescription;	// 0x3688a279
// declared property getter: - (void *)reachabilityRef;	// 0x3688a299
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3688a239
// declared property setter: - (void)setFlags:(unsigned)flags;	// 0x3688a269
// declared property setter: - (void)setGettingFlags:(BOOL)flags;	// 0x3688a259
// declared property setter: - (void)setReachabilityDescription:(id)description;	// 0x3688a289
// declared property setter: - (void)setReachabilityRef:(void *)ref;	// 0x3688a2a9
@end
