/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASEvent.h"

@class NSNumber, NSMutableDictionary, NSDate;

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
	NSNumber *_isDeleted;	// 172 = 0xac
	NSDate *_exceptionStartTime;	// 176 = 0xb0
	NSMutableDictionary *_placeHolder;	// 180 = 0xb4
	ASEvent *_originalEvent;	// 184 = 0xb8
}
@property(retain) id exceptionDate;	// G=0x33a13725; S=0x33a13735; converted property
@property(retain) NSDate *exceptionStartTime;	// G=0x33a13ad5; S=0x33a13b0d; converted property
@property(retain) NSNumber *isDeleted;	// G=0x33a13a59; S=0x33a13a91; converted property
@property(retain) ASEvent *originalEvent;	// G=0x33a13a39; S=0x33a13a49; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x33a1191d
+ (id)asParseRules;	// 0x33a11b81
+ (BOOL)frontingBasicTypes;	// 0x33a11a19
+ (BOOL)notifyOfUnknownTokens;	// 0x33a11a6d
+ (BOOL)parsingLeafNode;	// 0x33a11971
+ (BOOL)parsingWithSubItems;	// 0x33a119c5
- (id)initWithCalEvent:(void *)calEvent originalEvent:(id)event account:(id)account;	// 0x33a13025
- (id)initWithCoder:(id)coder;	// 0x33a13745
- (id)initWithExceptionStartTime:(id)exceptionStartTime;	// 0x33a131b1
- (void)_loadAttributesFromCalEvent:(void *)calEvent withKnownExceptionDate:(id)knownExceptionDate forAccount:(id)account;	// 0x33a12f69
- (id)_transformedExceptionStartDateForActiveSync:(id)activeSync isFloating:(BOOL)floating;	// 0x33a12199
- (id)_transformedExceptionStartDateForCalFramework:(id)calFramework;	// 0x33a12145
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x33a1324d
- (void)applyPlaceHolder;	// 0x33a11ac1
- (void)clearPlaceHolder;	// 0x33a11ae1
- (void)dealloc;	// 0x33a136ad
- (BOOL)deleteFromCalendar;	// 0x33a1322d
- (id)description;	// 0x33a135fd
- (void)encodeWithCoder:(id)coder;	// 0x33a13871
// converted property getter: - (id)exceptionDate;	// 0x33a13725
// converted property getter: - (id)exceptionStartTime;	// 0x33a13ad5
- (BOOL)hasOccurrenceInTheFuture;	// 0x33a1397d
// converted property getter: - (id)isDeleted;	// 0x33a13a59
- (void)loadClientIDs;	// 0x33a13599
// converted property getter: - (id)originalEvent;	// 0x33a13a39
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x33a120c9
- (void)postProcessApplicationData;	// 0x33a12591
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x33a1244d
- (id)serverIdForCalFrameworkWithParentEvent:(id)parentEvent;	// 0x33a12215
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x33a13735
// converted property setter: - (void)setExceptionStartTime:(id)time;	// 0x33a13b0d
// converted property setter: - (void)setIsDeleted:(id)deleted;	// 0x33a13a91
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x33a11b0d
// converted property setter: - (void)setOriginalEvent:(id)event;	// 0x33a13a49
- (void)takeValuesFromParentForAccount:(id)account;	// 0x33a128d5
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)localEvent;	// 0x33a12745
- (BOOL)verifyExternalIds;	// 0x33a12291
@end
