/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSString;

@interface ATVStoreEnvironment : NSObject {
	NSString *_environment;	// 4 = 0x4
	NSString *_build;	// 8 = 0x8
	NSString *_branch;	// 12 = 0xc
	NSString *_stringData;	// 16 = 0x10
}
@property(retain) NSString *branch;	// G=0x304143dd; S=0x304143f1; @synthesize=_branch
@property(retain) NSString *build;	// G=0x304143b9; S=0x304143cd; @synthesize=_build
@property(retain) NSString *environment;	// G=0x30414395; S=0x304143a9; @synthesize=_environment
@property(readonly, assign) BOOL isProduction;	// G=0x304141e5; 
@property(retain) NSString *stringData;	// G=0x30414401; S=0x30414415; @synthesize=_stringData
- (id)initWithEnvironmentDictionary:(id)environmentDictionary;	// 0x30414071
- (id)initWithStorePage:(id)storePage;	// 0x30414199
- (void).cxx_destruct;	// 0x30414425
// declared property getter: - (id)branch;	// 0x304143dd
// declared property getter: - (id)build;	// 0x304143b9
- (id)description;	// 0x30414385
// declared property getter: - (id)environment;	// 0x30414395
- (BOOL)isEqual:(id)equal;	// 0x30414211
// declared property getter: - (BOOL)isProduction;	// 0x304141e5
// declared property setter: - (void)setBranch:(id)branch;	// 0x304143f1
// declared property setter: - (void)setBuild:(id)build;	// 0x304143cd
// declared property setter: - (void)setEnvironment:(id)environment;	// 0x304143a9
// declared property setter: - (void)setStringData:(id)data;	// 0x30414415
// declared property getter: - (id)stringData;	// 0x30414401
@end

