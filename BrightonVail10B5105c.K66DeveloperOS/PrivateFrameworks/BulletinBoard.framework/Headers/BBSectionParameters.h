/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSLock, NSData, NSString, BBSectionSubtypeParameters;

@interface BBSectionParameters : NSObject {
	NSLock *_lock;	// 4 = 0x4
	BOOL _showsSubtitle;	// 8 = 0x8
	unsigned _messageNumberOfLines;	// 12 = 0xc
	BOOL _usesVariableLayout;	// 16 = 0x10
	BOOL _orderSectionUsingRecencyDate;	// 17 = 0x11
	BOOL _showsDateInFloatingLockScreenAlert;	// 18 = 0x12
	BBSectionSubtypeParameters *_defaultSubtypeParameters;	// 20 = 0x14
	NSMutableDictionary *_allSubtypeParameters;	// 24 = 0x18
	NSString *_displayName;	// 28 = 0x1c
	NSData *_iconData;	// 32 = 0x20
	BOOL _displaysCriticalBulletins;	// 36 = 0x24
	NSString *_uniqueIdentifier;	// 40 = 0x28
}
@property(retain, nonatomic) NSMutableDictionary *allSubtypeParameters;	// G=0x370da9f5; S=0x370daa05; @synthesize=_allSubtypeParameters
@property(retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters;	// G=0x370da9d5; S=0x370da9e5; @synthesize=_defaultSubtypeParameters
@property(copy, nonatomic) NSString *displayName;	// G=0x370daa15; S=0x370daa29; @synthesize=_displayName
@property(assign, nonatomic) BOOL displaysCriticalBulletins;	// G=0x370daa59; S=0x370daa69; @synthesize=_displaysCriticalBulletins
@property(retain, nonatomic) NSData *iconData;	// G=0x370daa39; S=0x370daa49; @synthesize=_iconData
@property(assign, nonatomic) unsigned messageNumberOfLines;	// G=0x370da955; S=0x370da965; @synthesize=_messageNumberOfLines
@property(assign, nonatomic) BOOL orderSectionUsingRecencyDate;	// G=0x370da995; S=0x370da9a5; @synthesize=_orderSectionUsingRecencyDate
@property(assign, nonatomic) BOOL showsDateInFloatingLockScreenAlert;	// G=0x370da9b5; S=0x370da9c5; @synthesize=_showsDateInFloatingLockScreenAlert
@property(assign, nonatomic) BOOL showsSubtitle;	// G=0x370da935; S=0x370da945; @synthesize=_showsSubtitle
@property(retain, nonatomic) NSString *uniqueIdentifier;	// G=0x370daa79; S=0x370daa89; @synthesize=_uniqueIdentifier
@property(assign, nonatomic) BOOL usesVariableLayout;	// G=0x370da975; S=0x370da985; @synthesize=_usesVariableLayout
+ (void)addSectionParametersToCache:(id)cache;	// 0x370da071
+ (id)copyCachedSectionParametersWithIdentifier:(id)identifier;	// 0x370da201
+ (void)removeSectionParametersFromCache:(id)cache;	// 0x370da141
- (id)init;	// 0x370d9f3d
- (id)initWithCoder:(id)coder;	// 0x370da469
// declared property getter: - (id)allSubtypeParameters;	// 0x370da9f5
- (void)dealloc;	// 0x370da279
// declared property getter: - (id)defaultSubtypeParameters;	// 0x370da9d5
// declared property getter: - (id)displayName;	// 0x370daa15
// declared property getter: - (BOOL)displaysCriticalBulletins;	// 0x370daa59
- (void)encodeWithCoder:(id)coder;	// 0x370da749
// declared property getter: - (id)iconData;	// 0x370daa39
// declared property getter: - (unsigned)messageNumberOfLines;	// 0x370da955
// declared property getter: - (BOOL)orderSectionUsingRecencyDate;	// 0x370da995
- (id)parametersForSubtype:(int)subtype;	// 0x370da375
// declared property setter: - (void)setAllSubtypeParameters:(id)parameters;	// 0x370daa05
// declared property setter: - (void)setDefaultSubtypeParameters:(id)parameters;	// 0x370da9e5
// declared property setter: - (void)setDisplayName:(id)name;	// 0x370daa29
// declared property setter: - (void)setDisplaysCriticalBulletins:(BOOL)bulletins;	// 0x370daa69
// declared property setter: - (void)setIconData:(id)data;	// 0x370daa49
// declared property setter: - (void)setMessageNumberOfLines:(unsigned)lines;	// 0x370da965
// declared property setter: - (void)setOrderSectionUsingRecencyDate:(BOOL)date;	// 0x370da9a5
// declared property setter: - (void)setShowsDateInFloatingLockScreenAlert:(BOOL)floatingLockScreenAlert;	// 0x370da9c5
// declared property setter: - (void)setShowsSubtitle:(BOOL)subtitle;	// 0x370da945
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x370daa89
// declared property setter: - (void)setUsesVariableLayout:(BOOL)layout;	// 0x370da985
// declared property getter: - (BOOL)showsDateInFloatingLockScreenAlert;	// 0x370da9b5
// declared property getter: - (BOOL)showsSubtitle;	// 0x370da935
// declared property getter: - (id)uniqueIdentifier;	// 0x370daa79
// declared property getter: - (BOOL)usesVariableLayout;	// 0x370da975
@end

