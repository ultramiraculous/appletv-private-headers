/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import </libobjc.A.h>

@class NSArray, NSDictionary, NSString;

@interface FTRegion : NSObject {
	NSDictionary *_dictionary;	// 4 = 0x4
	NSArray *_subRegions;	// 8 = 0x8
	FTRegion *_parentRegion;	// 12 = 0xc
}
@property(retain) NSDictionary *_dictionary;	// G=0x309d76dd; S=0x309d76f1; @synthesize
@property(retain) FTRegion *_parentRegion;	// G=0x309d7701; S=0x309d7715; @synthesize
@property(readonly, assign) NSString *basePhoneNumber;	// G=0x309d75f9; 
@property(readonly, assign) NSString *isoCode;	// G=0x309d75a9; 
@property(readonly, assign) NSString *label;	// G=0x309d75d1; 
@property(readonly, assign) FTRegion *parentRegion;	// G=0x309d7389; 
@property(readonly, assign) NSString *regionID;	// G=0x309d7621; 
@property(readonly, assign) NSArray *subRegions;	// G=0x309d7399; @synthesize=_subRegions
// declared property getter: - (id)_dictionary;	// 0x309d76dd
- (id)_initWithDictionary:(id)dictionary;	// 0x309d7109
// declared property getter: - (id)_parentRegion;	// 0x309d7701
- (void)_setParentRegion:(id)region;	// 0x309d7379
// declared property getter: - (id)basePhoneNumber;	// 0x309d75f9
- (void)dealloc;	// 0x309d72f5
- (id)description;	// 0x309d7649
// declared property getter: - (id)isoCode;	// 0x309d75a9
// declared property getter: - (id)label;	// 0x309d75d1
// declared property getter: - (id)parentRegion;	// 0x309d7389
// declared property getter: - (id)regionID;	// 0x309d7621
- (id)regionWithID:(id)anId;	// 0x309d73a9
// declared property setter: - (void)set_dictionary:(id)dictionary;	// 0x309d76f1
// declared property setter: - (void)set_parentRegion:(id)region;	// 0x309d7715
// declared property getter: - (id)subRegions;	// 0x309d7399
@end

