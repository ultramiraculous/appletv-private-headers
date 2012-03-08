/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMDirectionsStepCue : PBCodable {
	BOOL _hasType;	// 4 = 0x4
	int _type;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_iconUrl;	// 16 = 0x10
	NSString *_iconText;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL hasIconText;	// G=0x33aa8f51; 
@property(readonly, assign, nonatomic) BOOL hasIconUrl;	// G=0x33aa8f39; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x33aa8f21; 
@property(assign, nonatomic) BOOL hasType;	// G=0x33aa92b9; S=0x33aa92c9; @synthesize=_hasType
@property(retain, nonatomic) NSString *iconText;	// G=0x33aa9351; S=0x33aa9361; @synthesize=_iconText
@property(retain, nonatomic) NSString *iconUrl;	// G=0x33aa931d; S=0x33aa932d; @synthesize=_iconUrl
@property(retain, nonatomic) NSString *name;	// G=0x33aa92e9; S=0x33aa92f9; @synthesize=_name
@property(assign, nonatomic) int type;	// G=0x33aa92d9; S=0x33aa8efd; @synthesize=_type
- (void)dealloc;	// 0x33aa8e91
- (id)description;	// 0x33aa8f69
- (id)dictionaryRepresentation;	// 0x33aa8fd9
// declared property getter: - (BOOL)hasIconText;	// 0x33aa8f51
// declared property getter: - (BOOL)hasIconUrl;	// 0x33aa8f39
// declared property getter: - (BOOL)hasName;	// 0x33aa8f21
// declared property getter: - (BOOL)hasType;	// 0x33aa92b9
// declared property getter: - (id)iconText;	// 0x33aa9351
// declared property getter: - (id)iconUrl;	// 0x33aa931d
// declared property getter: - (id)name;	// 0x33aa92e9
- (BOOL)readFrom:(id)from;	// 0x33aa90dd
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x33aa92c9
// declared property setter: - (void)setIconText:(id)text;	// 0x33aa9361
// declared property setter: - (void)setIconUrl:(id)url;	// 0x33aa932d
// declared property setter: - (void)setName:(id)name;	// 0x33aa92f9
// declared property setter: - (void)setType:(int)type;	// 0x33aa8efd
// declared property getter: - (int)type;	// 0x33aa92d9
- (void)writeTo:(id)to;	// 0x33aa920d
@end
