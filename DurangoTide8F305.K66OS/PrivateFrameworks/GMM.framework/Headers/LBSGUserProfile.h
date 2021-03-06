/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface LBSGUserProfile : PBCodable {
@private
	NSString *_userName;	// 4 = 0x4
	NSString *_authToken;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *authToken;	// G=0x32bad849; S=0x32badbd9; @synthesize=_authToken
@property(readonly, assign, nonatomic) BOOL hasAuthToken;	// G=0x32bad835; 
@property(readonly, assign, nonatomic) BOOL hasUserName;	// G=0x32bad821; 
@property(retain, nonatomic) NSString *userName;	// G=0x32bad859; S=0x32badbb1; @synthesize=_userName
- (id)init;	// 0x32bad869
// declared property getter: - (id)authToken;	// 0x32bad849
- (void)dealloc;	// 0x32badb55
- (id)description;	// 0x32bad905
- (id)dictionaryRepresentation;	// 0x32bad895
// declared property getter: - (BOOL)hasAuthToken;	// 0x32bad835
// declared property getter: - (BOOL)hasUserName;	// 0x32bad821
- (BOOL)readFrom:(id)from;	// 0x32bada59
// declared property setter: - (void)setAuthToken:(id)token;	// 0x32badbd9
// declared property setter: - (void)setUserName:(id)name;	// 0x32badbb1
// declared property getter: - (id)userName;	// 0x32bad859
- (void)writeTo:(id)to;	// 0x32bad9e9
@end

