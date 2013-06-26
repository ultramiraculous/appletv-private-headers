/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import </libobjc.A.h>

@class HSFairPlayInfo, NSString, NSURL, HSConnectionStream, HSConnectionConfiguration;
@protocol OS_dispatch_queue;

@interface HSConnection : NSObject {
	HSConnectionConfiguration *_configuration;	// 4 = 0x4
	int _connectionState;	// 8 = 0x8
	HSConnectionStream *_connectionStream;	// 12 = 0xc
	int _connectionType;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_queue;	// 20 = 0x14
	CFReadStreamRef _readStream;	// 24 = 0x18
	BOOL authenticationRequired;	// 28 = 0x1c
	unsigned basePlaylistContainerID;	// 32 = 0x20
	unsigned databaseID;	// 36 = 0x24
	unsigned databaseRevision;	// 40 = 0x28
	HSFairPlayInfo *fairPlayInfo;	// 44 = 0x2c
	NSString *homeSharingGroupID;	// 48 = 0x30
	NSString *password;	// 52 = 0x34
	unsigned sessionID;	// 56 = 0x38
	NSString *username;	// 60 = 0x3c
	unsigned _interfaceID;	// 64 = 0x40
	unsigned _controlKey;	// 68 = 0x44
	unsigned _controlPort;	// 72 = 0x48
	unsigned _promptID;	// 76 = 0x4c
}
@property(assign, getter=isAuthenticationRequired) BOOL authenticationRequired;	// G=0x31067641; S=0x31067659; @synthesize
@property(assign) unsigned basePlaylistContainerID;	// G=0x31067671; S=0x31067685; @synthesize
@property(readonly, assign) NSURL *baseURL;	// G=0x3106439d; 
@property(assign) int connectionState;	// G=0x3106769d; S=0x310676b1; @synthesize=_connectionState
@property(readonly, assign) int connectionType;	// G=0x310676c9; @synthesize=_connectionType
@property(assign) unsigned controlKey;	// G=0x3106781d; S=0x31067831; @synthesize=_controlKey
@property(assign) unsigned controlPort;	// G=0x31067849; S=0x3106785d; @synthesize=_controlPort
@property(assign) unsigned databaseID;	// G=0x310676dd; S=0x310676f1; @synthesize
@property(assign) unsigned databaseRevision;	// G=0x31067709; S=0x3106771d; @synthesize
@property(retain) HSFairPlayInfo *fairPlayInfo;	// G=0x31067735; S=0x31067749; @synthesize
@property(copy) NSString *homeSharingGroupID;	// G=0x31067759; S=0x3106776d; @synthesize
@property(assign) unsigned interfaceID;	// G=0x310677f1; S=0x31067805; @synthesize=_interfaceID
@property(copy) NSString *password;	// G=0x3106777d; S=0x31067791; @synthesize
@property(assign, nonatomic) unsigned promptID;	// G=0x31067875; S=0x31064d3d; @synthesize=_promptID
@property(assign) unsigned sessionID;	// G=0x310677a1; S=0x310677b5; @synthesize
@property(copy) NSString *username;	// G=0x310677cd; S=0x310677e1; @synthesize
- (id)initWithBaseURL:(id)baseURL;	// 0x31064181
- (id)initWithBaseURL:(id)baseURL connectionType:(int)type;	// 0x31064195
- (id)initWithConfiguration:(id)configuration connectionType:(int)type;	// 0x31064215
- (void)_continueFPSetupNegotiationWithData:(id)data internalConnectionCompletionHandler:(id)handler;	// 0x310650b5
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)internalConnectionCompletionHandler;	// 0x310652dd
- (void)_notifyServerOfActivity;	// 0x31065c45
- (unsigned)_sapVersionForConnectionType;	// 0x31065ced
- (void)_sendRequest:(id)request withInternalResponseHandler:(id)internalResponseHandler;	// 0x31065cf1
- (void)_setupControlConnectionWithInternalConnectionCompletionHandler:(id)internalConnectionCompletionHandler;	// 0x31066fbd
// declared property getter: - (unsigned)basePlaylistContainerID;	// 0x31067671
// declared property getter: - (id)baseURL;	// 0x3106439d
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)completionHandler;	// 0x31064df9
- (void)connectWithCompletionHandler:(id)completionHandler;	// 0x310643e5
// declared property getter: - (int)connectionState;	// 0x3106769d
// declared property getter: - (int)connectionType;	// 0x310676c9
// declared property getter: - (unsigned)controlKey;	// 0x3106781d
// declared property getter: - (unsigned)controlPort;	// 0x31067849
// declared property getter: - (unsigned)databaseID;	// 0x310676dd
// declared property getter: - (unsigned)databaseRevision;	// 0x31067709
- (void)dealloc;	// 0x310642e9
- (void)disconnect;	// 0x31064975
// declared property getter: - (id)fairPlayInfo;	// 0x31067735
// declared property getter: - (id)homeSharingGroupID;	// 0x31067759
// declared property getter: - (unsigned)interfaceID;	// 0x310677f1
// declared property getter: - (BOOL)isAuthenticationRequired;	// 0x31067641
- (id)newControlConnection;	// 0x31064ba5
// declared property getter: - (id)password;	// 0x3106777d
// declared property getter: - (unsigned)promptID;	// 0x31067875
- (void)sendRequest:(id)request withResponseHandler:(id)responseHandler;	// 0x31064c39
// declared property getter: - (unsigned)sessionID;	// 0x310677a1
// declared property setter: - (void)setAuthenticationRequired:(BOOL)required;	// 0x31067659
// declared property setter: - (void)setBasePlaylistContainerID:(unsigned)anId;	// 0x31067685
// declared property setter: - (void)setConnectionState:(int)state;	// 0x310676b1
// declared property setter: - (void)setControlKey:(unsigned)key;	// 0x31067831
// declared property setter: - (void)setControlPort:(unsigned)port;	// 0x3106785d
// declared property setter: - (void)setDatabaseID:(unsigned)anId;	// 0x310676f1
// declared property setter: - (void)setDatabaseRevision:(unsigned)revision;	// 0x3106771d
// declared property setter: - (void)setFairPlayInfo:(id)info;	// 0x31067749
// declared property setter: - (void)setHomeSharingGroupID:(id)anId;	// 0x3106776d
// declared property setter: - (void)setInterfaceID:(unsigned)anId;	// 0x31067805
// declared property setter: - (void)setPassword:(id)password;	// 0x31067791
// declared property setter: - (void)setPromptID:(unsigned)anId;	// 0x31064d3d
// declared property setter: - (void)setSessionID:(unsigned)anId;	// 0x310677b5
// declared property setter: - (void)setUsername:(id)username;	// 0x310677e1
// declared property getter: - (id)username;	// 0x310677cd
@end
