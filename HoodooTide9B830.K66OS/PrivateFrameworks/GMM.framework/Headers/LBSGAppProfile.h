/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSGAppProfile : PBCodable {
	NSString *_appName;	// 4 = 0x4
	NSString *_appKey;	// 8 = 0x8
	BOOL _hasRequestType;	// 12 = 0xc
	int _requestType;	// 16 = 0x10
	BOOL _hasSearchType;	// 20 = 0x14
	int _searchType;	// 24 = 0x18
	NSString *_searchTerm;	// 28 = 0x1c
	BOOL _hasZoomLevel;	// 32 = 0x20
	int _zoomLevel;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *appKey;	// G=0x31fb3f39; S=0x31fb3f49; @synthesize=_appKey
@property(retain, nonatomic) NSString *appName;	// G=0x31fb3f05; S=0x31fb3f15; @synthesize=_appName
@property(readonly, assign, nonatomic) BOOL hasAppKey;	// G=0x31fb39d1; 
@property(readonly, assign, nonatomic) BOOL hasAppName;	// G=0x31fb39b9; 
@property(assign, nonatomic) BOOL hasRequestType;	// G=0x31fb3f6d; S=0x31fb3f7d; @synthesize=_hasRequestType
@property(readonly, assign, nonatomic) BOOL hasSearchTerm;	// G=0x31fb3a31; 
@property(assign, nonatomic) BOOL hasSearchType;	// G=0x31fb3f9d; S=0x31fb3fad; @synthesize=_hasSearchType
@property(assign, nonatomic) BOOL hasZoomLevel;	// G=0x31fb4001; S=0x31fb4011; @synthesize=_hasZoomLevel
@property(assign, nonatomic) int requestType;	// G=0x31fb3f8d; S=0x31fb39e9; @synthesize=_requestType
@property(retain, nonatomic) NSString *searchTerm;	// G=0x31fb3fcd; S=0x31fb3fdd; @synthesize=_searchTerm
@property(assign, nonatomic) int searchType;	// G=0x31fb3fbd; S=0x31fb3a0d; @synthesize=_searchType
@property(assign, nonatomic) int zoomLevel;	// G=0x31fb4021; S=0x31fb3a49; @synthesize=_zoomLevel
// declared property getter: - (id)appKey;	// 0x31fb3f39
// declared property getter: - (id)appName;	// 0x31fb3f05
- (void)dealloc;	// 0x31fb394d
- (id)description;	// 0x31fb3a6d
- (id)dictionaryRepresentation;	// 0x31fb3add
// declared property getter: - (BOOL)hasAppKey;	// 0x31fb39d1
// declared property getter: - (BOOL)hasAppName;	// 0x31fb39b9
// declared property getter: - (BOOL)hasRequestType;	// 0x31fb3f6d
// declared property getter: - (BOOL)hasSearchTerm;	// 0x31fb3a31
// declared property getter: - (BOOL)hasSearchType;	// 0x31fb3f9d
// declared property getter: - (BOOL)hasZoomLevel;	// 0x31fb4001
- (BOOL)readFrom:(id)from;	// 0x31fb3c91
// declared property getter: - (int)requestType;	// 0x31fb3f8d
// declared property getter: - (id)searchTerm;	// 0x31fb3fcd
// declared property getter: - (int)searchType;	// 0x31fb3fbd
// declared property setter: - (void)setAppKey:(id)key;	// 0x31fb3f49
// declared property setter: - (void)setAppName:(id)name;	// 0x31fb3f15
// declared property setter: - (void)setHasRequestType:(BOOL)type;	// 0x31fb3f7d
// declared property setter: - (void)setHasSearchType:(BOOL)type;	// 0x31fb3fad
// declared property setter: - (void)setHasZoomLevel:(BOOL)level;	// 0x31fb4011
// declared property setter: - (void)setRequestType:(int)type;	// 0x31fb39e9
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x31fb3fdd
// declared property setter: - (void)setSearchType:(int)type;	// 0x31fb3a0d
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x31fb3a49
- (void)writeTo:(id)to;	// 0x31fb3df5
// declared property getter: - (int)zoomLevel;	// 0x31fb4021
@end
